#include <iostream>
#include <string>
using namespace std;

class HumInfo
{
    public:
        string name;
        string address;
        string location;
    HumInfo()
    {

    }

    HumInfo(string name, string address, string location)
    {
        this->name = name;
        this->address = address;
        this->location = location;
    }

    bool operator < (HumInfo &humInfo)
    {
        return this->name < humInfo.name;
    }
};


int main() {
    int n;
    cin >> n;
    HumInfo humInfo[n];
    for(int i = 0; i < n; i++)
    {
        string name;
        string address;
        string location;
        cin >> name >> address >> location;
        humInfo[i] = HumInfo(name, address, location);
    }
    cout << "name "<< humInfo[n -1].name <<endl;
    cout << "addr "<< humInfo[n -1].address <<endl;
    cout << "city "<< humInfo[n -1].location <<endl;

    return 0;
}