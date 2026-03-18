#include <bits/stdc++.h>
using namespace std;

int main(){
    deque<int> dq;
    dq.push_back(3);
    dq.emplace_back(4);
    dq.push_front(2);
    dq.emplace_front(1);
    dq.pop_front();
    

    return 0;
}