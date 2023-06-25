#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student() : name(""), age(0) {}
    Student(const string& studentName, int studentAge) : name(studentName), age(studentAge) {}

    bool operator>(const Student& other) const {
        return age > other.age;
    }

    bool operator<(const Student& other) const {
        return age < other.age;
    }

    bool operator==(const Student& other) const {
        return name == other.name && age == other.age;
    }

    bool operator!=(const Student& other) const {
        return !(*this == other);
    }

    friend ostream& operator<<(ostream& out, const Student& student) {
        out << "Name: " << student.name << ", Age: " << student.age;
        return out;
    }

    friend istream& operator>>(istream& in, Student& student) {
        cout << "Enter name: ";
        in >> student.name;
        cout << "Enter age: ";
        in >> student.age;
        return in;
    }
};

class Classroom {
private:
    vector<Student> students;

public:
    void AddStudent(const Student& student) {
        students.push_back(student);
    }

    bool operator>(const Classroom& other) const {
        int totalAge = 0;
        for (const Student& student : students) {
            totalAge += student.age;
        }

        int otherTotalAge = 0;
        for (const Student& student : other.students) {
            otherTotalAge += student.age;
        }

        return totalAge > otherTotalAge;
    }

    bool operator<(const Classroom& other) const {
        return other > *this;
    }

    bool operator==(const Classroom& other) const {
        return students == other.students;
    }

    bool operator!=(const Classroom& other) const {
        return !(*this == other);
    }

    friend ostream& operator<<(ostream& out, const Classroom& classroom) {
        for (const Student& student : classroom.students) {
            out << student << endl;
        }
        return out;
    }

    friend istream& operator>>(istream& in, Classroom& classroom) {
        int studentCount;
        cout << "Enter the number of students: ";
        in >> studentCount;

        for (int i = 0; i < studentCount; ++i) {
            Student student;
            cout << "Enter details for student " << i + 1 << endl;
            in >> student;
            classroom.AddStudent(student);
        }

        return in;
    }
};

int main() {
    Classroom classroom1;
    cin >> classroom1;

    Classroom classroom2;
    cin >> classroom2;

    cout << "Classroom 1 students:" << endl;
    cout << classroom1 << endl;

    cout << "Classroom 2 students:" << endl;
    cout << classroom2 << endl;

    if (classroom1 > classroom2) {
        cout << "Classroom 1 has more total age than Classroom 2." << endl;
    } else if (classroom1 < classroom2) {
        cout << "Classroom 1 has less total age than Classroom 2." << endl;
    } else {
        cout << "Classroom 1 has the same total age as Classroom 2." << endl;
    }

    if (classroom1 == classroom2) {
        cout << "Classroom 1 is the same as Classroom 2." << endl;
    } else if (classroom1 != classroom2) {
        cout << "Classroom 1 is different from Classroom 2." << endl;
    }

    return 0;
}
