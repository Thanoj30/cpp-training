#include <iostream>
using namespace std;
//void function(int i,int ptr,int n){
//      i+=1;
//      ptr+1;
//  }
//  int main(){
//      int i=4;
//      int n=0;
//      int *ptr=&i;
//      function(i,*ptr,n);
//      i=i+1;
//      cout<<ptr<<endl;
//      cout<<ptr<<endl;
//      cout<<ptr<<endl;
//}
int main() {
    int t = 9;
    int *ptr = &t;
    int **ptr1 = &ptr;
    int ***ptr2 = &ptr1;

    cout << t << endl;
    cout << *ptr << endl;
    cout << **ptr1 << endl;
    cout << ***ptr2 << endl;
}
