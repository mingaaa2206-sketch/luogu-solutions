#include<iostream>


using namespace std;
int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    int ans=N;
    for(int i=0;i<N-1;i++)
    {
        for(int j=0;j<N-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<N;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            if(arr[i]==0)
                continue;
            if(arr[i]==arr[j])
            {
                arr[i]=0;
                ans--;
            }
        }
    }
    cout<<ans<<endl;
     for(int i=0;i<N;i++)
     {
        if(arr[i]!=0)
        cout<<arr[i]<<" ";
     }
    return 0;
}
