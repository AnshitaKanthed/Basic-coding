#include <bits/stdc++.h>
using namespace std;

void explainStack()
{
    stack<int> st;
    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(3); //{3,2,1}
    st.push(3); //{3,3,2,1}
    st.emplace(5); //{5,3,3,2,1}

    cout << st.top(); //prints 5
    st.pop(); //{3,3,2,1}

    cout << st.size();
    cout << st.empty();

    stack<int>st1,st2;
    st1.swap(st2);
}