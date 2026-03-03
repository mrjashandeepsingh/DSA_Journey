#include <bits/stdc++.h>
using namespace std;

int main(){
    // Datatypes in c++
    // 1. int
    int x = 10;
    // 2. long
    long y = 10000000;

    long long z = 100000000000;
    // 3. float, double  (no with decimal points)
    float a = 23.24;
    double b = 54.43243;
    float c = 5;  // it can also store int datatypes and print 5 if cout
    
    // 4. string and getline and char (datatypes)
    char d = 'c';

    string s1;
    string s2;
    cout << "Enter a string 1: ";
    cin >> s1;   // if we enter jashandeep singh
    cout << s1<<endl;  // it will get and print only jashandeep
    
    // to get whole string with spaces (getline)
    cout << "Enter a string 2: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');  // to remove the input buffer that is left over string 
    getline(cin,s2);  // getline(cin,stringname);
    cout << s2<<"\n";

    return 0;
}