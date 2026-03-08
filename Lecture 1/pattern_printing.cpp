#include <iostream>
using namespace std;

void pattern1(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

void pattern2(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

void pattern3(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1 << " ";
        }
        cout << "\n";
    }
}

void pattern4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << i + 1 << " ";
        }
        cout << "\n";
    }
}

void pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

void pattern6(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
}

void pattern7(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

void pattern8(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < n - i; j++)
            cout << "  ";

        for (int j = 0; j < 2 * i - 1; j++)
            cout << "* ";

        cout << "\n";
    }
}

void pattern9(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < n - i; j++)
            cout << " ";

        for (int j = 0; j < 2 * i - 1; j++)
            cout << "*";

        cout << "\n";
    }
}

void pattern10(int n){
    for (int i = 1; i <= 2*n-1; i++)
    {
        int stars = i;
        if (i>n) stars = 2*n-i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    
}

void pattern11(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << 1 - ((i+j)%2);
        }cout << "\n";
        
    }
    
}

void pattern12(int n) {
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout <<j;
        }
        for (int j = 1; j <= 2*(n-i); j++)
        {
            cout <<" ";
        }
        for (int j = 0; j < i; j++)
        {
            cout <<i-j;
        }
        
        cout<<"\n";
    }
    
}

int main()
{
    // int n;
    // cout << "Enter a no: ";
    // cin >> n;
    pattern12(4);

    return 0;
}