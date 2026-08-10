#include <bits/stdc++.h>
using namespace std;

int main() {

    int N;
    int K;
    cin>>N>>K;
    std::string s;
    std::cin>>s;
    int cntr=0;
    int maxc=0;
    int l=0;
    for(int r=0;r<N;r++){
        if(r<=K){
            if(s[r]=='B'){
                cntr++;
            }
            continue;
        }
        l++;
        if(s[l]=='B'){
                cntr--;
        }
        if(s[r]=='B'){
                cntr++;
        }
        maxc = max(cntr,maxc);
    }
    cout<<max(0,K-maxc);
}
