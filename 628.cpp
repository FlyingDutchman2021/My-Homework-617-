#include <iostream> 
#include <array>

using namespace std;

const int SIZE = 30;

void printArray( array< int, SIZE> &, size_t, size_t );

void printArray( array< int, SIZE> &inputArray, size_t start, size_t end ){
    for (int counter = start; counter <= end; counter += 1){
        cout<<inputArray[counter]<<" ";
    }
}

int main()
{

    array< int, SIZE > values = {};
    unsigned int i = 0; 
    while( i < SIZE ){
        int value = 0;
        cin>> value;
        values[i++]=value;
    }
    printArray( values, 0, SIZE - 1 );
    cout << endl;
} 