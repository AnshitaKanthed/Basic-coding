#include <bits/stdc++.h>
using namespace std;

void explainSet(){
    set<int>st;
    st.insert(1); //{1}
    st.emplace(2); //{1,2}
    st.insert(2); //{1,2}
    st.insert(4); //{1,2,4}
    st.insert(3); //{1,2,4,3}

    //begin, end, rbegin......are same as above.

    //{1,2,3,4,5}
    auto it= st.find(3);

    //{1,2,3,4,5}
    auto it = st.find(6);

    //{1,4,5}
    st.erase(5); //{1,4}

    
}