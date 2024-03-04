#include <bits/stdc++.h>
using namespace std;

void explainVector() {

    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>>vec;

    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int> v(5,100); //size is 5 and each position, value is 100.
    
    vector<int> v(5); //container of size 5 with all values 0
    vector<int> v1(5,20);
    vector<int> v2(v1); // v2 is the copy of v1.

    vector<int>::iterator it=v.begin();
    it++;
    cout << *(it) << " ";

    it=it+2;
    cout << *(it) << " ";

    vector<int>::iterator it =v.end(); // end points to the memory location right after the last element
                                    // and not the last element(for last element do)
    // vector<int>::iterator it =a.rend();  //reverse-end
    // vector<int>::iterator it =a.rbegin();  //reverse-begin

    cout << v[0] << " " << v.at(0);
    cout << v.back() << " ";

    //printing the vector
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }

    for(auto it = v.begin();it !=v.end();it++){ //auto = datatype is automatically defined according to the data.
        cout << *(it) << " ";
    }

    //For-each loop
    for(auto it :v){
        cout << it << " ";
    }
     
    //Deletion function
    //{10,20,30,40}
    v.erase(v.begin()+1);

    // {10,20,30,23,50}
    v.erase(v.begin() + 2,v.begin()+4); // {10,20,50} [start,end) start is included, end is not included.

    //Insert Function
    vector<int>v(2,100); //{100, 100}
    v.insert(v.begin(),300); //{300,100,100}
    v.insert(v.begin()+1,2,10); //{300,10,10,100,100}

    //Copy
    vector<int> copy(2,50); //{50,50}
    v.insert(v.begin(), copy.begin(), copy.end()); //(50,50,300,10,10,100,100)

    //Vector size
    cout << v.size();

    v.pop_back(); //pops out the last element.

    //v1 -> {10,20}
    //v2 -> {30,40}
    v1.swap(v2); //v1 -> {30,40} , v2 -> {10,20}

    v.clear(); //erases the entire vector.

    cout << v.empty(); //checks if vector is empty or not.
}