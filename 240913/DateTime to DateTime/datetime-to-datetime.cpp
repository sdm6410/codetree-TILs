#include <iostream>
using namespace std;

int main() {
    int a1, b1, c1;
    cin >> a1 >> b1 >> c1;
    int a2 = 11, b2 = 11, c2 = 11;
    int elapsed_time = 0;
    if(a1 == a2 && b1 <= b2 && c1 < c2)
    {
        cout << -1;
    }
    else
    {
        while(true)
        {
            if(a1 == a2 && b1 == b2 && c1 == c2)
                break;
    
            elapsed_time++;
            c2++;
        
            if(c2 == 60) {
                b2++;
                c2 = 0;
            }

            if(b2 == 24){
                a2++;
                b2 = 0;
            }
        }
    }
    cout << elapsed_time;
    return 0;
}