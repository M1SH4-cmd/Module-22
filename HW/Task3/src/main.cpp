#include <iostream>
#include <string>
#include <map>
#include <cctype>
using namespace std;

void toLowerCase(string& str)
{
    for (char c : str) str[c] = tolower(c);
}

bool areAnagrams(string str1, string str2)
{
    toLowerCase(str1);
    toLowerCase(str2);
    if (str1.length() != str2.length()) return false;

    map<char, int> countMap;
    for (char c : str1) countMap[c]++;
    for (char c : str2) countMap[c]--;
    for (map<char, int>::iterator it = countMap.begin(); it != countMap.end(); it++){
        if (it -> second != 0) return false;
    }
    return true;

}

int main()
{
    cout << "Enter two words:" << endl;
    string str1, str2;
    cin >> str1 >> str2;
    
    if (areAnagrams(str1, str2)) {
        cout << "The words are anagrams." << endl;
    } else cout << "The words are not anagrams." << endl;

}