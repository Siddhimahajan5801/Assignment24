#include <iostream>
using namespace std;

void prime_or_not(int x){

int count=0;

if (x==1)
cout<<x<<" is a prime number"<<endl;

else {

for (int i=1; i<x; i++){
   if (x%i==0)
   count++;
}

if (count==1)
   cout<<x<<" is a prime number"<<endl;

   else
   cout<<x<<" is not a prime number"<<endl;


   }

}

int main(){
   int number;

   cout<<"Enter the number :"<<endl;
   cin>>number;
   cout<<endl;

   prime_or_not(number);

return 0;
}
