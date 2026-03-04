#include <iostream>
using namespace std;

// Void Function
void printName(string name) {
    cout << "Hello " << name << "!\n";
}

// To take two numbers and print its sum

int sum(int a, int b) {
    return a + b;
}

// Pass by value
void doValue(int n){
    n+=30;
}

// Pass by Reference
void doRefer(int &n){
    n+=30;
}

int main(){
    string name;
    getline(cin,name);
    printName(name);

    int x,y;
    cout << "Enter No1: ";
    cin >> x;
    cout << "Enter No2: ";
    cin >> y;
    cout <<"Sum = " << sum(x,y)<< "\n";

    int t = 10;
    cout << t <<endl;
    doValue(t);
    cout << t <<endl;
    doRefer(t);
    cout << t <<endl;
    
    return 0;
}