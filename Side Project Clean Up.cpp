#include <iostream>
using namespace std;

int main(){
    //You can't do this!
    int array[3]={1,2,3};
    for (int number : array){
        number = 0;
    }

    //You should use this!
    for (int i=0; i<3; i++){
        array[i]=0;
    }

    return 0;
}