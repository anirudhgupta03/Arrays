
//Finding unique employees and printing them in the same order as they appear in input using set data structure
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        set<int> s;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(s.find(a[i])==s.end()){
                cout << a[i] << " ";
                s.insert(a[i]);
            }
        }
        cout << endl;
    }
    return 0;
}
