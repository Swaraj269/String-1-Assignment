// Input a string of length n and count all the consonants in the given string.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cout<< "Enter the size of the string: ";
    cin >> n;
    char str[n];
    cout<< "Enter the string: ";
    for(int i=0; i<=n-1; i++){
        cin >> str[i];
    }
    int count = 0;
    for(int i = 0; i<=n-1;i++){
        if(str[i]!='a' && str[i]!='e' && str[i]!='i'&& str[i]!='o' && str[i]!='u'){
            count++;
        }
    }
    cout<< count<<endl;
    return 0;

}