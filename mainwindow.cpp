#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QInputDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->subjectListWidget, &QListWidget::itemSelectionChanged,
            this, &MainWindow::subjectSelectionChanged);

    connect(ui->addSubjectButton, &QPushButton::clicked,
            this, &MainWindow::addSubject);
    connect(ui->removeSubjectButton, &QPushButton::clicked,
            this, &MainWindow::removeSubject);

    connect(ui->addGradeRecordButton, &QPushButton::clicked,
            this, &MainWindow::addGradeRecord);
    connect(ui->updateGradeRecordButton, &QPushButton::clicked,
            this, &MainWindow::updateGradeRecord);
    connect(ui->removeGradeRecordButton, &QPushButton::clicked,
            this, &MainWindow::removeGradeRecord);

    connect(ui->addExamCreditRecordButton, &QPushButton::clicked,
            this, &MainWindow::addExamCreditRecord);
    connect(ui->updateExamCreditRecordButton, &QPushButton::clicked,
            this, &MainWindow::updateExamCreditRecord);
    connect(ui->removeExamCreditRecordButton, &QPushButton::clicked,
            this, &MainWindow::removeExamCreditRecord);

    subjectsRecords.insert("Математика", SubjectRecords());
    ui->subjectListWidget->addItem("Математика");

    refreshGradesTable();
    refreshExamCreditTable();
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString MainWindow::currentSubject() const {
    if (ui->subjectListWidget->selectedItems().isEmpty())
        return QString();
    return ui->subjectListWidget->selectedItems().first()->text();
}

void MainWindow::addSubject() {
    bool ok;
    QString subject = QInputDialog::getText(this, "Добавить предмет",
                                            "Введите название предмета:", QLineEdit::Normal, "", &ok);
    if (ok && !subject.isEmpty()) {
        if (subjectsRecords.contains(subject)) {
            QMessageBox::warning(this, "Ошибка", "Предмет с таким названием уже существует!");
            return;
        }
        subjectsRecords.insert(subject, SubjectRecords());
        ui->subjectListWidget->addItem(subject);
    }
}

void MainWindow::removeSubject() {
    QListWidgetItem *item = ui->subjectListWidget->currentItem();
    if (!item) {
        QMessageBox::warning(this, "Ошибка", "Выберите предмет для удаления!");
        return;
    }
    QString subject = item->text();
    subjectsRecords.remove(subject);
    delete item;
    refreshGradesTable();
    refreshExamCreditTable();
}

void MainWindow::subjectSelectionChanged() {
    refreshGradesTable();
    refreshExamCreditTable();
}

void MainWindow::addGradeRecord() {
    QString subject = currentSubject();
    if (subject.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Выберите предмет в списке!");
        return;
    }
    QString name = ui->studentNameLineEdit->text();
    int grade = ui->gradeValueSpinBox->value();
    int course = ui->courseSpinBoxGrades->value();
    QString group = ui->groupLineEditGrades->text();

    if (name.isEmpty() || group.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Заполните обязательные поля: Имя студента и Группа!");
        return;
    }
    subjectsRecords[subject].grades.append(smart_ptr<Student>(new Student(name, grade, subject, course, group, false, 0)));
    refreshGradesTable();
}

void MainWindow::updateGradeRecord() {
    QString subject = currentSubject();
    if (subject.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Выберите предмет!");
        return;
    }
    int row = ui->gradesTableWidget->currentRow();
    // Получаем ссылку на QVector
    QVector<smart_ptr<Student>> &list = subjectsRecords[subject].grades;
    if (row < 0 || row >= list.size()) {
        QMessageBox::warning(this, "Ошибка", "Выберите запись для обновления!");
        return;
    }
    list[row]->setName(ui->studentNameLineEdit->text());
    list[row]->setGrade(ui->gradeValueSpinBox->value());
    list[row]->setCourse(ui->courseSpinBoxGrades->value());
    list[row]->setGroup(ui->groupLineEditGrades->text());
    refreshGradesTable();
}

void MainWindow::removeGradeRecord() {
    QString subject = currentSubject();
    if (subject.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Выберите предмет!");
        return;
    }
    int row = ui->gradesTableWidget->currentRow();
    QVector<smart_ptr<Student>> &list = subjectsRecords[subject].grades;
    if (row < 0 || row >= list.size()) {
        QMessageBox::warning(this, "Ошибка", "Выберите запись для удаления!");
        return;
    }
    if (row != list.size() - 1)
        std::swap(list[row], list[list.size() - 1]);
    list.pop_back();
    refreshGradesTable();
}

