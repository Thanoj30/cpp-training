#include<iostream>
#include<string>
using namespace std;
int main(){
    string alphabets{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"ZXYWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba"};
    string msg{};
    // Encrypting the message
    string encrypted_msg{};
    cout << "Enter the message to encrypt: ";
    getline(cin, msg);

    cout << "Encrypted message: ";
    for(char c : msg){
        size_t position=alphabets.find(c);
        if(position!=string::npos){
            char new_c=key.at(position);
            encrypted_msg+=new_c;
        }
        else{
            encrypted_msg+=c;
        }
    }
    cout << encrypted_msg << endl;
    // Decrypting the message
    string decrypted_msg{};
    cout<<"decrypting the message..."<<endl;
    for(char c : encrypted_msg){
        size_t position=key.find(c);
        if(position!=string::npos){
            char new_c=alphabets.at(position);
            decrypted_msg+=new_c;
        }
        else{
            decrypted_msg+=c;
        }
    }
    cout << "Decrypted message: " << decrypted_msg << endl;
    return 0;
}