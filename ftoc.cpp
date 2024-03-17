#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
float C;
float F=0;
while(F<=n){
    C=(F-32)*5/9;
    F=F+1;
cout<<"the value of F:"<<F<<endl<<"After conversion the value in celcius:"<<C<<endl;

}


    return 0;
}