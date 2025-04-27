/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayoutMain;
    QGroupBox *groupBoxSubjects;
    QVBoxLayout *verticalLayoutSubjects;
    QListWidget *subjectListWidget;
    QHBoxLayout *horizontalLayoutSubjectButtons;
    QPushButton *addSubjectButton;
    QPushButton *removeSubjectButton;
    QTabWidget *mainTabWidget;
    QWidget *tabGrades;
    QVBoxLayout *verticalLayoutGrades;
    QGroupBox *groupBoxGradeEntry;
    QFormLayout *formLayoutGrades;
    QLabel *labelStudentName;
    QLineEdit *studentNameLineEdit;
    QLabel *labelGradeValue;
    QSpinBox *gradeValueSpinBox;
    QLabel *labelCourseGrades;
    QSpinBox *courseSpinBoxGrades;
    QLabel *labelGroupGrades;
    QLineEdit *groupLineEditGrades;
    QHBoxLayout *horizontalLayoutGradeButtons;
    QPushButton *addGradeRecordButton;
    QPushButton *updateGradeRecordButton;
    QPushButton *removeGradeRecordButton;
    QTableWidget *gradesTableWidget;
    QWidget *tabExamCredit;
    QVBoxLayout *verticalLayoutExamCredit;
    QGroupBox *groupBoxExamCreditEntry;
    QFormLayout *formLayoutExamCredit;
    QLabel *labelStudentNameExam;
    QLineEdit *studentNameLineEditExam;
    QLabel *labelCreditExam;
    QCheckBox *creditCheckBoxExam;
    QLabel *labelExamGradeExam;
    QSpinBox *examGradeSpinBoxExam;
    QLabel *labelCourseExam;
    QSpinBox *courseSpinBoxExam;
    QLabel *labelGroupExam;
    QLineEdit *groupLineEditExam;
    QHBoxLayout *horizontalLayoutExamCreditButtons;
    QPushButton *addExamCreditRecordButton;
    QPushButton *updateExamCreditRecordButton;
    QPushButton *removeExamCreditRecordButton;
    QTableWidget *examCreditTableWidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(638, 482);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayoutMain = new QHBoxLayout(centralwidget);
        horizontalLayoutMain->setObjectName("horizontalLayoutMain");
        groupBoxSubjects = new QGroupBox(centralwidget);
        groupBoxSubjects->setObjectName("groupBoxSubjects");
        verticalLayoutSubjects = new QVBoxLayout(groupBoxSubjects);
        verticalLayoutSubjects->setObjectName("verticalLayoutSubjects");
        subjectListWidget = new QListWidget(groupBoxSubjects);
        subjectListWidget->setObjectName("subjectListWidget");

        verticalLayoutSubjects->addWidget(subjectListWidget);

        horizontalLayoutSubjectButtons = new QHBoxLayout();
        horizontalLayoutSubjectButtons->setObjectName("horizontalLayoutSubjectButtons");
        addSubjectButton = new QPushButton(groupBoxSubjects);
        addSubjectButton->setObjectName("addSubjectButton");

        horizontalLayoutSubjectButtons->addWidget(addSubjectButton);

        removeSubjectButton = new QPushButton(groupBoxSubjects);
        removeSubjectButton->setObjectName("removeSubjectButton");

        horizontalLayoutSubjectButtons->addWidget(removeSubjectButton);


        verticalLayoutSubjects->addLayout(horizontalLayoutSubjectButtons);


        horizontalLayoutMain->addWidget(groupBoxSubjects);

        mainTabWidget = new QTabWidget(centralwidget);
        mainTabWidget->setObjectName("mainTabWidget");
        tabGrades = new QWidget();
        tabGrades->setObjectName("tabGrades");
        verticalLayoutGrades = new QVBoxLayout(tabGrades);
        verticalLayoutGrades->setObjectName("verticalLayoutGrades");
        groupBoxGradeEntry = new QGroupBox(tabGrades);
        groupBoxGradeEntry->setObjectName("groupBoxGradeEntry");
        formLayoutGrades = new QFormLayout(groupBoxGradeEntry);
        formLayoutGrades->setObjectName("formLayoutGrades");
        labelStudentName = new QLabel(groupBoxGradeEntry);
        labelStudentName->setObjectName("labelStudentName");

        formLayoutGrades->setWidget(0, QFormLayout::LabelRole, labelStudentName);

        studentNameLineEdit = new QLineEdit(groupBoxGradeEntry);
        studentNameLineEdit->setObjectName("studentNameLineEdit");

        formLayoutGrades->setWidget(0, QFormLayout::FieldRole, studentNameLineEdit);

        labelGradeValue = new QLabel(groupBoxGradeEntry);
        labelGradeValue->setObjectName("labelGradeValue");

        formLayoutGrades->setWidget(1, QFormLayout::LabelRole, labelGradeValue);

        gradeValueSpinBox = new QSpinBox(groupBoxGradeEntry);
        gradeValueSpinBox->setObjectName("gradeValueSpinBox");
        gradeValueSpinBox->setMinimum(0);
        gradeValueSpinBox->setMaximum(100);

        formLayoutGrades->setWidget(1, QFormLayout::FieldRole, gradeValueSpinBox);

        labelCourseGrades = new QLabel(groupBoxGradeEntry);
        labelCourseGrades->setObjectName("labelCourseGrades");

        formLayoutGrades->setWidget(2, QFormLayout::LabelRole, labelCourseGrades);

        courseSpinBoxGrades = new QSpinBox(groupBoxGradeEntry);
        courseSpinBoxGrades->setObjectName("courseSpinBoxGrades");
        courseSpinBoxGrades->setMinimum(1);
        courseSpinBoxGrades->setMaximum(10);

        formLayoutGrades->setWidget(2, QFormLayout::FieldRole, courseSpinBoxGrades);

        labelGroupGrades = new QLabel(groupBoxGradeEntry);
        labelGroupGrades->setObjectName("labelGroupGrades");

        formLayoutGrades->setWidget(3, QFormLayout::LabelRole, labelGroupGrades);

        groupLineEditGrades = new QLineEdit(groupBoxGradeEntry);
        groupLineEditGrades->setObjectName("groupLineEditGrades");

        formLayoutGrades->setWidget(3, QFormLayout::FieldRole, groupLineEditGrades);


        verticalLayoutGrades->addWidget(groupBoxGradeEntry);

        horizontalLayoutGradeButtons = new QHBoxLayout();
        horizontalLayoutGradeButtons->setObjectName("horizontalLayoutGradeButtons");
        addGradeRecordButton = new QPushButton(tabGrades);
        addGradeRecordButton->setObjectName("addGradeRecordButton");

        horizontalLayoutGradeButtons->addWidget(addGradeRecordButton);

        updateGradeRecordButton = new QPushButton(tabGrades);
        updateGradeRecordButton->setObjectName("updateGradeRecordButton");

        horizontalLayoutGradeButtons->addWidget(updateGradeRecordButton);

        removeGradeRecordButton = new QPushButton(tabGrades);
        removeGradeRecordButton->setObjectName("removeGradeRecordButton");

        horizontalLayoutGradeButtons->addWidget(removeGradeRecordButton);


        verticalLayoutGrades->addLayout(horizontalLayoutGradeButtons);

        gradesTableWidget = new QTableWidget(tabGrades);
        if (gradesTableWidget->columnCount() < 8)
            gradesTableWidget->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        gradesTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        gradesTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        gradesTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        gradesTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        gradesTableWidget->setObjectName("gradesTableWidget");
        gradesTableWidget->setColumnCount(8);

        verticalLayoutGrades->addWidget(gradesTableWidget);

        mainTabWidget->addTab(tabGrades, QString());
        tabExamCredit = new QWidget();
        tabExamCredit->setObjectName("tabExamCredit");
        verticalLayoutExamCredit = new QVBoxLayout(tabExamCredit);
        verticalLayoutExamCredit->setObjectName("verticalLayoutExamCredit");
        groupBoxExamCreditEntry = new QGroupBox(tabExamCredit);
        groupBoxExamCreditEntry->setObjectName("groupBoxExamCreditEntry");
        formLayoutExamCredit = new QFormLayout(groupBoxExamCreditEntry);
        formLayoutExamCredit->setObjectName("formLayoutExamCredit");
        labelStudentNameExam = new QLabel(groupBoxExamCreditEntry);
        labelStudentNameExam->setObjectName("labelStudentNameExam");

        formLayoutExamCredit->setWidget(0, QFormLayout::LabelRole, labelStudentNameExam);

        studentNameLineEditExam = new QLineEdit(groupBoxExamCreditEntry);
        studentNameLineEditExam->setObjectName("studentNameLineEditExam");

        formLayoutExamCredit->setWidget(0, QFormLayout::FieldRole, studentNameLineEditExam);

        labelCreditExam = new QLabel(groupBoxExamCreditEntry);
        labelCreditExam->setObjectName("labelCreditExam");

        formLayoutExamCredit->setWidget(1, QFormLayout::LabelRole, labelCreditExam);

        creditCheckBoxExam = new QCheckBox(groupBoxExamCreditEntry);
        creditCheckBoxExam->setObjectName("creditCheckBoxExam");

        formLayoutExamCredit->setWidget(1, QFormLayout::FieldRole, creditCheckBoxExam);

        labelExamGradeExam = new QLabel(groupBoxExamCreditEntry);
        labelExamGradeExam->setObjectName("labelExamGradeExam");

        formLayoutExamCredit->setWidget(2, QFormLayout::LabelRole, labelExamGradeExam);

        examGradeSpinBoxExam = new QSpinBox(groupBoxExamCreditEntry);
        examGradeSpinBoxExam->setObjectName("examGradeSpinBoxExam");
        examGradeSpinBoxExam->setMinimum(0);
        examGradeSpinBoxExam->setMaximum(100);

        formLayoutExamCredit->setWidget(2, QFormLayout::FieldRole, examGradeSpinBoxExam);

        labelCourseExam = new QLabel(groupBoxExamCreditEntry);
        labelCourseExam->setObjectName("labelCourseExam");

        formLayoutExamCredit->setWidget(3, QFormLayout::LabelRole, labelCourseExam);

        courseSpinBoxExam = new QSpinBox(groupBoxExamCreditEntry);
        courseSpinBoxExam->setObjectName("courseSpinBoxExam");
        courseSpinBoxExam->setMinimum(1);
        courseSpinBoxExam->setMaximum(10);

        formLayoutExamCredit->setWidget(3, QFormLayout::FieldRole, courseSpinBoxExam);

        labelGroupExam = new QLabel(groupBoxExamCreditEntry);
        labelGroupExam->setObjectName("labelGroupExam");

        formLayoutExamCredit->setWidget(4, QFormLayout::LabelRole, labelGroupExam);

        groupLineEditExam = new QLineEdit(groupBoxExamCreditEntry);
        groupLineEditExam->setObjectName("groupLineEditExam");

        formLayoutExamCredit->setWidget(4, QFormLayout::FieldRole, groupLineEditExam);


        verticalLayoutExamCredit->addWidget(groupBoxExamCreditEntry);

        horizontalLayoutExamCreditButtons = new QHBoxLayout();
        horizontalLayoutExamCreditButtons->setObjectName("horizontalLayoutExamCreditButtons");
        addExamCreditRecordButton = new QPushButton(tabExamCredit);
        addExamCreditRecordButton->setObjectName("addExamCreditRecordButton");

        horizontalLayoutExamCreditButtons->addWidget(addExamCreditRecordButton);

        updateExamCreditRecordButton = new QPushButton(tabExamCredit);
        updateExamCreditRecordButton->setObjectName("updateExamCreditRecordButton");

        horizontalLayoutExamCreditButtons->addWidget(updateExamCreditRecordButton);

        removeExamCreditRecordButton = new QPushButton(tabExamCredit);
        removeExamCreditRecordButton->setObjectName("removeExamCreditRecordButton");

        horizontalLayoutExamCreditButtons->addWidget(removeExamCreditRecordButton);


        verticalLayoutExamCredit->addLayout(horizontalLayoutExamCreditButtons);

        examCreditTableWidget = new QTableWidget(tabExamCredit);
        if (examCreditTableWidget->columnCount() < 9)
            examCreditTableWidget->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        examCreditTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        examCreditTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        examCreditTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        examCreditTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        examCreditTableWidget->setObjectName("examCreditTableWidget");
        examCreditTableWidget->setColumnCount(9);

        verticalLayoutExamCredit->addWidget(examCreditTableWidget);

        mainTabWidget->addTab(tabExamCredit, QString());

        horizontalLayoutMain->addWidget(mainTabWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        mainTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\222\320\270\321\200\321\202\321\203\320\260\320\273\321\214\320\275\321\213\320\271 \320\266\321\203\321\200\320\275\320\260\320\273 \320\277\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        groupBoxSubjects->setTitle(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\277\321\200\320\265\320\264\320\274\320\265\321\202\320\276\320\262", nullptr));
        addSubjectButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\321\200\320\265\320\264\320\274\320\265\321\202", nullptr));
        removeSubjectButton->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\277\321\200\320\265\320\264\320\274\320\265\321\202", nullptr));
        groupBoxGradeEntry->setTitle(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201\321\214 \320\276\321\206\320\265\320\275\320\272\320\270", nullptr));
        labelStudentName->setText(QCoreApplication::translate("MainWindow", "\320\244\320\230\320\236 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260", nullptr));
        labelGradeValue->setText(QCoreApplication::translate("MainWindow", "\320\236\321\206\320\265\320\275\320\272\320\260", nullptr));
        labelCourseGrades->setText(QCoreApplication::translate("MainWindow", "\320\232\321\203\321\200\321\201", nullptr));
        labelGroupGrades->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\321\203\320\277\320\277\320\260", nullptr));
        addGradeRecordButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\276\321\206\320\265\320\275\320\272\321\203", nullptr));
        updateGradeRecordButton->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214 \320\276\321\206\320\265\320\275\320\272\321\203", nullptr));
        removeGradeRecordButton->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\276\321\206\320\265\320\275\320\272\321\203", nullptr));
        QTableWidgetItem *___qtablewidgetitem = gradesTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\320\244\320\230\320\236", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = gradesTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\320\236\321\206\320\265\320\275\320\272\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = gradesTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\320\232\321\203\321\200\321\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = gradesTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\321\203\320\277\320\277\320\260", nullptr));
        gradesTableWidget->setProperty("horizontalHeaderLabels", QVariant(QStringList{
            QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260", nullptr),
            QCoreApplication::translate("MainWindow", "\320\236\321\206\320\265\320\275\320\272\320\260", nullptr),
            QCoreApplication::translate("MainWindow", "\320\232\321\203\321\200\321\201", nullptr),
            QCoreApplication::translate("MainWindow", "\320\223\321\200\321\203\320\277\320\277\320\260", nullptr)}));
        mainTabWidget->setTabText(mainTabWidget->indexOf(tabGrades), QCoreApplication::translate("MainWindow", "\320\236\321\206\320\265\320\275\320\272\320\270", nullptr));
        groupBoxExamCreditEntry->setTitle(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201\321\214 \320\267\320\260\321\207\320\265\321\202\320\276\320\262 \320\270 \321\215\320\272\320\267\320\260\320\274\320\265\320\275\320\276\320\262", nullptr));
        labelStudentNameExam->setText(QCoreApplication::translate("MainWindow", "\320\244\320\230\320\236 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260", nullptr));
        labelCreditExam->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\321\207\320\265\321\202", nullptr));
        labelExamGradeExam->setText(QCoreApplication::translate("MainWindow", "\320\255\320\272\320\267\320\260\320\274\320\265\320\275", nullptr));
        labelCourseExam->setText(QCoreApplication::translate("MainWindow", "\320\232\321\203\321\200\321\201", nullptr));
        labelGroupExam->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\321\203\320\277\320\277\320\260", nullptr));
        addExamCreditRecordButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        updateExamCreditRecordButton->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        removeExamCreditRecordButton->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = examCreditTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "\320\244\320\230\320\236", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = examCreditTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "\320\232\321\203\321\200\321\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = examCreditTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\321\203\320\277\320\277\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = examCreditTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "\320\255\320\272\320\267\320\260\320\274\320\265\320\275", nullptr));
        examCreditTableWidget->setProperty("horizontalHeaderLabels", QVariant(QStringList{
            QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260", nullptr),
            QCoreApplication::translate("MainWindow", "\320\227\320\260\321\207\320\265\321\202", nullptr),
            QCoreApplication::translate("MainWindow", "\320\255\320\272\320\267\320\260\320\274\320\265\320\275", nullptr),
            QCoreApplication::translate("MainWindow", "\320\232\321\203\321\200\321\201", nullptr),
            QCoreApplication::translate("MainWindow", "\320\223\321\200\321\203\320\277\320\277\320\260", nullptr)}));
        mainTabWidget->setTabText(mainTabWidget->indexOf(tabExamCredit), QCoreApplication::translate("MainWindow", "\320\227\320\260\321\207\320\265\321\202\321\213 \320\270 \321\215\320\272\320\267\320\260\320\274\320\265\320\275\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
