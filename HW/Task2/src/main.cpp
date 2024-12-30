#include <iostream>
#include <string>
#include <map>
using namespace std;


int main()
{
    map<int, string> people;
    cout << "Enter names (type 'Next' to see the next person, 'exit' to quit):" << endl;

    while(true) {
        string person;
        cin >> person;
        people.insert(make_pair(people.size() + 1, person));
        if (person == "Next") {
            cout << people.begin()->second << endl;
        }
        if(person == "exit") return 0;
    }


}
