#include <bits/stdc++.h>
using namespace std ;
// push-> O(logn)
// top->O(1)
// pop -> O(logn)
void pairs()
{
    pair<int , int > p={1,3};
    cout << p.first <<'\n';
    cout << p.second << '\n';
    pair <int ,pair<int,float >> k={1,{2,6.0}};
    cout <<k.first <<'\n';
    cout << k.second.second << '\n';

    pair <int ,int > arr[]={{1,5},{4,90},{68,23}};
    cout << arr[2].second <<'\n';
}
void vectors ()
{
    vector <int>v; //creates  empty container'v
    v.push_back(1); // creates space for 1 element {1}
    v.emplace_back(2) ;//{1,,2} 

    vector <int >v1(5,100); // {100,100,100,100,100}
    vector <int>v2(v1);
    cout << v1[0];

}
void iterators ()
{
    // vector <int> :: iterator (name)
    // iterator points to the memory 
    vector <int>v(1,1);//{1,1,1,1,1}
    v.push_back(3); // creates space for 1 element {1}
    v.emplace_back(4) ;//{1,,2} 
    v.push_back(5);
    v.push_back(8);

    vector <int> :: iterator it = v.begin();
    it++;
    //v.begin points to memory address
    cout << *(it) <<'\n';
    it = it+1;
    cout << *(it) <<'\n';

    it = v.end(); // end points to the location after the last element do it-- to access last element 

    vector<int>::reverse_iterator rit = v.rbegin(); //not used much begin points at the end element do it++ it will go to second last 
    vector<int>::reverse_iterator rit2 = v.rend(); //not used much 
    cout <<v[1] << " "<<v.at(0);
    cout << " "<< v.back() << "\n";
    for(vector <int> :: iterator it = v.begin(); it!=v.end();it++)
    {
        cout << *(it) << ' ';
    }

    for(auto it = v.begin(); it!=v.end();it++) //shortcut to avoud vector <int> :: iterator
    {
        cout << *(it) << ' ';
    }
     cout << '\n';
    for(auto it : v) //auto atuomatically takes dara type of data 
    {
        cout << it << " ";
    }
    cout << '\n';

     v.erase(v.begin()+1);
     for(auto it : v) //auto atuomatically takes dara type of data 
    {
        cout << it << " ";
    }
    cout << '\n';
    // to delete consecutive eleemnts in vector 
    v.erase(v.begin()+1,v.begin()+3);
     for(auto it : v) //auto atuomatically takes dara type of data 
    {
        cout << it << " ";
    }
    cout << '\n';
}

    //insert
    void insertoperations()
    {
        vector <int>v(1,1);//{1,1,1,1,1}
    v.push_back(3); // creates space for 1 element {1}
    v.emplace_back(4) ;//{1,,2} 
    v.push_back(5);
    v.push_back(8);
     vector <int>v1(1,1);//{1,1,1,1,1}
    v1.push_back(3); // creates space for 1 element {1}
    v1.emplace_back(4) ;//{1,,2} 
    v1.push_back(5);
    v1.push_back(8);
    v1.insert(v1.begin(),300);
    v1.insert(v1.begin()+1,2,9);
     for(auto it : v1) //auto atuomatically takes dara type of data 
    {
        cout << it << " ";
    }
    cout << '\n';
    v1.pop_back();
    v1.swap(v);
     for(auto it : v1) //auto atuomatically takes dara type of data 
    {
        cout << it << " ";
    }
    
    }

    void lists()
    {
        
        list <int> ls;
        ls.push_back(2);
        ls.push_front(4);
        for(auto it : ls) //auto atuomatically takes dara type of data 
    {
        cout << it << " ";
    }
    }

    void stacks()
    {
        stack<int> st;
        st.push(1);
        st.push(3);
        st.push(6);
        st.push(0);
        st.emplace(1);

        cout << st.top();
        st.pop();
       


     //top,pop,empty only   O(1) 
     //LIFO   
    }

    void queues()
    {
        //FIFO
        
    }
    void PQ()
    {
        
    priority_queue<int>pq;

    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8,5,2}
    pq.emplace(10); // {10, 8, 5,2}

    cout << pq.top(); // prints 10

    pq.pop(); // {8, 5, 2}

    cout << pq.top(); // prints 8

    // size swap empty function same as others

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5); // {5}
    pq.push(2); // {2, 5}
    pq.push(8); // {2, 5, 8}
    pq.emplace(10); // {2, 5, 8, 10}

    cout << pq.top(); // prints 2

    }
    void Set() 
    {
        //sorted nd unqiue not trepated 
set<int>st;
st.insert(1); // {1}
st.emplace(2); // {1, 2}
st.insert(2); // {1, 2}
st.insert(4); // {1, 2, 4}
st.insert(3); // {1, 2, 3, 4}

// Functionality of insert in vector
// can be used also, that only increases
// efficiency

// begin(), end(), rbegin(), rend(), size(),
// empty() and swap() are same as those of above

// {1, 2, 3, 4, 5}
auto it = st.find(3); //returns iterator points t 3

// {1, 2, 3, 4, 5}
auto it = st.find(6);// eleemnt not founf returns st.and()

// {1, 4, 5}
st.erase(5); // erases 5 // takes logarithmic time

int cnt = st.count(1);

auto it = st. find(3) ;
st.erase(it); // it takes constant time

// {1, 2, 3, 4, 5}
auto it1 = st.find(2);
auto it2 = st.find(4);
st.erase(it1, it2); // after erase {1.

// lower_bound() and upper_bound() function works in the same way
// as in vector it does.

// This is the syntax
    
auto it = st.upper_bound(3);
auto it = st.upper_bound(3);

} 
void explainMultiSet()
 {
// Everything is same as set
// only stores duplicate elements also

multiset<int>ms;
ms.insert(1); //{1}
ms.insert(1); // {1, 1}
ms.insert(1); //{1, 1, 1}

ms.erase(1); // all 1's erased

int cnt = ms.count(1);

// only a single one erased
ms.erase(ms.find(1));

// ms.erase(ms.find(1), ms.find(1),2);
 

// rest all function same as set
 }
 void explainUSet() 
 {
    //O(1)
//unordered set<int> st;
// tower_bound and upper_bound function
// does not works, rest all functions are same
// as above, it does not stores in any
// particular order it has a better complexity
//than set in most cases, except some when collision happens
 }
 void explainMap() 
 {
//key,value
//in sorted irder 
map<int, int> mpp;

map<int, pair<int, int>> m1;

map< pair<int, int>, int> m2;


mpp[1] = 2;
mpp.emplace(3, 1);

mpp.insert({2, 4});

m2[{2,3}]=10;
// {
// {1, 2}
// (2, 4)
// {3, 1}
// }

for(auto it : mpp) 
{
cout << it.first << "" << it.second << endl;
}
cout << mpp[1];
cout << mpp[5];
auto it = mpp.find(3);
 }

