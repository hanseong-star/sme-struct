#include <iostream>
using namespace std;

struct A {
    A(const char* tag) { cout << "A(" << tag << ") 생성자\n"; }
    ~A()               { cout << "A 소멸자\n"; }
};

class B {
    A a1;  // 선언 1
    A a2;  // 선언 2
public:
    B() : a2("a2"), a1("a1") {  // 초기화 리스트 순서를 바꿨다!
        cout << "B 생성자 본문\n";
    }
    ~B() { cout << "B 소멸자\n"; }
};

int main() {
    B b;
    cout << "main 끝!\n";
}
