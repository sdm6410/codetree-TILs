#include <iostream>
#include <vector>
using namespace std;

int n;;

int main() {
    vector<int> v;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string str;
        int num;
        cin >> str; 
        if(str == "push_back")
        {
            cin >> num;
            v.push_back(num);
        }
        else if(str == "get")
        {
            cin >> num;
            cout << v[num - 1] << endl;
        }
        else if(str == "pop_back")
        {
            v.pop_back();
        }
        else if(str == "size")
        {
            cout << v.size() << endl;
        }
        
    }
    return 0;
}