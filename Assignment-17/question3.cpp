// Check whether the given string is palindrome or not.\

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str;
    cout<< "Enter the string: ";
    getline(cin,str);
    string rev = str;
    reverse(str.begin(),str.end());
    if(str==rev){
        cout<< "The given string is palindrome.";
    }
    else{
        cout<< "The given string is not palindrome.";
    }
    return 0;

}