#include<iostream>
using namespace std;

int main(){
    int a =4;
    int b=6;
    cout<<"a :"<<a<<endl;
    cout<<"b :"<<b<<endl;
    cout<<"a&b :"<<(a&b)<<endl;
    cout<<"a|b :"<<(a|b)<<endl;
    cout<<"a^b :"<<(a^b)<<endl;
    cout<<"~a  :"<<(~a) <<endl;

    cout<<(16>>1)<<endl;
    cout<<(16>>2)<<endl;
    cout<<(16<<2)<<endl;

    int i=4,n,c,sum=0;
    cout<<"i:  "<<i<<endl;
    cout<<"i++: "<<i++<<endl;
    cout<<"i:  "<<i<<endl;
    cout<<"++i: "<<++i<<endl;
    cout<<"i:  "<<i<<endl;
    cout<<"--i: "<<--i<<endl;
    cout<<"i:  "<<i<<endl;
    cout<<"i--: "<<i--<<endl;
    cout<<"Enter A Number : "<<endl;
    cin>>n;
    i=1;
    for(;;){
        if(i<=n){
            cout<<i<<endl;
            i++;
            
        }
        else {
            break;
        }
    }


    for( a=0,b=1,c=4;a>=0&& b>=1|c>=0;a--,b--,c--){
        cout<<a<<" "<<b<<" "<<c<<endl;
    }

    for(i=1;i<=n;i++){
        sum+=i;
    }
    cout<<"Sum :"<<sum<<endl;

    return 0;

}