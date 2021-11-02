#include <iostream>

using namespace std;


void judge(string input){
    const int length=input.size();
    const int max=length-1;
    const int end=length /2;
    bool returnValue=true;
    for (int i=0;i<end;i++){
        if(input[i] != input[max-i]){
            returnValue = false;
            break;
        }
    }
    if (returnValue == false){
        cout<<'"'<<input<<"\" is not a palindrome"<<endl;
    }else{
        cout<<'"'<<input<<"\" is a palindrome"<<endl;
    }
}




int main(){

    int volumns=0;
    string notes=" ";

    cin>>volumns;
    getline(cin,notes);
    for (int i=0;i<volumns;i++){
        getline(cin,notes);
        judge(notes);
    }

    return 0;
}