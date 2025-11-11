#include <iostream>
using namespace std;
void function(int i,int ptr,int n){
      i+=1;
      ptr+1;
  }
  int main(){
      int i=4;
      int n=0;
      int *ptr=&i;
      function(i,*ptr,n);
      i=i+1;
      cout<<ptr<<endl;
      cout<<ptr<<endl;
     cout<<ptr<<endl;
}
// int main(){
// int first=110;
// int *p=&first;
// int **q=&p;
// int second =(**q)++ +9;
// cout<<first<<" "<<second<<endl;
// return 0;
//}
