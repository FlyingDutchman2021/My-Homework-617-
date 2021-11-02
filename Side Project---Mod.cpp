#include <iostream>
using namespace std;

int main(){
    int input;

    while(1){
        cin>>input;
        if (input == 0){
            break;
        }
        cout<<input % 7<<endl;
    }



    return 0;
}