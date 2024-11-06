#include <iostream>
using namespace std;

int main() {
    int num = 42;       
    int* ptr = &num;    
    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value of ptr (address of num): " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;
    *ptr = 100;
    cout << "New value of num after modification through pointer: " << num << endl;

    return 0;
}
