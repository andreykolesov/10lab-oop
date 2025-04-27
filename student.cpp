#include "student.h"

Student::Student()
    : m_grade(0), m_course(0), m_credit(false), m_examGrade(0)
{
}

Student::Student(const QString &name, int grade, const QString &subject,
                 int course, const QString &group, bool credit, int examGrade)
    : m_name(name),
    m_grade(grade),
    m_subject(subject),
    m_course(course),
    m_group(group),
    m_credit(credit),
    m_examGrade(examGrade)
{
}

QString Student::name() const {
    return m_name;
}

int Student::grade() const {
    return m_grade;
}

QString Student::subject() const {
    return m_subject;
}

int Student::course() const {
    return m_course;
}

QString Student::group() const {
    return m_group;
}

bool Student::credit() const {
    return m_credit;
}

int Student::examGrade() const {
    return m_examGrade;
}

void Student::setName(const QString &name) {
    m_name = name;
}

void Student::setGrade(int grade) {
    m_grade = grade;
}

void Student::setSubject(const QString &subject) {
    m_subject = subject;
}

void Student::setCourse(int course) {
    m_course = course;
}

void Student::setGroup(const QString &group) {
    m_group = group;
}

void Student::setCredit(bool credit) {
    m_credit = credit;
}

void Student::setExamGrade(int examGrade) {
    m_examGrade = examGrade;
}

void Student::addGradeRecord(QList<Student*> &list,
                             const QString &studentName,
                             int grade,
                             int course,
                             const QString &group,
                             const QString &subject)
{
    Student *stud = new Student(studentName, grade, subject, course, group, false, 0);
    list.append(stud);
}

void Student::updateGradeRecord(Student* stud,
                                const QString &studentName,
                                int grade,
                                int course,
                                const QString &group)
{
    if (stud) {
        stud->setName(studentName);
        stud->setGrade(grade);
        stud->setCourse(course);
        stud->setGroup(group);
    }
}

void Student::removeGradeRecord(QList<Student*> &list, int index)
{
    if (index >= 0 && index < list.size()) {
        Student *stud = list.takeAt(index);
        delete stud;
    }
}

void Student::addExamCreditRecord(QList<Student*> &list,
                                  const QString &studentName,
                                  bool credit,
                                  int examGrade,
                                  int course,
                                  const QString &group,
                                  const QString &subject)
{
    Student *stud = new Student(studentName, 0, subject, course, group, credit, examGrade);
    list.append(stud);
}

void Student::updateExamCreditRecord(Student* stud,
                                     const QString &studentName,
                                     bool credit,
                                     int examGrade,
                                     int course,
                                     const QString &group)
{
    if (stud) {
        stud->setName(studentName);
        stud->setCourse(course);
        stud->setGroup(group);
        stud->setCredit(credit);
        stud->setExamGrade(examGrade);
    }
}

void Student::removeExamCreditRecord(QList<Student*> &list, int index)
{
    if (index >= 0 && index < list.size()) {
        Student *stud = list.takeAt(index);
        delete stud;
    }
}
