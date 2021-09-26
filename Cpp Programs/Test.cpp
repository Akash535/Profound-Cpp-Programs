#include<bits/stdc++.h>
using namespace std;
void convert(string str,int n){
    int in=str.length();
    for(int i=0;i<in;i++){
        if(str[i]>='a'&&str[i]<='z'){
            str[i]=str[i]+n;
        }else if(str[i]>='A'&&str[i]<='Z'){
            str[i]=str[i]+n;
        }else if(str[i]>='0' && str[i]<='9'){
            str[i]=str[i]+(n+1);
        }
    }
    cout<<str;
    
}
int main(){
    string str;cin>>str;
    int n;
    cin>>n;
	convert(str,n);

    
    return 0;
}