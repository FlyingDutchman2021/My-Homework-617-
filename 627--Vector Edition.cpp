#include <iostream>
#include <vector>

using namespace std;

vector<int> numbers;
int input;
bool isInArrayValue = false;
bool continueOrNot = true;


bool isInArray(int input){
    bool result=false;

    for (int number : numbers){
        if (number == input){
            result = true;
            break;
        }
    }

    return result;
    
}



int main(){

    
    while(1){
        numbers.clear();
        input = 0;
        isInArrayValue = false;

        for (int i=0;i<30;i++){
            cin>>input;
            if (input <0){
                continueOrNot = false;
                break;
            }
            isInArrayValue = isInArray(input);
            if (isInArrayValue == false){
                numbers.push_back(input);
            }
        }
        if (continueOrNot == false){
            break;
        }
        for (int number : numbers){
            cout<<number<<" ";
        }
        cout<<endl;
    }
    return 0;
}