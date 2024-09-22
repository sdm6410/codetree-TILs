#include <iostream>
#define MAX 19
using namespace std;
int arr[MAX + 5][MAX + 5];
int main() {
    for(int i = 0; i < MAX; i++){
        for(int j = 0; j< MAX; j++){
            cin>> arr[i][j]; 
        }
    }   
    int winner =  0;
    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){ 
            //세로 방향 확인
            if(arr[i][j] != 0 && arr[i + 1][j] == arr[i][j]){
                bool win = true;
                for(int x = i + 1; x < i + 5; x++)
                    if(arr[x][j] != arr[i][j])
                        win = false;
                if(win){
                    cout<< arr[i][j]<< endl;
                    cout<< i + 3<< ' '<< j + 1<< endl;
                    return 0;
                }
            //가로방향 확인
            }if(arr[i][j] != 0 && arr[i][j + 1] == arr[i][j]){
                bool win = true;
                for(int y = j + 1; y < j + 5; y++)
                    if(arr[i][y] != arr[i][j])
                        win = false;
                if(win){
                    cout<< arr[i][j]<< endl;
                    cout<< i + 1<< ' '<< j + 3<< endl;  
                    return 0;
                }
            //오른쪽 대각선 확인
            }if(arr[i][j] != 0 && arr[i + 1][j + 1] == arr[i][j]){
                bool win = true;
                for(int y = 1; y < 5; y++)
                    if(arr[i + y][j + y] != arr[i][j])
                        win = false;
                if(win){
                    cout<< arr[i][j]<< endl;
                    cout<< i + 3<< ' '<< j + 3<< endl;  
                    return 0;
                }
            //왼쪽 대각선 확인 
            }if(arr[i][j] != 0 && arr[i + 1][j - 1] == arr[i][j] && j >= 4){
                bool win = true;
                for(int y = 1; y < 5; y++)
                    if(arr[i + y][j - y] != arr[i][j])
                        win = false;
                if(win){
                    cout<< arr[i][j]<< endl;
                    cout<< i + 3<< ' '<< j - 1<< endl;  
                    return 0;
                }
            }
        }
    }   
    cout<< winner; 
    return 0;
}