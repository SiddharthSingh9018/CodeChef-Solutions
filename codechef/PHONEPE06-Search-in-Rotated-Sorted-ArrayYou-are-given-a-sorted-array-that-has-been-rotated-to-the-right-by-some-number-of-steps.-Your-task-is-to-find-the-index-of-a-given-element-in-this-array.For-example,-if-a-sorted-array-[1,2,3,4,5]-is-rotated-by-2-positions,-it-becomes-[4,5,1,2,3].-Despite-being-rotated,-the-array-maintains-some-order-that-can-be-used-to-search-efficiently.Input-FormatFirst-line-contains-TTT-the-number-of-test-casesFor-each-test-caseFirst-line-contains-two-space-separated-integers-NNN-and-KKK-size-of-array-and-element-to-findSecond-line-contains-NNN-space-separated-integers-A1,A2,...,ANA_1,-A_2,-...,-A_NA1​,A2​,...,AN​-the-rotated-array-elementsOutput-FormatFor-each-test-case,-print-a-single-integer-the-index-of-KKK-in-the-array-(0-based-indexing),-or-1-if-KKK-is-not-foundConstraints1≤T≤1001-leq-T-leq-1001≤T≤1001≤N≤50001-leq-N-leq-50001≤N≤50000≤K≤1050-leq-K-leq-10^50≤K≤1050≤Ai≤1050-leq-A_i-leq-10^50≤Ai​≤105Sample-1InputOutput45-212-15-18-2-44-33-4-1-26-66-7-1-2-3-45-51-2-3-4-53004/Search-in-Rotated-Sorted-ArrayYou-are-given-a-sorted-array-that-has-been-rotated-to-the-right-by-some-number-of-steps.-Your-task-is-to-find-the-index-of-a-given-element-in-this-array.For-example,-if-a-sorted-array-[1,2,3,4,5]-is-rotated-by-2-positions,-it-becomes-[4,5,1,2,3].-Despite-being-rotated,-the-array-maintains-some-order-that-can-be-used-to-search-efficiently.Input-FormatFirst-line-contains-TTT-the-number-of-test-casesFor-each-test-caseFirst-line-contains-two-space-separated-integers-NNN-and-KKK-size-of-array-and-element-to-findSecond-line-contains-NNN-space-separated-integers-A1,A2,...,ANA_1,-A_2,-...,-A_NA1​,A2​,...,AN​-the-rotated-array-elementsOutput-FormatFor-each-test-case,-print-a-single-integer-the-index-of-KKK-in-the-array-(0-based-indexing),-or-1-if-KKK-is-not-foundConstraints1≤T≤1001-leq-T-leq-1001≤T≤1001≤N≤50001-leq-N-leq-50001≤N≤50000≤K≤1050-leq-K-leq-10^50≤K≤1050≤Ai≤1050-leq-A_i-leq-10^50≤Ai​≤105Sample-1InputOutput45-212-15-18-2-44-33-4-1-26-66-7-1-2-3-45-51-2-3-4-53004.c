using namespace std;
#include <bits/stdc++.h>

int bins(vector<int> &arr,int N,int K){
    int ans =-1;
    int hi=N-1;
    int lo = 0;
    while(lo<=hi){
        int mid= lo+(hi-lo)/2;
        if(arr[mid]==K){
            return mid;
        }
        else if(arr[mid]<=arr[hi]){
        
            if(arr[mid]<K&&K<=arr[hi]){
                lo = mid+1;
            }
            else{
                hi =mid-1;
            }
        }
        else{
            if(K<arr[mid]&&arr[lo]<=K){
                hi=mid-1;
            }
            else{
                lo = mid+1;
            }
        }
            
        }
        return -1;
}



#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
    cin>>T;
    while(T--){
        int N,K;
        cin>>N>>K;
        std::vector<int> arr(N);
        for(int i=0;i<N;i++){
            
            cin>>arr[i];
        }
       cout<<bins(arr,N,K)<<'\n';
    }
    return 0;
}
    
    
        
        
        