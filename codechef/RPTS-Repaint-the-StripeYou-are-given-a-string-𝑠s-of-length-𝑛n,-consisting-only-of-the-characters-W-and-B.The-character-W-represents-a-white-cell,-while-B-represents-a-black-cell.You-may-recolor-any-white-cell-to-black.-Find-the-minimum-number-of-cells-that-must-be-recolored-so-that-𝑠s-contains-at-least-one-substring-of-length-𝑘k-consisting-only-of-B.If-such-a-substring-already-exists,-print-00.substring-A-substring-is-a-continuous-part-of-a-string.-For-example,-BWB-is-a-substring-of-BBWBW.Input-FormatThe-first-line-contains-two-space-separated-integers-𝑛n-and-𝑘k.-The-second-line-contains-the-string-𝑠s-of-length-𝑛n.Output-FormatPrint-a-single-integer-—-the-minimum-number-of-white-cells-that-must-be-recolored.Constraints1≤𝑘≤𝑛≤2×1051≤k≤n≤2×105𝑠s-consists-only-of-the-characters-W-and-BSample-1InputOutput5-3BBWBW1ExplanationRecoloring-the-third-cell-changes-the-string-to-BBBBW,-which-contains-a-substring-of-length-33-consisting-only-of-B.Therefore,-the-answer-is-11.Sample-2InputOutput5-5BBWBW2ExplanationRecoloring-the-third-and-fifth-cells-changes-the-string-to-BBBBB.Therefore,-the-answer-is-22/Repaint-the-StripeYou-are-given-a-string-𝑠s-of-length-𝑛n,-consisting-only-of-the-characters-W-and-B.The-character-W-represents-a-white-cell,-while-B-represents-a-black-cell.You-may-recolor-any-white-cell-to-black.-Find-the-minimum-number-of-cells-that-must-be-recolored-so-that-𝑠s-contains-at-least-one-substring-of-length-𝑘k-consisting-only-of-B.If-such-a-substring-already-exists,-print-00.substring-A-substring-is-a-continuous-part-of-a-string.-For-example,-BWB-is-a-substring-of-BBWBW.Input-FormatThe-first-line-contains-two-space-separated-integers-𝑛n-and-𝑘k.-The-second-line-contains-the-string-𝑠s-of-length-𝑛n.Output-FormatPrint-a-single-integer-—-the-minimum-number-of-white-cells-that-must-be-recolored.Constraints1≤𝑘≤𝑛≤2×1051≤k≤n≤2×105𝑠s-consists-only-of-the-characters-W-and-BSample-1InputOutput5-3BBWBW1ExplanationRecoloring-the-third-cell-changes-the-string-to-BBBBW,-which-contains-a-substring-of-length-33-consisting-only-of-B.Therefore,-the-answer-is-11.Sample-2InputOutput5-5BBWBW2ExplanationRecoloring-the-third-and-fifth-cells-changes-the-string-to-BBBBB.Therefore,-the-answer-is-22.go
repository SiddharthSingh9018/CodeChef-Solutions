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
    for(int r=0;r<N;r++){
        if(s[r]!='B'){
            cntr=0;
        }
        else{
            cntr++;
        }
        maxc = max(cntr,maxc);
    }
    cout<<max(0,K-maxc);

}
