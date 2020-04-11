//07:05:45PM
//0123456789
//This is a program to convert 12 hour format time to a 24 hour format.


#include<iostream>
using namespace std;

int main() {
    string time;
    cin >> time;
    int h1 = (int)time[0] -'0';
    int h2 = (int)time[1] -'0';
    int h = (h1*10)+(h2%10);
    cout << h<< endl;
    if(time[8]=='A'){
        if(h==12){
            cout << "00";
            for (int i=2; i<8; i++){
                cout << time[i];
            }
        }
        else{
            for (int i=0; i<8; i++){
                cout << time[i];
            }
        }
    }
    if(time[8] == 'P'){
        if(h == 12){
            cout << "12";
            for (int i=2; i<8; i++){
                cout << time[i];
            }
        }
        else{
            cout << h + 12;
            for (int i=2; i<8; i++){
                cout << time[i];
            }
        }
    }

return 0;
}
