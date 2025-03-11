#include <iostream>
#include <string>
using namespace std;

void say_hello(string name){
    cout << "Hello " << name << endl;
}

int main(void){
    cout << "What is your name?" << endl;
    auto name = string{};
    cin >> name;
    say_hello(name);

    return 0;
}