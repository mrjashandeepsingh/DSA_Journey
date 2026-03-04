#include <iostream>
using namespace std;

int main(){
    string name = "Jashandeep Singh";
    cout << name[3]; 
    cout << "\n" << name.size();
    cout << "\n" << name.length();
    name[3] = 's';
    cout << "\n"<<name;
    return 0;
}