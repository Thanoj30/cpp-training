#include<iostream>
using namespace std;
int area(int);
double area(double,double);
double area(double);

int main(){
    int square_side,area_of_square;
    double length,width,area_of_rectangle;
    double radius,area_of_circle;
    cout<<"Enter the side of the square: ";
    cin>>square_side;
    area_of_square=area(square_side);
    cout<<"Area of square is: "<<area_of_square<<endl;
    cout<<"Enter the length and width of the rectangle: ";
    cin>>length>>width;
    area_of_rectangle=area(length,width);
    cout<<"Area of rectangle is: "<<area_of_rectangle<<endl;
    cout<<"Enter the radius of the circle: ";
    cin>>radius;
    area_of_circle=area(radius);
    cout<<"Area of circle is: "<<area_of_circle<<endl;
    return 0;
}
int area(int side){
    return side*side;
}
double area(double length,double width){
    return length*width;
}
double area(double radius){
    double pi=3.14;
    return pi*radius*radius;
}
