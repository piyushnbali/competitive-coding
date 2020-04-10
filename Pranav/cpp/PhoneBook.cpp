#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> contact;
    string name;
    int num, t;
    cin >> t;
    while (t--)
    {
        cin >> name;
        cin >> num;
        contact.insert(pair<string, int>(name, num));
    }

    while (cin >> name)
    {
        if (contact[name] == 0)
            cout << "Not found" << endl;
        else
            cout << name << "=" << contact[name] << endl;
    }

    return 0;
}