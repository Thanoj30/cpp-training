#include<iostream>
using namespace std;
//function without return type and without parameters
void sum()
    {
    int a,b,sum=0;
    cout<<"enter a and b values:";
    cin>>a>>b;
    sum = a + b;
    cout<<"sum is:"<<sum<<endl;
}
int main(){
    sum();
    return 0;
} 

// function with parameters and without return type
void display(string);
int main(){
    string s="jayanti";
    display(s);
    return 0;
}
void display(string name){
    cout<<"hi "<<name;
}

//function with return type and without parameters
string display(){
    string name="thanoj";
    return name;
}
int main(){
    string s;
    s=display();
    cout<<s;
    return 0;
}
// function with parameters and with return type
int multiply(int a, int b){
    return a * b;
}
int main(){
    int x = 5, y = 10;
    int result = multiply(x, y);
    cout << "The product of " << x << " and " << y << " is: " << result << endl;
    return 0;
}

