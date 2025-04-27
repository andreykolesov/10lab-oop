#ifndef STUDENT_H
#define STUDENT_H

#include <QString>
#include <QList>

class Student {
private:
    QString m_name;
    int m_grade;
    QString m_subject;
    int m_course;
    QString m_group;
    bool m_credit;
    int m_examGrade;
public:
    Student();
    Student(const QString &name, int grade, const QString &subject,
            int course, const QString &group, bool credit, int examGrade);

    QString name() const;
    int grade() const;
    QString subject() const;
    int course() const;
    QString group() const;
    bool credit() const;
    int examGrade() const;

    // Сеттеры
    void setName(const QString &name);
    void setGrade(int grade);
    void setSubject(const QString &subject);
    void setCourse(int course);
    void setGroup(const QString &group);
    void setCredit(bool credit);
    void setExamGrade(int examGrade);

    static void addGradeRecord(QList<Student*> &list,
                               const QString &studentName,
                               int grade,
                               int course,
                               const QString &group,
                               const QString &subject);
    static void updateGradeRecord(Student* stud,
                                  const QString &studentName,
                                  int grade,
                                  int course,
                                  const QString &group);
    static void removeGradeRecord(QList<Student*> &list, int index);

    // Операции для зачетов/экзаменов:
    static void addExamCreditRecord(QList<Student*> &list,
                                    const QString &studentName,
                                    bool credit,
                                    int examGrade,
                                    int course,
                                    const QString &group,
                                    const QString &subject);
    static void updateExamCreditRecord(Student* stud,
                                       const QString &studentName,
                                       bool credit,
                                       int examGrade,
                                       int course,
                                       const QString &group);
    static void removeExamCreditRecord(QList<Student*> &list, int index);
};

#endif
