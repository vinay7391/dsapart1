#include<iostream>
using namespace std;
int main(){
int n ;
cin>>n;
int i =1;
while (i<=n){
    int space =  i - 1;
    while(space){
        cout<<" ";
        space = space+1;

    }
    int j =1;
    while(j<=i){
        int star = j;
    while(star){

        cout<<"*";
        star = star -1;
    }
        j = j +1;
        }
        cout<<endl;
        i=i+1;


}
return 0;
}