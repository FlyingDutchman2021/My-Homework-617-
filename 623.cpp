#include <iostream>
using namespace std;

unsigned long returnMultiple(int start, int end){
    int result=1;
    int tempNum = start;
    while(1){
        result *= tempNum;
        tempNum -= 1;
        if (tempNum == end -1){
            break;
        }
    }
    return result;
}

unsigned long returnCnk(int n, int k){

    return (returnMultiple (n,n-k+1)/returnMultiple(k,1));
}


int main(){

    int input1,input2;

    while(1){
        cin>>input1;
        if(input1 == -1){
            break;
        }
        cin>>input2;
        cout<<returnCnk(input1,input2)<<endl;
    }

    return 0;
}