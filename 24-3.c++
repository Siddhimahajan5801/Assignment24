#include <iostream>
using namespace std;

int x_power_y(int x, int y){
       int result=1;
    for (int i=0; i<y; i++){
       result=result*x;
    }
    return result;
}

int main(){

    int num, power;

    cout<<"Enter the number and raised power : "<<endl;
    cin>>num>>power;

    cout<<num<<" raised to "<<power<<" : "<<x_power_y(num, power)<<endl;

return 0;
}
