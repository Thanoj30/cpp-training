#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string t1;
    string t2;
    cin>>t1;
    cin>>t2;
    cout<<t1.length()<<" "<<t2.length()<<endl;
    cout<<t1<<t2<<endl;
    swap(t1[0], t2[0]);
    cout<<t1<<" "<<t2;
    return 0;
}
