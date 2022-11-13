#include <iostream>
#include <string>

using namespace std;

int main(){

    int array[]={3,4,6,7,1};
    int targetsum=9;
    int size=sizeof(array)/sizeof(array[0]);
    int pairs=0;
    
 
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(array[i] + array[j]==targetsum){
                pairs++;
            }

        }
        
    }
    cout<<"Number of pairs: "<<pairs<<endl;




 
 
 
 
 
 
 
 return 0;
}