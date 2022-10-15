#include <iostream>
using namespace std;

int highest_value(int x){
  int max,r;
  max=x%10;
     while (x!=0){
     x=x/10;
     r=x%10;

   max=max>r?max:r;
   }

   return max;
}

int main(){
 int num;

 cout<<"Enter the number :"<<endl;
 cin>>num;

 cout<<"The highest digit in the number '"<<num<<"' is : "<<highest_value(num)<<endl;

return 0;
}
