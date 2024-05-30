// Input a string of length less than 10 and convert it into integer without using builtin function.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str;
    cout<< "Enter the string: ";
    getline(cin,str);
    int size = str.size();
    int num = 0;
    for(int i=0; i<size; i++){
        num = (num * 10) + (str[i]-48);
    }
    cout<< "The number is: " << num << endl;
    return 0;

}