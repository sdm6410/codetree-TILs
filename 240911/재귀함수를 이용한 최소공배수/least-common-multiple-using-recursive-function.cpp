#include <iostream>
using namespace std;

int gcd(int a, int b){
    
    if(b == 0){
        return a;
    }else{
        return gcd(b, a%b);
    }
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if(n == 1)
    {
        cout << arr[0];
    }
    else
    {
        int a = lcm(arr[0], arr[1]);
        for(int i = 2; i < n; i++)
        {
            a = lcm(a, arr[i]);
        }
        
        cout << a;
    }

    return 0;
}