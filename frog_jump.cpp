#include<bits/stdc++.h>
using namespace std;
int jump(vector <int> &v,vector <int> &v2,int n){
	int j1,j2;
	   if(n==0) return 0;
	   if(v2[n]!=-1) return v2[n];
	   j1=jump(v,v2,n-1)+abs(v[n]-v[n-1]);
	   
	   if(n>1){
	   	j2=jump(v,v2,n-2)+abs(v[n]-v[n-2]);
	   }
	   return v2[n]=min(j1,j2);

}

int main(){
	int n,a;
	cin>>n;
	std::vector<int> v;
	std::vector<int> v2(n,-1);
	for(int i=0;i<n;i++){
		cin>>a;
		v.push_back(a);
	}
	cout<<jump(v,v2,n-1);
}
