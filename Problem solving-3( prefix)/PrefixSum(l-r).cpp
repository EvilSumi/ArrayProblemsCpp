#include <iostream>
#include <string>
#include <vector>
using namespace std;





int main(){
    int n;
    cout<<"Define Array Size:";
    cin>>n;
    vector<int> v(n+1,0);
    
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    
    //calculate prefix sum array
    for(int i=1;i<=n;i++){
        v[i]+=v[i-1];
    }
    
    int l,r;
    int q;
    cout<< "Enter number of Queries: ";
    cin>>q;

    while(q--){
    cout<< "Enter Range: ";

    cin>>l>>r;
    int ans=0;
    ans= v[r]- v[l-1];
    cout<<ans<<endl;
    }
    
    

    







 
 
 
 
 
 
 
 return 0;
}