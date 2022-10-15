#include <iostream>
using namespace std;

int add(int,int);
char add(char , char);
double add(double, double);

int main(){

cout<<"The addition of two numbers having different data types is : "<<endl<<endl;

cout<<"20 + 62 = "<<add(20,62)<<endl;

cout<<"-21474.83648 + -214748.342 = "<<add(-21474.83648, -214748.342)<<endl;

cout<<"235.8256 + 958.2563 = "<<add(235.8256,958.2563)<<endl;

cout<<"'a'+'h'="<<add('a','h')<<endl;

return 0;
}

int add(int a, int b){
cout<<endl<<"'1 is running'"<<endl;
return (a+b);
}

double add(double x, double y){
cout<<endl<<"'2 is running'"<<endl;
return (x+y);
}

char add(char j, char k){
cout<<endl<<"'3 is running'"<<endl;
return (j+k);
}
