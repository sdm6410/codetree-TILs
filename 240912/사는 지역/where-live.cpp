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
    cout << "name "<< humInfo[0].name <<endl;
    cout << "addr "<< humInfo[0].address <<endl;
    cout << "city "<< humInfo[0].location <<endl;

    return 0;
}