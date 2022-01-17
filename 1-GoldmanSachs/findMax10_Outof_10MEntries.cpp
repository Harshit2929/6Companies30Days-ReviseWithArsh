#include <bits/stdc++.h>
using namespace std;

int main(){
    srand(time(NULL)); 
    int k=10;
    int size=10000;
    set<int>v;
    set<int, greater<int> >::iterator itr;
    
    while(v.size()<size){
        v.insert(rand()%10000000);

    }
    
    priority_queue<int, vector<int>, greater<int> >q;
     set<int, greater<int> >::iterator temp=v.begin();
    for(itr=v.begin();itr!=next(temp,k);itr++){
        q.push(*(itr));
    }
    
    for(itr;itr!=v.end();itr++){
        int temp=q.top();
        if(temp<*(itr)){
            q.pop();
            q.push(*(itr));
        }
    }
    // cout<<" array : ";
    //  for(int i=0;i<v.size();i++){
    //      cout << '\t' << v[i];
    // }
    // cout<<endl;
     cout << "  max "<<k<<" numbers in a list having "<<size<<" entries : ";
    
    while (!q.empty()) {
        cout << '\t' << q.top();
        q.pop();
    }
    
    
    // cout<<endl;

}