void explainMultimap() 
{
// everytning same as map, only it can store multiple keys
// only mpp[key] cannot be used here
}
void explainUnorderedMap() 
{
// same as set and unordered_Set difference.
}
bool comp(pair<int,int>p1, pair<int,int>p2)
{
if(p1.second < p2.second) 
{
return true;
} 
else if(p1.second == p2.second) 
{
if(p1.first>p2.second) return true;

return false;

}
}

//  void explainExtra() 
//  {      
//     pair<int,int> a[] = {{1,2}, {2, 1}, {4, 1}};
//      sort(a, a + n);
//  sort(v.begin(), v.end())
//  sort(a+2, a+4)
//  sort(a, a+n, greater<int>)
//  pair<int,int> a[] = {{1,2}, {2, 1}, {4, 1}}
//  // sort it according to second element
//  // if second element is same, then sort
//  // it according to first element but in descendin
//  sort(a, a+n ,comp); //selt writeen comparator also a boolean fucnton
//  // {4,1}, {2, 1}, {1, 2}}
//  int num = 7;
//  int cnt = _builtin_popcount()
//  long long num = 165786578687;
//  int cnt = _builtin_popcountll()
//  string s = "123"
//  do {
//  cout << s << endl;
//  } 
//  while(next_permutation(s.begin(), s.end()));
//   }
int main ()
{
    //pairs();
    // vectors();
    //iterators ();
    // insertoperations();
    //  lists();
    //stacks();
     explainMap();
}



