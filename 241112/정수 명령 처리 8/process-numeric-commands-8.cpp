#include <iostream>
#include <list>
#include <string>
using namespace std;

int n;

int main() {
    string str;
    list<int> s;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> str;
        if(str == "push_back")
        {
            cin >> num;
            s.push_back(num);
        }
        else if(str == "push_front")
        {
            cin >> num;
            s.push_front(num);
        }
        else if(str == "pop_front")
        {
            cout << s.front() << endl;
            s.pop_front();
        }
        else if(str == "pop_back")
        {
            cout << s.back() << endl;
            s.pop_back();
        }
        else if(str == "size")
        {
            cout << s.size() << endl;
        }
        else if(str == "empty")
        {
            cout << s.empty() << endl;
        }
        else if(str == "front")
        {
            cout << s.front() << endl;
        }
        else if(str == "back")
        {
            cout << s.back() << endl;
        }

    }
    return 0;
}