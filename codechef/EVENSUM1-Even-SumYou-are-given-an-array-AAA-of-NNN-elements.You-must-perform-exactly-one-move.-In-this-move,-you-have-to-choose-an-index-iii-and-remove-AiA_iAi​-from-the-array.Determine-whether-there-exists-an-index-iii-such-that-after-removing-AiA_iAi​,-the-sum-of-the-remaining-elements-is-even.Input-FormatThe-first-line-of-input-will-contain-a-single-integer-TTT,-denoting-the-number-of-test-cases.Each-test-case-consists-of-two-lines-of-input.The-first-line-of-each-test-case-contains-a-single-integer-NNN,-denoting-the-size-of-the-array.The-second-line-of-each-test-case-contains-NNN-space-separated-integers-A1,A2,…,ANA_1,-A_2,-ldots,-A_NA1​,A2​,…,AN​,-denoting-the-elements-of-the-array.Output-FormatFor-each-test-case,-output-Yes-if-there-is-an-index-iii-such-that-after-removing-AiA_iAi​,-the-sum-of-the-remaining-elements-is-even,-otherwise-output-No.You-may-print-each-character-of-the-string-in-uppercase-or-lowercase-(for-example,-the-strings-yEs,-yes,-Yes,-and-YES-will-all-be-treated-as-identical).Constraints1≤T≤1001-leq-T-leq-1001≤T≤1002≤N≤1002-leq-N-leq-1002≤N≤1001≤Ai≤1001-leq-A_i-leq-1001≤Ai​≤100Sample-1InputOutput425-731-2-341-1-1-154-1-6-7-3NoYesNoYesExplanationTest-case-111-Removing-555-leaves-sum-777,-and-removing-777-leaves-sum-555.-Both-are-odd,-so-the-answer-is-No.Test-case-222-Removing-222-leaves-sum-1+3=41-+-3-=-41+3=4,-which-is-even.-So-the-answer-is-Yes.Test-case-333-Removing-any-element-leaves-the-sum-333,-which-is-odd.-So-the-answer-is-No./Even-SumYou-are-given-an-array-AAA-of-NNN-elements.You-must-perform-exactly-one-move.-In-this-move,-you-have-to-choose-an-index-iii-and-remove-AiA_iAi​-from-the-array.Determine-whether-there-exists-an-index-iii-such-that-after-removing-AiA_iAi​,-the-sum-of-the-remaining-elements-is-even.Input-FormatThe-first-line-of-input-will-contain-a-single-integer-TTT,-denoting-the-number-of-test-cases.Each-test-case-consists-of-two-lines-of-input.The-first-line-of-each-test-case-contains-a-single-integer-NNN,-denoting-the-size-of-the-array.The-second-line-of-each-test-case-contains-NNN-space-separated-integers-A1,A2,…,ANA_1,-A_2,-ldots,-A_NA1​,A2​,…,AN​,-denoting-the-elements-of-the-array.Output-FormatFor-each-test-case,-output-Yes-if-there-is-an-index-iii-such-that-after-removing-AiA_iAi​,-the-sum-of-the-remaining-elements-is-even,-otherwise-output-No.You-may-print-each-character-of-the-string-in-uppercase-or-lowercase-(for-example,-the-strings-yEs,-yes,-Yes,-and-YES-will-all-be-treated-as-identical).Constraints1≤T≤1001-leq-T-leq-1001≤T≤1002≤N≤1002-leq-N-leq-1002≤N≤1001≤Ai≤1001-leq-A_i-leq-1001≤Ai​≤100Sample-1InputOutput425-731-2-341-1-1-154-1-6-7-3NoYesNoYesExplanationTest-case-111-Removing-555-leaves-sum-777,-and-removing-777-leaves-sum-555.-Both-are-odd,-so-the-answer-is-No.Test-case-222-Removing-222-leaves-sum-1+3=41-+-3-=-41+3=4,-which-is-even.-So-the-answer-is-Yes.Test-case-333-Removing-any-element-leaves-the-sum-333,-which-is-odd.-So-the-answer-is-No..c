#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int N;
	std::cin>>N;
	int Q;
	while(N--){
	    std::cin>>Q;
	    int arr[Q];
	    int oddcntr =0;
	    bool even= false;
	    for(int i=0;i<Q;i++){
	        std::cin>>arr[i];
	        if(arr[i]%2==0){
	            even = true;
	        }
	        else{
	            oddcntr++;
	        }
	    }
	    if(even&&oddcntr%2==0||oddcntr%2!=0){
	        std::cout<<"YES"<<endl;
	    }
	    else{
	        std::cout<<"NO"<<endl;
	    }
	}

}
