#include <iostream>
using namespace std;

int max(int, int);
float max(float, float);

int main(){

cout<<"The maximum number between two integers is : "<<max(10,20)<<endl;
cout<<"The maximum number between two real numbers is : "<<max(25.3,41.8)<<endl;

return 0;
}

int max(int a, int b){
int max= a>b?a:b;
return max;
}

float max(float x, float y){
float max=x>y?x:y;
return max;
}
