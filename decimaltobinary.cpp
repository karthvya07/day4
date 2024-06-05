//convert decimal to binary no 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int add=0;
    int power=1;

    while(n>0){
        int b=n%10;
        add=add+(b*power);
        power*=2;
        n=n/10;


    }
    cout<<add;

}