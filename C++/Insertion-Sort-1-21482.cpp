#include"iostream"
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int ar[n];
    int first=0;
    int j;
    if(n>0 && n<25)
    {
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        for(i=0;i<n;i++)
        {
           first=ar[i]; 
            j=i-1;
            while(first<ar[j] && j>=0)
            {
                ar[j+1]=ar[j];
                --j;
            }
            ar[j+1]=first;
        }
        for(i=0;i<n;i++)
        {
            cout<<ar[i]<<" ";
        }
    }
        // visualize `myGraphJson`!
    string myGraphJson = "{\"kind\":{\"graph\":true},"
        "\"nodes\":[{\"id\":\"1\"},{\"id\":\"2\"}],"
        "\"edges\":[{\"from\":\"1\",\"to\":\"2\"}]}";
    cout << myGraphJson;
}