//binary to decimal conversion 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int add=0;
    int power=1;

  

    while(n>0){
        int mod=n%2;
        add=add+(mod*power);
        power=power*10;
        n=n/2;




    }
    cout<<add;

}