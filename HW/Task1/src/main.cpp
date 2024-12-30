#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <sstream>

using namespace std;

map<string, string> phoneToName;
map<string, vector<string>> nameToPhones;

void addNumber(string phone, string name) {
    phoneToName[phone] = name;
    nameToPhones[name].push_back(phone);
}

string getNameByPhone(string phone) {
    return phoneToName[phone];
}

vector<string> getPhonesByName(string name) {
    return nameToPhones[name];
}

int main() {
    string op;

    while (true) {
        cout << "Enter add_number to add a new number\nenter find_number to search by name\nenter find_name to search by number\nenter exit to quit\n";
        cin >> op;

        if (op == "exit") {
            return 0;
        } else if (op == "add_number") {
            string phone, name;
            cout << "Enter phone number: ";
            cin >> phone;
            cout << "Enter name: ";
            cin.ignore();
            getline(cin, name);
            addNumber(phone, name);
            cout << "Number added successfully." << endl;
        } else if (op == "find_number") {
            string name;
            cout << "Enter name: ";
            cin.ignore();
            getline(cin, name);
            vector<string> phones = getPhonesByName(name);
            if (phones.empty()) {
                cout << "Name not found." << endl;
            } else {
                cout << "Phone numbers for " << name << ":" << endl;
                for (string phone : phones) {
                    cout << phone << endl;
                }
            }
        } else if (op == "find_name") {
            string phone;
            cout << "Enter phone number: ";
            cin >> phone;
            string name = getNameByPhone(phone);
            if (name.empty()) {
                cout << "Phone number not found." << endl;
            } else {
                cout << "Name for phone number " << phone << ": " << name << endl;
            }
        }

    }

    return 0;
}