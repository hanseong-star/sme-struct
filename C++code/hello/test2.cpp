#include <iostream>
#include <string>
using namespace std;

int main(){
    string *lengh;
    int put = 3;
    lengh = new string[put];
    string a = "Hello";
    string b = ", ";
    string c = "World!";
    lengh[0] = a;
    lengh[1] = b;
    lengh[2] = c;
    for(int i=0; i<3; i++){
        cout << lengh[i].length();
    }
    
    delete[] lengh;


};