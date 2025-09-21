#include<iostream>
#include<string>
using namespace std;

class Person {
private:
    string name;
    string idNum;
public:
    Person(string n, string id);
    void print(){
        cout << "print p" << endl;
    };
    string getName(){
        return name;
    };
};

Person::Person(string n, string id){
    name = n;
    idNum = id;
}

class Student : public Person {
private:
    const string* major;
    int gradYear;
public:
    Student(string n, string id,  const string& maj, int grad);
    void print(){
        cout << "print s" << endl;
    };
    void changeMajor(const string& newMajor){
        major = &newMajor;
    };

};

Student::Student(string n, string id, const string& maj, int grad)
    : Person(n, id) //gpt의 도움을 받음
{
    major = &maj;
    gradYear = grad;
}

int main(){
    Person person ("Mary", "12-345");
    Student student("Bob", "98-764", "Math", 2012);
    
    cout << student.getName() << endl;
    person.print();
    student.print();
    // person.changeMajor("Physics");
    student.changeMajor("English");

}