#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

ll t, n, i, max, sec_max;
cin>>t;

while(t--){
	cin>>n;
	ll arr[n], b[n];

	for(i=0; i<n; i++){
		cin>>arr[i];
		b[i] = arr[i];
	}

	sort(arr, arr+n);

	max = arr[n-1];
	sec_max = arr[n-2];

	for(i=0; i<n; i++){
		if(b[i] != max){
			cout<<b[i]-max<<" ";
		} else{
		    cout<<b[i]-sec_max<<" ";
		}
	}
	cout<<endl;





}






}
