#include <bits/stdc++.h>
using namespace std;

void print(vector<int> v){
    cout<<endl;
    for (auto it = v.begin(); it != v.end() ; it++)
    {
        cout<< *it<<" ";
    }
    
}


int main(){
    vector<int> v1 = {1,2,3,4,5};
    vector<int> v2(5);
    vector<int> v3(5, 20);
    vector<int> v4(v3);
    vector<pair<int, int>> v5 = {{2,4},{6,8}};

    v2.push_back(2);
    v2.emplace_back(4);
    
    v5.push_back({10,12});
    v5.emplace_back(14,16);

    cout <<"v2[0] "<< v2[0] << endl;
    cout <<"v3.at(1) " << v3.at(1) << endl;
    cout << "v1.front() " << v1.front() << endl;
    cout << "v1.back() " <<v1.back() << endl;

    cout << "Size of v5 = "<< v5.size() << endl;
    cout << "Check for empty v2 = " << v2.empty()<<endl;
    v4.pop_back();
    cout << "Deleting last element from v4 = " <<endl; 



    for(int i = 0; i < v4.size();i++) {
        cout << v4[i] << ", ";
    }
    cout <<endl;

    for(int x:v3) cout<<x<<", ";
    cout << endl;

    // Iterator
    vector<pair<int,int>>::iterator it = v5.begin();

    cout << (*it).first << " " << (*it).second << endl;
    

    

    for (auto ite = v1.begin(); ite != v1.end(); ite++)
    {
        cout << (*ite) << ", ";
    }
    
    
    vector<int> v0 = {1,2,3,4,5,6,7,8,9};
    vector<int>::reverse_iterator it0 = v0.rend();
    it0-=2;
    cout << *it0;

    v1.erase(v1.begin());
    v0.erase(v0.begin(), v0.begin()+6);
    v0.clear();




    cout <<endl<< v0[5]<<endl << v0.empty();
    

    
    vector<int> vp = {2,4,6,8,10};
   
    vp.insert(vp.begin(),1);

    vp.insert(vp.begin()+2,3,10);

    print(vp);

    vector<int> copy(2,50);

    vp.insert(vp.begin(),copy.begin(),copy.end());

    vp.swap(v0);

    vp.clear();
    print(vp);
    cout << vp.empty();

    auto j = "jashandeep singh"; // auto datatyping

    vector<int> vp1 = {1,2,3,4,5,6,7,8};
    vp1.resize(2);
    vp1.clear();
    vector<int>().swap(vp1);
    print(vp1);

    


    sort(v1.begin(),v1.end(),greater<int>());
    cout << v1.empty();
    print(v1);


    return 0;
}