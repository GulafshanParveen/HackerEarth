#include <iostream>
using namespace std;

int main(){
        int n,hr,min,diff;
        int sh,sm,eh,em;
	cin>>n;
        for(int i=0;i<n;i++){
                cin>>sh>>sm>>eh>>em;
				int result=sh*60+sm;
				int result1=eh*60+em;
				diff=result1-result;
				cout<<(diff/60)<<" "<<(diff%60)<<endl;
	}
	return 0;
}
