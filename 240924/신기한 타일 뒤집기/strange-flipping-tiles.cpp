#include <iostream>
#define MAX 100000
using namespace std;
int n ,cur = 0;
int x1[MAX * 2 + 1] = {0,};
int main() {
    cin>> n;
    for(int i = 0; i < n; i++){
        int x;
        char direction;
        cin>> x>> direction;
        if(direction=='L'){
            while(x--){
                x1[cur + MAX] = 1;
                if(x) cur--;
                //cout<<cur<<'a'<<endl;
            }
        }else{
            while(x--){
                x1[cur + MAX] = 2;
                if(x) cur++;
                //cout<<cur<<'a'<<endl;
            }
        }
    }
    int w = 0, b = 0;
    for(int i = 0; i < MAX * 2 + 1; i++){
        if(x1[i] == 1) w++;
        else if(x1[i] == 2) b++;
    }
    cout<< w<< " "<< b;
    return 0;
}