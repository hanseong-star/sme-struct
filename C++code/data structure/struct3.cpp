#include <iostream>
using namespace std;

int main(){
    char matrix[3][4] = {
        {'a', 'b', 'c', 'd'},
        {'e', 'f', 'g', 'h'},
        {'i', 'j', 'k', 'l'}
    };
    cout << "0. " << matrix << endl;
    cout << "1. " << *matrix << endl;
    cout << "2. " << matrix[0] << endl;
    cout << "3. " << matrix[1] << endl;
    cout << "4. " << matrix[0][1] << endl;
    cout << "5. " << *matrix[0] << endl;
    cout << "6. " << *(matrix[0]+5) << endl;
    cout << "7. " << &matrix[1] << endl;
}
