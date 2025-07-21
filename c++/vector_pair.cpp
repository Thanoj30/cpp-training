#include<iostream>
#include<vector>
using namespace std;
int main(){
    // Using vector of pairs to store student details
    vector<pair<int,string>> studentDetails={{1,"thanoj"},{2,"ganesh"}};
    for(int i=0;i<studentDetails.size();i++)
    {
        cout<<studentDetails[i].first<<" "<<studentDetails[i].second<<endl;
    }
    // Adding a new student
    cout<<"after adding a new student"<<endl;
    studentDetails.push_back(make_pair(3,"tanu"));
    for(int i=0;i<studentDetails.size();i++)
    {
        cout<<studentDetails[i].first<<" "<<studentDetails[i].second<<endl;
    }
    //useing erase to remove a student
    cout<<"after erasing student at index 2"<<endl;
    studentDetails.erase(studentDetails.begin()+2);
    for(int i=0;i<studentDetails.size();i++)
    {
        cout<<studentDetails[i].first<<" "<<studentDetails[i].second<<endl;
    }
    return 0;

}