#include <iostream>
using namespace std;


template <typename T>

void func2 (T input){
   cout<<input<<endl;
}









int main()
{
   func2("asidfjioehw");
   func2(123456);
   return 0;
}