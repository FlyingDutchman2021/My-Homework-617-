#include <iostream>
using namespace std;

int inputTime;

void move(int start, int end, int middle, int numberOfDisks){
    if (numberOfDisks>1){
        move(start,middle,end,numberOfDisks-1);
        cout<<start<<" --> "<<end<<endl;
        move(middle,end,start,numberOfDisks-1);
    }
    else {
        cout<<start<<" --> "<<end<<endl;
    }
}





int main(){

    while(1){
        inputTime = 0;
        cin>>inputTime;
        if (inputTime == -1){
            break;
        }
        move(1,3,2,inputTime);
        cout<<endl;
    }


    return 0;
}