#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ma=0;
int find(string A,int size,int ind){
	int c=0,v=0,i;
	for( i=ind;i<size;i++){
		if(A[i]==A[ind]){
			c+=1;
		}
		else{
			v=i;
			break;
		}
	}
	if (c>ma){
				ma=c;
			}
	if (v!=0){
		return v-1;
	}
	return size-1;
}
int main(){
	string A;
	cin>>A;
	ll SIZE=A.size();
	ll i=0,res;
	while(i<SIZE){
		res=find(A,SIZE,i);
		i=res;
		i+=1;
	}	
	cout<<ma;
}
