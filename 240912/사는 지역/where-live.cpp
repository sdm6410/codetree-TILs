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
    char c = humInfo[0].name[0];
    int index = 0;
    for(int i = 0; i < n; i++)
    {
        if(c < humInfo[i].name[0])
        {
            c = humInfo[i].name[0];
            index = i;
        }
    }

    cout << "name "<< humInfo[index].name <<endl;
    cout << "addr "<< humInfo[index].address <<endl;
    cout << "city "<< humInfo[index].location <<endl;

    return 0;
}