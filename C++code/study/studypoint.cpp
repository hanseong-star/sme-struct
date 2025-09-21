#include <iostream>
//여러 데이터들의 변수들의 주소를 알아보고 
//주소를 겹치게 했을 떄 어떻게 되나
using namespace std;
int main(){
    int _int = 20;
    char _char ='h';
    float _float = 0.23;
    unsigned int _unsi = 100;
    long long _long = -512;
    
    int* p_int = &_int;
    char* p_char = &_char;
    float* p_float = &_float;
    unsigned int* p_unsi = &_unsi;
    long long* p_long = &_long;

    cout << "_int " << _int << endl;
    cout << "p_int " << p_int << endl;
    cout << "&_int " << &_int << endl;
    cout << "*p_int " <<*p_int << endl;
    cout << "&p_int " << &p_int << endl;

    cout << "_char " << _char << endl;
    cout << "p_char " << p_char << endl;
    cout << "&_char " << &_char << endl;
    cout << "*p_char " <<*p_char << endl;
    cout << "&p_char " << &p_char << endl;

    cout << "_float " << _float << endl;
    cout << "p_float " << p_float << endl;
    cout << "&_float " << &_float << endl;
    cout << "*p_float " <<*p_float << endl;
    cout << "&p_float " << &p_float << endl;

    cout << "_unsi " << _unsi << endl;
    cout << "p_unsi " << p_unsi << endl;
    cout << "&_unsi " << &_unsi << endl;
    cout << "*p_unsi " <<*p_unsi << endl;
    cout << "&p_unsi " << &p_unsi << endl;

    cout << "_long " << _long << endl;
    cout << "p_long " << p_long << endl;
    cout << "&_long " << &_long << endl;
    cout << "*p_long " <<*p_long << endl;
    cout << "&p_long " << &p_long << endl;

    _int += 100;
    cout << "_int + 100 " << _int << endl;
    cout << "p_int " << p_int << endl;
    cout << "*p_int " << *p_int << endl;
    p_int += 100;
    cout << "p_int + 100 " << p_int << endl;
    cout << "*p_int " << *p_int << endl;
    cout << "_int " << _int << endl;
    cout << "&_int " << &_int << endl;
    cout << "&p_int " << &p_int << endl;

}