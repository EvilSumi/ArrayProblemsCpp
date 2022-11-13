#include <iostream>
#include <string>

using namespace std;

int main(){

    int array[]={3,4,6,7,1,1};
    int targetsum=9;
    int size=sizeof(array)/sizeof(array[0]);
    int triplets=0;
    
 
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
            if(array[i] + array[j] + array[k]==targetsum){
                triplets++;
            }

        }
        
    }
    }
    cout<<"Number of triplets: "<<triplets<<endl;




 
 
 
 
 
 
 
 return 0;
}