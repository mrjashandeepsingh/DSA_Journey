#include <bits/stdc++.h>
using namespace std;

void explainPair() {
    // Simple pairs
    pair<int, int> p1 = {1, 3};

    cout<< p1.first << " " << p1.second<<"\n";
    // Nested pairs
    pair<int, pair<int, int>> p2 = {1,{3,5}};

    cout<< p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<'\n';
    // Array of pairs
    pair<int, int> arr[] = {{1,2},{3,4},{5,6}};

    cout<<arr[0].first;
}

void explainVector(){

    vector<int> v;

    v.push_back(1); // It dynamically increases size and put 1 at the end.
    v.emplace_back(2); // More faster method to push back the value at the end.

    // Vector of a pair datatype
    vector<pair<int, int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);

    vector<int> v2(5);
    vector<int> v3(5,20);

    vector<int> v4(v3);



    //Accessing the values in vector
    cout<< v[0] << " " <<v.at(1)<<endl;
    cout << v.back()<<endl;


    // Iterator
    vector<int>::iterator it = v4.begin();
    it++;
    cout<<*(it)<<endl; 
    
    vector<int>::iterator it1 = v3.end();
    cout<<*(it1)<<endl; 
    
    vector<int> v5 = {1,2,3,4,5,6,7,8,9,10};

    vector<int>::reverse_iterator it2 = v5.rend();
    cout<<*(it2-5)<<endl;

}


int main(){
    // explainPair();
    explainVector();
    return 0;
}