void MainWindow::addExamCreditRecord() {
    QString subject = currentSubject();
    if (subject.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Выберите предмет!");
        return;
    }
    QString name = ui->studentNameLineEditExam->text();
    bool credit = ui->creditCheckBoxExam->isChecked();
    int examGrade = ui->examGradeSpinBoxExam->value();
    int course = ui->courseSpinBoxExam->value();
    QString group = ui->groupLineEditExam->text();

    if (name.isEmpty() || group.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Заполните обязательные поля: Имя студента и Группа!");
        return;
    }
    subjectsRecords[subject].examCredits.append(smart_ptr<Student>(new Student(name, 0, subject, course, group, credit, examGrade)));
    refreshExamCreditTable();
}

void MainWindow::updateExamCreditRecord() {
    QString subject = currentSubject();
    if (subject.isEmpty()){
        QMessageBox::warning(this, "Ошибка", "Выберите предмет!");
        return;
    }
    int row = ui->examCreditTableWidget->currentRow();
    QVector<smart_ptr<Student>> &list = subjectsRecords[subject].examCredits;
    if (row < 0 || row >= list.size()){
        QMessageBox::warning(this, "Ошибка", "Выберите запись для обновления!");
        return;
    }
    list[row]->setName(ui->studentNameLineEditExam->text());
    list[row]->setCourse(ui->courseSpinBoxExam->value());
    list[row]->setGroup(ui->groupLineEditExam->text());
    list[row]->setCredit(ui->creditCheckBoxExam->isChecked());
    list[row]->setExamGrade(ui->examGradeSpinBoxExam->value());
    refreshExamCreditTable();
}

void MainWindow::removeExamCreditRecord() {
    QString subject = currentSubject();
    if (subject.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Выберите предмет!");
        return;
    }
    int row = ui->examCreditTableWidget->currentRow();
    QVector<smart_ptr<Student>> &list = subjectsRecords[subject].examCredits;
    if (row < 0 || row >= list.size()) {
        QMessageBox::warning(this, "Ошибка", "Выберите запись для удаления!");
        return;
    }
    if (row != list.size() - 1)
        std::swap(list[row], list[list.size() - 1]);
    list.pop_back();
    refreshExamCreditTable();
}

void MainWindow::refreshGradesTable() {
    ui->gradesTableWidget->clearContents();
    ui->gradesTableWidget->setRowCount(0);

    QString subject = currentSubject();
    if (subject.isEmpty())
        return;

    QVector<Student*> gradeRecords;
    for (smart_ptr<Student>& ptr : subjectsRecords[subject].grades)
        if (ptr->grade() != 0)
            gradeRecords.append(ptr.operator->());

    ui->gradesTableWidget->setRowCount(gradeRecords.size());
    for (int i = 0; i < gradeRecords.size(); i++) {
        Student *stud = gradeRecords.at(i);
        ui->gradesTableWidget->setItem(i, 0, new QTableWidgetItem(stud->name()));
        ui->gradesTableWidget->setItem(i, 1, new QTableWidgetItem(QString::number(stud->grade())));
        ui->gradesTableWidget->setItem(i, 2, new QTableWidgetItem(QString::number(stud->course())));
        ui->gradesTableWidget->setItem(i, 3, new QTableWidgetItem(stud->group()));
    }
}

void MainWindow::refreshExamCreditTable() {
    ui->examCreditTableWidget->clearContents();
    ui->examCreditTableWidget->setRowCount(0);

    QString subject = currentSubject();
    if (subject.isEmpty())
        return;

    QVector<Student*> examRecords;
    for (smart_ptr<Student>& ptr : subjectsRecords[subject].examCredits)
        if (ptr->credit() || ptr->examGrade() != 0)
            examRecords.append(ptr.operator->());

    ui->examCreditTableWidget->setRowCount(examRecords.size());
    for (int i = 0; i < examRecords.size(); i++) {
        Student *stud = examRecords.at(i);
        ui->examCreditTableWidget->setItem(i, 0, new QTableWidgetItem(stud->name()));
        ui->examCreditTableWidget->setItem(i, 1, new QTableWidgetItem(QString::number(stud->course())));
        ui->examCreditTableWidget->setItem(i, 2, new QTableWidgetItem(stud->group()));
        ui->examCreditTableWidget->setItem(i, 3, new QTableWidgetItem(stud->credit() ? "Зачет" : "Незачет"));
        ui->examCreditTableWidget->setItem(i, 4, new QTableWidgetItem(QString::number(stud->examGrade())));
    }
}

