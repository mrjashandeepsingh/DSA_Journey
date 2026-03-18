#include <iostream>
#include<list>
using namespace std;

int main(){
    list<int> ls;
    ls.push_back(3);
    ls.emplace_back(4);
    ls.push_front(2);
    ls.emplace_front(1);
    ls.pop_front();
    ls.erase(ls.begin(),ls.end());
    for(int x:ls) cout<<x<<" ";
    cout<<endl;
    return 0;
}