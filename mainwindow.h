#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMap>
#include <QList>
#include <QString>
#include "ui_mainwindow.h"
#include "student.h"
#include "smart_ptr.h"

struct SubjectRecords {
    QList<smart_ptr<Student>> grades;
    QList<smart_ptr<Student>> examCredits;
};

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

private:
    Ui::MainWindow *ui;

    QMap<QString, SubjectRecords> subjectsRecords;

    void refreshGradesTable();
    void refreshExamCreditTable();

    QString currentSubject() const;

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void addSubject();
    void removeSubject();
    void subjectSelectionChanged();

    void addGradeRecord();
    void updateGradeRecord();
    void removeGradeRecord();

    void addExamCreditRecord();
    void updateExamCreditRecord();
    void removeExamCreditRecord();
};

#endif
