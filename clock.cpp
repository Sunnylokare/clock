#include<iostream>
#include<unistd.h>
#include<windows.h>
using namespace std;
int main(){
    int 
    hours=0,minutes=0,second=0;
    while(true){
        system("cls");
        cout<<hours<<" : "<<minutes<<" : "<<second<<endl;
        second++;
        if(second==60){
            minutes++;
            second=0;
            if(minutes==60){
                hours++;
                minutes=0;
                if(hours==12){
                    hours=0;
                }
            }
        }
        sleep(1);
    }
    return 0;
}