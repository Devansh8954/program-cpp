#include<iostream>
using namespace std;

int main(){

    char c;
    int c_char=0,c_int=0,c_whitespaces=0;
    c=cin.get();
    while(c!='$'){
        if(c>='a' && c<='z'){
            c_char++;
        }   
       else if(c == ' ' || c== '\t' || c == '\n'){
    c_whitespaces++;
}
        else{
            c_int++;
        }
        c=cin.get();
    }
    cout<<c_char<<" "<<c_int<<" "<<c_whitespaces;
  
}


