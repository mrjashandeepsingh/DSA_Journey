#include <bits/stdc++.h>
using namespace std;

void print(vector<int> v) {
    cout <<endl;
    for(int x:v) {
        cout << x << " ";
    }
    cout <<endl;
}

int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,9};
    vector<int>::iterator it = v.begin();
    cout << *it<<endl;
    print(v);
    
    v.erase(v.begin(),v.end());
    print(v);

    return 0;
}