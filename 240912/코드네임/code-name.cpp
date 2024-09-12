#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class cHumInfo
{
    public:
        string cName; 
        int nScore;


        cHumInfo() {}


        cHumInfo(string pName, int pScore)
        {
            this->cName = pName;
            this->nScore = pScore;
        }

        bool operator<(const cHumInfo& other) 
        {
            return this->nScore < other.nScore;
        }
};

int main() {
    cHumInfo humInfo[5];  
    for(int i = 0; i < 5; i++)
    {
        string name;
        int score;
        cin >> name >> score;
        humInfo[i] = cHumInfo(name, score); 
    }

    sort(humInfo, humInfo + 5);
    
cout << humInfo[0].cName << " " << humInfo[0].nScore << endl;

    return 0;
}