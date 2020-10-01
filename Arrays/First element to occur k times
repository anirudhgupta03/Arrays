/*Given an array of N integers. The task is to find the first element that occurs K number of times. If no element occurs K times the print -1.
Constraints:
1 <= T <= 100
1 <= N, K <= 105
1<= A <= 106

Example:
Input :
1
7 2
1 7 4 3 4 8 7
Output :
7
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        long a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        unordered_map<int,int> umap;
        int flag=0;
        for(int i=0;i<n;i++) umap[a[i]]++;
        for(int i=0;i<n;i++){
            if(umap[a[i]]==k){
                flag=1;
                cout << a[i] << " ";
                break;
            }
        }    
        if(flag==0) cout << -1 << endl;
    }
    return 0;
}
