#include <iostream>
using namespace std;

// ToDo function template swap_value
template<typename T>
void swap_value(T &input1, T &input2){
    T temp=0;
    temp = input1;
    input1 = input2;
    input2 = temp;
}



int main()
{
    int int1 = 0;
    int int2 = 0; 
    char char1 = ' ';
    char char2 = ' ';     
    double double1 = 0; 
    double double2 = 0;     

    while(true){
        cin>>int1;
        if(int1==-1)
            break;
        cin>>int2;
        swap_value(int1, int2);
        cout<<int1 << " "<<int2<<endl;

        cin >> char1 >> char2;
        swap_value(char1,char2);
        cout << char1 << " " << char2 << endl;

        cin >> double1 >> double2;
        swap_value(double1,double2);
        cout << double1 << " " << double2 << endl;

        cout<<endl;
    }

} 