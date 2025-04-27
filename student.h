#ifndef STUDENT_H
#define STUDENT_H

#include <QString>

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

    void setName(const QString &name);
    void setGrade(int grade);
    void setSubject(const QString &subject);
    void setCourse(int course);
    void setGroup(const QString &group);
    void setCredit(bool credit);
    void setExamGrade(int examGrade);
};

#endif
