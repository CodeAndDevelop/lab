#include<iostream>
using namespace std;

class Person {
protected:
    char name[20], address[20];
public:
    void input() {
        cout << "Enter Your Name: ";
        cin >> name;
        cout << "Enter Your Address: ";
        cin >> address;
    }
    void display() {
        cout << "Name = " << name << "\nAddress = " << address << endl;
    }
};

// Virtual inheritance to avoid duplicate Person
class Student : virtual public Person {
protected:
    int id;
public:
    void input() {
        cout << "Enter your ID: ";
        cin >> id;
    }
    void display() {
        cout << "ID = " << id << endl;
    }
};

class Employee : virtual public Person {
protected:
    float salary;
public:
    void input() {
        cout << "Enter your Salary: ";
        cin >> salary;
    }
    void display() {
        cout << "Salary = " << salary << endl;
    }
};

class Intern : public Student, public Employee {
    char branch[20];
public:
    void input() {
        Person::input();      // input for name and address
        Student::input();     // input for ID
        Employee::input();    // input for salary
        cout << "Enter your Branch: ";
        cin >> branch;
    }
    void display() {
        Person::display();    // display name and address
        Student::display();   // display ID
        Employee::display();  // display salary
        cout << "Branch = " << branch << endl;
    }
};

int main() {
    Intern I;
    I.input();
    cout << "\n--- Intern Details ---\n";
    I.display();
    return 0;
}
