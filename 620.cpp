#include <iostream>
using namespace std;

int tripleByValue( int ); // function prototype
void tripleByReference( int & ); // function prototype

int tripleByValue( int input){
    input *= 3;
    return input;
} 
void tripleByReference( int &input ){
    input *= 3;
}




int main()
{
   int count = 0; // local variable for testing

   // prompt for count value
   // cout << "Enter a value for count: ";
   while(true){
      cin >> count;  
      if (count == 0){
         break;
      }
      // using pass by value
      cout << "Value of count before call to tripleByValue() is: "
         << count << "\nValue returned from tripleByValue() is: "
         << tripleByValue( count ) 
         << "\nValue of count (in main) after tripleCallByValue() is: " 
         << count;

      // using pass by reference
      cout << "\n\nValue of count before call to tripleByReference() is: "
         << count << endl;

      tripleByReference( count );

      cout << "Value of count (in main) after call to "    
         << "tripleByReference() is: " << count << endl;
      cout<<endl;
   }

} // end main