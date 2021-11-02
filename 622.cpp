#include <iostream>
#include <math.h>
using namespace std;

unsigned long digiNumber(unsigned long input){
    unsigned long i=1;
    while(1){
        if (input < pow(10,i)){
            break;
        }
        i += 1;
    }
    return i;
}

unsigned long digiSolveOnce(unsigned long input){
    unsigned long digiCount = digiNumber(input);
    unsigned long tempSeperate=0, tempDigiRatio=0;
    unsigned long result=0;

    while(1){
        tempDigiRatio = pow(10,digiCount-1);
        tempSeperate = input / tempDigiRatio;
        result += tempSeperate;

        digiCount -= 1;
        input -= tempSeperate * tempDigiRatio;
        if (digiCount <= 1){
            break;
        }
    }
    result += input;

    if (result > 9){
        return digiSolveOnce(result);
    }else{
        return result;
    }

}




int main(){
    unsigned long input;

    while(1){
        input = 0;
        cin >> input;
        if (input == -1){
            break;
        }
        cout<<digiSolveOnce(input)<<endl;
    }


    return 0;
}