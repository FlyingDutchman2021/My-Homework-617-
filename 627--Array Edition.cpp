#include <iostream>

using namespace std;

int numbers[30];
int counterMax=0;
int tempCounter=0;
int input;



bool isInArray(int input){
    bool result=false;
    tempCounter = 0;
    while(tempCounter < counterMax){
        if (input == numbers[tempCounter]){
            result = true;
            break;
        }
        tempCounter += 1;
    }
    return result;
}






int main(){

    bool continueOrNot = true;  
    while(continueOrNot == true){
        counterMax =0;
        tempCounter =0;
        input=0;

        for (int i=0; i<30;i++){
            cin>>input;
            if (input == -1){
                continueOrNot = false;
                break;
            }
            if (isInArray(input) == false){
                numbers[counterMax] = input;
                counterMax += 1;
            }
        }
        if (continueOrNot == false){
            break;
        }

        for (int i=0; i<counterMax;i++){
            cout<<numbers[i]<<" ";
        }
        cout<<endl;






    }
    return 0;
}