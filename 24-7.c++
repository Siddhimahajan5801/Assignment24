#include <iostream>
using namespace std;
int add(int, int, int=0);

int main(){
int a,b,c;

cout<<"Enter the three numbers : ";
cin>>a>>b>>c;

cout<<"The sum of "<<a<<" and "<<b<<" is : "<<add(a,b)<<endl;

cout<<"The sum of "<<a<<", "<<b<<" and "<<c<<" is : "<<add(a,b,c)<<endl;


return 0;
}

int add(int x, int y, int z){
return x+y+z;
}
