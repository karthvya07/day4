// functon to writeprogramm of prime no bet two no
#include<iostream>
using namespace std;

int primeno(int a){
    for(int i=2;i<=(a-1);i++){  ///hre to minimize optimization we canse i*i<=a

        if(a %i==0){
            return false;

        }
        
    }
     return true;
}
int main(){
   int a=2;
   int b=10;
   for(int i=a;i<=b;i++){
    if(primeno(i)){
        cout<<i;

    }
   }
return 0;
}