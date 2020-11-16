#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,p,temp=0;
        cin>>n>>p;
        int mat[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<"1"<<" "<<i+1<<" "<<j+1<<" "<<i+1<<" "<<j+1<<endl;
                cin>>temp;
                if(temp) mat[i][j]=1;
                else if(temp==0) mat[i][j]=0;
                else if(temp==-1) return 0;
            }
        }
        cout<<"2\n";
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) cout<<mat[i][j]<<" ";
            cout<<"\n";
        }
        cin>>temp;
        if(temp==-1) return 0;
        
    }
	return 0;
}
