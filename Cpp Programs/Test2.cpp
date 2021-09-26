#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d[10],i,n,r1,r2,r3;
    cin>>a>>b>>c;
    for(i=0;i<4;i++){
        r1=a%10;
        r2=b%10;
        r3=c%10;
        if(i%2==0){
            if(r1>r2 && r1>r3)
                d[i]=r1;
            else if(r1<r2 && r2>r3)
                d[i]=r2;
            else if(r3>r2 && r1<r3)
            d[i]=r3;
        }else {
            if(r1<r2 && r1<r3)
                d[i]=r1;
            else if(r1>r2 && r2<r3)
                d[i]=r2;
            else if(r3<r2 && r1>r3)
                d[i]=r3;
        }
        a=a/10;b=b/10;c=c/10;
    }
    for(int i=3;i>=0;i--){
        cout<<d[i];
    }
    return 0;
}