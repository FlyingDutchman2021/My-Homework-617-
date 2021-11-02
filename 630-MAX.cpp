#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    srand(time(0));
    int collect[11]={0,0,0,0,0,0,0,0,0,0,0};
    double collectPercentage[11]={0,0,0,0,0,0,0,0,0,0,0};
    double expected[11]={2.778,5.556,8.333,11.111,13.889,16.667,13.889,11.111,8.333,5.556,2.778};
    const long int rollingTimes=1410065406;
    int tempResult1=0;
    int tempResult2=0;

    for(int i=0;i<rollingTimes;i++){
        tempResult1 = rand() % 6;
        tempResult2 = rand() % 6;
        collect[tempResult1+tempResult2] += 1;
    }
    

    for (int i=0;i<11;i++){
        collectPercentage[i] = collect[i];
        collectPercentage[i] /= rollingTimes/100;
    }

    cout<<setw(10)<<"Sum"<<setw(10)<<"Total"<<setw(10)<<"Expected"<<setw(10)<<"Actual"<<endl;

    cout<<fixed<<showpoint<<setprecision(3);
    for(int i=0;i<11;i++){
        cout<<setw(10)<<i+2<<setw(10)<<collect[i]<<setw(9)<<expected[i]<<"%"<<setw(9)<<collectPercentage[i]<<"%"<<endl;
    }

    return 0;
}