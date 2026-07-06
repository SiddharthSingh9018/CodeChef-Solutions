#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int xi,yi,xj,yj;
        cin>>xi>>yi>>xj>>yj;
        int delx = xj-xi;
        int dely = yj-yi;
        if(delx==0){
            if(dely>0){
                cout<<"up"<<endl;
            }
            else{
                cout<<"down"<<endl;
            }
        }
        else if(dely==0){
            if(delx>0){
                cout<<"right"<<endl;
            }
            else{
                cout<<"left"<<endl;
            }
        }
        else{
            cout<<"sad"<<endl;
        }
    }
    return 0;
	// your code goes here

}
