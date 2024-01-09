#include<bits/stdc++.h>
using namespace std;
/// 10
///1 1 1 5 5 6 4 2 2
///output : 1 2 4 5 6
int main()
{
    int a;
    cin>>a;
    set<int>s;
    set<int>:: iterator it;
    for(int i=1;i<=a;i++){
        int t;
        cin>>t;
        s.insert(t);

    }
    for(it=s.begin();it!=s.end();it++)
        cout<<' '<<*it;
    return 0;
}

