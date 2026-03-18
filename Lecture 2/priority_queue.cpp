#include <bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.emplace(1);
    pq.emplace(2);
    pq.emplace(3);
    cout << pq.top()<<endl;

    return 0;
}