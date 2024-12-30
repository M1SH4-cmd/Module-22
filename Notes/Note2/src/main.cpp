#include <iostream>
#include <string>
#include <map>
using namespace std;


int main()
{
    pair<string, int> p1("apple", 10);
    map<string, int> fruit_prices;
    fruit_prices.insert(p1);

    cout << p1.first << " costs " << p1.second << " dollars." << endl;
    cout << fruit_prices["apple"] << endl;

}