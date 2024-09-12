#include <iostream>
using namespace std;
class Product
{
    public:
        string name;
        int code;
    Product(string pName = "codetree", int pCode = 50)
    {
        this->name = pName;
        this->code = pCode;
    }
};
int main() {
    Product p;
    cout << "product " << p.code << " is " << p.name << endl;
    string str;
    int num
    cin >> str >> num;
    Product p1 = Product(str, num);
    cout << "product " << p1.code << " is " << p1.name;
    return 0;
}