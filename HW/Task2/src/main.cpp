#include <iostream>
#include <string>
#include <map>
using namespace std;


int main()
{
    map<string, int> people;
    cout << "Enter names (type 'Next' to see the next person, 'exit' to quit):" << endl;
    while(true) {
        string person;
        cin >> person;
        people.insert(make_pair(person, people.size() + 1));
        if (person == "Next") {
            if(people.empty()) {
                cout << "No more people to display." << endl;
                continue;
            }
            cout << people.begin()->first << endl;
            people.erase(people.begin()->first);
        }
        if(person == "exit") return 0;
    }

}
