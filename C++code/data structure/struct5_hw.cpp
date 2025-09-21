#include <iostream>
#include <string>
using namespace std;

class mystring{
public:
    mystring();
    ~mystring();
    void _set_string(string input_str);
    string _get_string();
    void _concat_string(string input_str);
    void _clear();
    void _get_length();
    string _find_substring(string inpur_str, int &start, int &end);


private:
    string str;
    string* lg;
    int len;

};

mystring::mystring(){
    len = 1;
    lg = new string[len];

}

mystring::~mystring(){
    delete[] lg;
}

mystring::_set_string(string input_str){
    str = input_str;
}

string mystring::_get_string(){
    return str;
}

mystring::_concat_string(string input_str){
    
}

int main(){


}