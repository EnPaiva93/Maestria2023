#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <map>
#include <set>
#include <stack>
#include <queue>

using namespace std;

int main(){

    vector<int> nuevoVector;
    nuevoVector.push_back(11);
    nuevoVector.push_back(22);
    nuevoVector.push_back(33);
    nuevoVector.push_back(44);

    cout << nuevoVector.front() << endl;
    cout << nuevoVector.back() << endl;
    cout << nuevoVector[2] << endl;
    cout << nuevoVector.at(2) << endl;

    for(auto i = nuevoVector.begin(); i != nuevoVector.end(); ++i){
        cout << *i << " ";
    }

    deque<int> d;

    d.push_front(22);
    d.push_back(33);
    d.push_front(11);
    d.insert(d.begin() + 2, 100);

    cout << endl;
    for(auto i = d.begin(); i != d.end(); ++i){
        cout << *i << " ";
    }

    list<int> l;
    l.push_front(10);
    l.insert(l.begin(),1, 5);
    l.push_back(11);

    next(l.begin(), 2);

    cout << endl;
    for(auto i = l.begin(); i != l.end(); ++i){
        cout << *i << " ";
    }

    map<int, string> valMap;

    valMap.insert(pair<int,string>(1, "primer valor"));
    valMap.insert(pair<int,string>(2, "segundo valor"));
    valMap.insert(pair<int,string>(3, "tercero valor"));

    cout << valMap.at(2) << endl;

    cout << endl;
    for(auto i = valMap.begin(); i != valMap.end(); ++i){
        cout << (*i).first << " " << (*i).second << endl;
    }

    set<int> s;

    s.insert(20);
    s.insert(11);
    s.insert(12);
    s.insert(20);
    s.insert(11);

    cout << endl;
    for(auto i = s.begin(); i != s.end(); ++i){
        cout << *i << " ";
    }

    stack<int> st;

    st.push(10);
    st.push(11);
    st.push(12);

    st.pop();

    cout  << endl;
    cout << st.top() << endl;

    queue<int> qu;

    qu.push(11);
    qu.push(12);
    qu.push(13);
    qu.pop();

    cout << qu.front() << endl;

    priority_queue<int> pq;

    pq.push(11);
    pq.push(12);
    pq.push(13);
    pq.push(130);

    cout << pq.top() << endl;


    return 0;
}
