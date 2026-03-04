#include <iostream>
using namespace std;

int main(){
    for (int i = 0; i < 10; i++)
    {
        cout << "Hello\n";
    }
    // But now you can't get the value of i after the loop in main space as i has only local scope.

    // while loop
    int i=0;
    while (i<10)
    {
        cout <<"Bye\n";
        i++;
    }

    // Do-While loop 
    i=0;
    do{
        cout << "Chal be\n";
        i++;
    }while(i<10);
    return 0;
}