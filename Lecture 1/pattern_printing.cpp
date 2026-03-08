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

void pattern13(int n){
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << k++;
        }
        cout <<"\n";
    }
    
}

void pattern14(int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<< char(j+65);
        }
        cout <<"\n";
    }
    
}

void pattern15(int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout<< char(j+65);
        }
        cout <<"\n";
    }
    
}

void pattern16(int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<< char(i+65);
        }
        cout <<"\n";
    }
    
}

void pattern17(int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout<<char(j+65);
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<char(i-j+65);
        }
        
        
        cout<<"\n";
    }
    
}

void pattern18(int n){
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j <= n-i; j++)
        {
            cout<<char('A'+i+j-1);
        }
        cout<<"\n";
    }
    
}

void pattern19(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout<<"*";
        }
        for (int j = 0; j < 2*i; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j < n-i; j++)
        {
            cout<<"*";
        }
        
        cout<<"\n";
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<"*";
        }
        for (int j = 0; j < 2*(n-i-1); j++)
        {
            cout<<" ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    
    
}

void pattern20(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<"*";
        }
        for (int j = 0; j < 2*(n-i-1); j++)
        {
            cout<<" ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<'\n';
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout<< "*";
        }
        for (int j = 0; j < 2*i; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j < n-i; j++)
        {
            cout<< "*";
        }
        
        cout<<"\n";
    }
}

void pattern21(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==0 || i==n-1 || j==0 || j==n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    
}

void pattern22(int n){
    int len = 2*n-1;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            int dist=min(min(i,j),min(len-i-1,len-j-1));
            cout << n - dist;
        }
        cout<<"\n";
    }
    
}

int main()
{
    int n;
    cout << "Enter a no: ";
    cin >> n;
    pattern22(n);

    return 0;
}