#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int A,B,K;
	std::cin>>A>>B>>K;
    if(A>=K){
        cout<<A;
    }
    else{
        cout<<A+B;
    }
    return 0;
}
