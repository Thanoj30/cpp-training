/*#include<iostream>
using namespace std;
int max_of_four(int a, int b, int c, int d){
    int sum=a;
    if(sum>b)sum=b;//error
    if(c>sum)sum=c;
    if(d>sum)sum=d;
    return sum;   
}
int main(){
    int a=1,b=2,c=3,d=4;
    int sum=max_of_four(a,b,c,d);
    cout<<sum;
    return 0;
}*/
#include<iostream>
using namespace std;

int max_of_four(int a, int b, int c, int d) {
    int max_val = a;
    if (b > max_val) max_val = b;
    if (c > max_val) max_val = c;
    if (d > max_val) max_val = d;
    return max_val;
}

int main() {
    int a = 1, b = 2, c = 3, d = 4;
    int result = max_of_four(a, b, c, d);
    cout << result;
    return 0;
}