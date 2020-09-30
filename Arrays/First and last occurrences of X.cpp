//Given a sorted array with possibly duplicate elements, the task is
//to find indexes of first and last occurrences of an element x in the given array.

//Note: If the number x is not found in the array just print -1.

//Using Binary Search O(log n)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int first=-1,last=-1,l=0,r=n-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(a[mid]==x){
                first=mid;
                r=mid-1;
            }
            else if(a[mid]<x) l=mid+1;
            else r=mid-1;
        }
        if(first==-1){
            cout << -1 << endl;
            continue;
        }
        l=0,r=n-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(a[mid]==x){
                last=mid;
                l=mid+1;
            }
            else if(a[mid]<x) l=mid+1;
            else r=mid-1;
        }
        cout << first << " " << last << endl;
    }
    return 0;
}
