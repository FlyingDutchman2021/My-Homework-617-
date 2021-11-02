#include <iostream>
using namespace std;


int yearOf365[12]={6,2,2,5,0,3,5,1,4,6,2,4};
int yearOf366[12]={6,2,3,6,1,4,6,2,5,0,3,5};


int thisYear[12];
int weekdayCount[7]={0,0,0,0,0,0,0};
int yearModifier=0;
int yearLeft;
int yearCountCycle=-1;

void cleanUpThisYear(){
    for (int i=0; i<12; i++){
        thisYear[i] = 0;
    }
}

void cleanUpWeekdayCount(){
    for (int i=0; i<7; i++){
        weekdayCount[i] = 0;
    }
}

void printResult(){
    for (int i=0; i<7; i++){
        cout<<weekdayCount[i]<<" ";
    }
    cout<<endl;
}

void updateThisYear(int original[]){
    
    for (int i=0; i<12; i++){
        thisYear[i] = original[i] + yearModifier;
        if (thisYear[i] >= 7){
            thisYear[i] -= 7;
        }
        
    }
    
}

void yearCountChange(){
    yearCountCycle += 1;
    if (yearCountCycle == 4){
        yearCountCycle = 0;
    }
}

void yearModifierChange(int plusNumber){
    yearModifier += plusNumber;

    if (yearModifier > 6){
        yearModifier -= 7;
    }
}

void updateWeekdayCount(){
    for (int number : thisYear){
        switch (number){
            case 1:
            weekdayCount[0] += 1;
            break;

            case 2:
            weekdayCount[1] += 1;
            break;

            case 3:
            weekdayCount[2] += 1;
            break;

            case 4:
            weekdayCount[3] += 1;
            break;

            case 5:
            weekdayCount[4] += 1;
            break;

            case 6:
            weekdayCount[5] += 1;
            break;

            case 0:
            weekdayCount[6] += 1;
            break;

            default:
            break;
        }
    }
}


int main(){

    while(1){

        yearLeft=0;
        yearModifier=0;
        yearCountCycle=-1;
        cleanUpThisYear();
        cleanUpWeekdayCount();

        cin>>yearLeft;
        if(yearLeft == 0){
            break;
        }

        while(1){
            if (yearCountCycle != 3){
                updateThisYear(yearOf365);
                updateWeekdayCount();
                yearModifierChange(1);
            }else{
                updateThisYear(yearOf366);
                updateWeekdayCount();
                yearModifierChange(2);
            }

            yearCountChange();
            yearLeft -= 1;
            if (yearLeft == 0){
                break;
            }
        }
        printResult();

    }
    
    return 0;
}