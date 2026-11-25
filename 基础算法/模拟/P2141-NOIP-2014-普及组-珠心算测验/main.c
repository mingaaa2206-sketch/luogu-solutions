#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[10005];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n&&j!=i;j++)
        {
            for(int k=0;k<n&&k!=j&&k!=i;k++)
            {
                if(arr[i]==arr[j]+arr[k])
                    ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}
