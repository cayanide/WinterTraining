#include<iostream>
using namespace std;

int main(){
    int arr[3],brr[3],i=0,ScoreA=0,ScoreB=0;

    for(i = 0; i < 3; i++){
        cin >> arr[i];
    }
    for(i = 0; i < 3; i++){
        cin >> brr[i];
    }
    i=0;
while(i<3){

    if(arr[i]<brr[i]){
        ScoreB++;
    
}
else if(arr[i]>brr[i]){
        ScoreA++;
}
else if (arr[i]==brr[i]){

}
i++;
}

cout<<ScoreA<<" "<<ScoreB<<endl;
}