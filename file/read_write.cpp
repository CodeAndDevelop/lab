#include <iostream>
#include <fstream>

using namespace std;

class student {
    int roll;
    char name[30];
    char address[50];

public:
    void input() {
        cout << "Roll No: ";
        cin >> roll;

        cout << "Name : ";
        cin >> name;

        cout << "Address : ";
        cin >> address;
    }

    void write() {
        ofstream file("Student.dat", ios::app | ios::binary);
        file.write(reinterpret_cast<char*>(this), sizeof(*this));
        file.close();
    }

    void update(int roll_no) {
        fstream file("Student.dat", ios::in | ios::out | ios::binary);
        bool found = false;

        while (file.read(reinterpret_cast<char*>(this), sizeof(*this))) {
            if (this->roll == roll_no) {
                found = true;

                cout << "Record found. Enter new data:\n";
                input();

                file.seekp(-static_cast<streamoff>(sizeof(*this)), ios::cur);
                file.write(reinterpret_cast<char*>(this), sizeof(*this));
                cout << "Record updated.\n";
                break;
            }
        }

        if (!found) {
            cout << "Roll number not found.\n";
        }

        file.close();
    }

    void displayAll() {
        ifstream file("Student.dat", ios::binary);

        cout << "\n--- Student Records ---\n";
        while (file.read(reinterpret_cast<char*>(this), sizeof(*this))) {
            cout << "Roll No: " << roll
                 << " | Name: " << name
                 << " | Address: " << address << endl;
        }

        file.close();
    }
};

int main() {
    student s;
    int choice, roll_no;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Write 10 Students\n";
        cout << "2. Update by Roll No\n";
        cout << "3. Display All\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            for (int i = 0; i < 10; ++i) {
                cout << "\nStudent " << i + 1 << ":\n";
                s.input();
                s.write();
            }
            break;

        case 2:
            cout << "Enter roll number to update: ";
            cin >> roll_no;
            s.update(roll_no);
            break;

        case 3:
            s.displayAll();
            break;

        case 0:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }
    } while (choice != 0);

    return 0;
}
