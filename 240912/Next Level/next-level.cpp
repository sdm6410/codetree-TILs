#include <iostream>
#include <string>
using namespace std;
class Game
{
    public:
        string id;
        int level;
    //Game(string id = "codetree", int level = 10);

    Game(string id = "codetree", int level = 10)
    {
        this->id = id;
        this->level = level;
    }
};
int main() {
    string strId;
    int nLevel;
    cin >> strId >> nLevel;
    Game g1 = Game();
    cout << "user " << g1.id << " lv " << g1.level << endl;
    Game g2 = Game(strId, nLevel);
    cout << "user " << g2.id << " lv " << g2.level << endl;
    return 0;
}