// BEGINNIGN WITH THE NAME OF ALMIGHTY GOD ALLAH
// AUTHOR:: MOHAMMAD FAISAL
#include<bits/stdc++.h>
using namespace std;
int first_occ(vector<int> arr,int x, int low , int high)
{
    if(high >= low)
    {
        int mid = low + (high-low)/2;
        
        if((mid==0 || x > arr[mid-1]) && arr[mid]==x)
            return mid;
        else if(arr[mid] < x)
        {
            return first_occ(arr, x,mid+1, high);
        }
        else{
            return first_occ(arr,x,low,mid-1);
        }
    }
    return -1;
}
int last_occ(vector<int> arr, int x, int low, int high)
{
    if(high>=low){
        int mid = low + (high-low)/2;
        
        if(((mid==(int)arr.size()-1) || arr[mid+1] > x) && x==arr[mid])
            return mid;
        else if(arr[mid]>x){
            return last_occ(arr, x, low, mid-1);
        }
        else{
            return last_occ(arr,x,mid+1,high);
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int target;
    cin >> target;
    
    int fst = first_occ(v,target,0,n-1);
    int lst = last_occ(v,target,0,n-1);
    
    cout<< fst<<" "<<lst<<endl;
    
    if(fst==-1 || lst==-1)
    {
        cout<<"Occurence not found.....";
        exit(0);
    }
    
    cout<<"First Occurence of: "<<v[fst]<<" at index: "<<fst+1<<endl;
    cout<<"last Occurence of: "<<v[lst]<<" at index: "<<lst+1<<endl;
    return 0;
}
