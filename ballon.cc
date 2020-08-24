#include <iostream>
using namespace std;

int main(){
	int gcost,pcost;
	int T,N;
	int x,y,sum=0,sum1=0;
	cin>>T;
	while(T--){
		cin>>gcost>>pcost;
		cin>>N;
		for(int i=0;i<N;i++){
			cin>>x>>y;
			sum+=x*gcost+y*pcost;
			sum1+=x*pcost+y*gcost;
		}
		cout<<((sum<sum1)?sum:sum1)<<endl;
	}
	return 0;
}
