#include <iostream>
using namespace std;

unsigned int fibonacci( unsigned int ); // function prototype

unsigned int fibonacci( unsigned int input ){
    
    if (input > 2){
        unsigned int num1=1,num2=1,result=1;
        for (int i=0; i<input-2; i++){
            result = num1 + num2;
            num1=num2;
            num2=result;
        }
        return result;
    }else{
        return 1;
    }


    
}





int main()
{
   unsigned int max_counter;
   while(true){
      cin>>max_counter;
      if (max_counter==0){
         break;
      }
      cout << fibonacci( max_counter )<<endl;
   }
} // end main