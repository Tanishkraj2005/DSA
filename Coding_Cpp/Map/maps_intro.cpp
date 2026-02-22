#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){

    // map -> se order way me print hota hai 
    // unordered map -> se kisi bhi order me print hota hai 
    // Creating
    map<string,int> m;

    //Insertion
    // 1
    pair<string,int> p = make_pair("tanishk",3);
    m.insert(p);

    // 2
    pair<string,int> pair2("raj",3);
    m.insert(pair2);

    // 3
    m["mera"] = 1;

    // what will happen
    m["tanishk"] = 5;

    //search

    cout<<m["mera"]<<endl;
    cout<<m.at("tanishk")<<endl;

    cout<<m["unknown"]<<endl;
    cout<<m.at("unknown")<<endl;

    cout<<m.size()<<endl;

    // to check presence
    cout<<m.count("tanishk")<<endl;

    m.erase("mera");
    cout<<m.size()<<endl;

    for(auto i:m){
        cout<<i.first << " "<<i.second <<endl;
    }

    // iterator
    map<string,int> :: iterator it = m.begin();

    while(it!=m.end()){
        cout<<it->first <<" "<<it->second <<endl;
        it++;
    }
}