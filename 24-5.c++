#include <iostream>
using namespace std;

int fibo_or_nor(int x){

if (x==1 || x==0)
return 1;

int a=0, b=1;
int c=a+b;

while(c<=x){
if (c==x)
return 1;

 a=b;
 b=c;
 c=a+b;
  }
  return 0;
}

int main(){
int num;
cout<<"Enter the number : ";
cin>>num;

int fibo= fibo_or_nor(num);

if (fibo==1)
cout<<num<<" is a term in fibonacci series"<<endl;

else
cout<<num<<" is not a term in fibonacci series"<<endl;

return 0;
}
