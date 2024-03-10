#include <bits/stdc++.h>
using namespace std;

// stores everything in form of key and values.
// key can be of any datatype.
// Similarly, value can be of any datatype.
// Map stores unique key in sorted order.
void explainMap(){
    map<int,int> mpp;
    map<int, pair<int,int>> mpp;
    map<pair<int,int>int>mpp;

    mpp[1]=2;
    mpp.emplace({3,1});
    mpp.insert({2,4});
    mpp[{2,3}]=10;

    {
        {1,2}
        {2,4}
        {3,1}
    }

    for(auto it : mpp){
        cout << it.first << " " << it.second << endl; 
    }
    // {1,2}
    // {2,4}
    // {3,1}
    cout << mpp[1]; //print 2
    cout << mpp[5]; //print 0(null)

    auto it=mpp.find(3);
    cout << *(it).second;

    auto.it=mpp.find(5); //5 is not there,it points to mpp.end() -> after the map

    auto.it = mpp.lower_bound(2);
    auto.it = mpp.upper_bound(3);
}

void explainMultiMap(){
    // Everything same as key, only it can store multiple keys.
    //only mpp[key] cannot be used here.    
}