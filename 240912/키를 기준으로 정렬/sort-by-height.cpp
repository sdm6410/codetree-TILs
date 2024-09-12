#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Human
{
    public:
        string name;
        int length;
        int weight;

    Human(){}
    Human(string name, int length, int weight)
    {
        this->name = name;
        this->length = length;
        this->weight = weight;
    }

    bool operator < (Human &human)
    {
        return this-> length < human.length;
    }
};
int main() {
    int n;
    cin >> n;
    Human human[n];
    for(int i = 0; i < n; i++)
    {
        string name;
        int length;
        int weight;
        cin >> name >> length >> weight;
        human[i] = Human(name, length, weight);
    }

    sort(human, human + n);

    for(int i = 0; i < n; i++)
    {
        cout << human[i].name << " " << human[i].length << " " << human[i].weight << endl;
    }
    return 0;
}