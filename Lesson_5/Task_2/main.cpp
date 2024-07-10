#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Information {
public:
    string type;
    string name;
    string author;
    int address;
    string dateCreate;

    void display() {
        cout << "Type: " << type << endl;
        cout << "Name: " << name << endl;
        cout << "Author: " << author << endl;
        cout << "Address: " << address << endl;
        cout << "Date of creation: " << dateCreate << endl;
    }
};

class Library {
private:
    vector<Information> records;
    int nextAddress = 1;

public:
    Information addRecord(string type, string name, string author, string dateCreate) {
        if (records.size() >= 5) {
            cout << "Maximum number of records reached!" << endl;
            return {};
        }
        Information record = {type, name, author, nextAddress++, dateCreate};
        records.push_back(record);
        cout << "Record added successfully!" << endl;
        return record;
    }

    void findRecordByAddress(int address) {
        for (auto record : records) {
            if (record.address == address) {
                record.display();
                return;
            }
        }
        cout << "No record found with address: " << address << endl;
    }

    void displayAllRecords() {
        if (records.empty()) {
            cout << "No records available." << endl;
            return;
        }
        for (auto record : records) {
            record.display();
            cout << "---------------------" << endl;
        }
    }
};

int main() {
    Library library;
    int option;

    while (true) {
        cout << "Enter 0 to exit, 1 to add a record, 2 to find a record by address, 3 to display all records: ";
        cin >> option;
        cout << endl;

        if (option == 0) {
            break;
        } else if (option == 1) {
            string type, name, author, dateCreate;
            cout << "Enter type (book, article, abstract): ";
            cin >> type;
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter author: ";
            cin >> author;
            cout << "Enter date of creation: ";
            cin >> dateCreate;

            Information newRecord = library.addRecord(type, name, author, dateCreate);
            if (!newRecord.type.empty()) {
                cout << "New record details:" << endl;
                newRecord.display();
            }
        } else if (option == 2) {
            int address;
            cout << "Enter address: ";
            cin >> address;
            library.findRecordByAddress(address);
        } else if (option == 3) {
            library.displayAllRecords();
        } else {
            cout << "Please try again." << endl;
        }
        cout << endl;
    }

    return 0;
}
