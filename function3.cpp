//function for eigibility of the person 
#include<iostream>
using namespace std;
void age(int x){
    if(x>=18){
        cout<<"eligible";

    }
    else{
        cout<<"not eligible";

    }
   cout<<x;


}

int main(){
  
  age(19);
  age(17);



}