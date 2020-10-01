#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int num;
    int val;
    int result;
    cout<<"enter the number whose multiplication table you want :"<<endl;
    cin>>num;
    cout<<endl;
    

    for(val=1;val<=10;val++){
        result = val*num;
        cout<<num<<" x "<<setw(4)<<val<<" = "<<setw(4)<<result<<endl;
        
    }
    return 0;
}
