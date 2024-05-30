// Input a string of size n and update all the odd positions in the string to character ‘#’. Consider
// 0-based indexing.

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
    for(int i = 0; i<=n-1;i++){
        if(i%2!= 0){
            str[i] = '#';
        }
    }
    cout<< str;
    return 0;

}