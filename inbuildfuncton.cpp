//use of inbulid function 
#include<iostream>
#include<cmath>

using namespace std;

int power(int a,int b){
    int p=pow(a,b);
    return p;


}
int sr(int c){
    int s= sqrt(c);
    return s;


}
int main(){
    cout<<power(4,2)<<endl;
    cout<<sr(4);



    return 0;


}