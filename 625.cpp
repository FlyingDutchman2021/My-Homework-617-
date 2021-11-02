#include <iostream>
#include <iomanip>

using namespace std;

#define pi 3.14

double result;
double radius;

int main(){
    cout<<fixed<<showpoint<<setprecision(5);
    while(1){
        result = 0;
        radius = 0;
        cin>>radius;
        if (radius <0){
            break;
        }
        result = pi * radius *radius;
        cout<<result<<endl;
    }



    return 0;
}