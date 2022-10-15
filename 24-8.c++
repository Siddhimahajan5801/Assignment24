#include <iostream>
using namespace std;

float area(int);
int area(int,int);
float area(float, float);

int main(){
int radius, length, breadth;
float base, height;

cout<<"Enter radius of the circle : ";
cin>>radius;

cout<<"Enter the length and breadth of the rectangle : ";
cin>>length>>breadth;

cout<<"Enter the base and height of the triangle : ";
cin>>base>>height;

cout<<endl<<"The area of circle is    : "<<area(radius)<<endl;
cout<<"The area of rectangle is : "<<area(length, breadth)<<endl;
cout<<"The area of triangle is  : "<<area(base, height)<<endl;


return 0;
}

float area(int r){
return (3.14*r*r);
}

int area(int x, int y){
return (x*y);
}

float area(float b, float h){
return (0.5*b*h);
}
