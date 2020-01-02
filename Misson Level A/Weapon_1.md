# Mission Level 1 
> Author:: Mohammad Faisal

## Faisal New Year Party 2020

In New year 2020, Faisal decided to gave a threat of his girlfriend Birthday Party which is on 5 January 2020. So he invited
all his N friends into the party. when the all N friends are came. they sit on the circluar table and make a group so that everyone 
enjoy the party threat equally. But after sometime there was a tragedy in CAB rally and so many people got injured. So hear the news
on that day faisal's M friends leaves the party on that moments. Faisal wants to order food for the party by Swiggy. So help the 
Faisal to find the maximum number of groups are remains when M people are gone. 

### Constraint 
```bash
2<=N<=1000, 0<=M<=N
```
### Input Format
N M - where N is number of friends and M is the number of friends which are left the party.

## Output Format
Print a single integer — the maximum number of groups of People at the moment Faisal observes.

## Input 1
```bash
7 4
```

## Output 1
```bash
3
```
## Input 2
```bash
6 2
```

## Output 2
```bash
2
```
## Input 3
```bash
3 0
```

## Output 3
```bash
1
```
```bash
      for N=6;
                  6--1--2
                  |     |
                  5--4--3
     
     when 2 people are went.    
                  6----2
                    
                   5--4
    two groups are left so answer is 2.               
```

## Solution in C++
```C++

// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH
// AUTHOR:: MOHAMMAD FAISAL
#include<bits/stdc++.h>
#include<iostream>
#include<map>
#include<queue>
#include<algorithm>
#include<chrono>
#include<random>
#define ll long long
 
using namespace std;
//using chrono;
//mt19937 rnd(time(NULL));
int main()
{
//    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,m;
    cin >> n >> m;
    if(m==0|| m==1){
        cout<<"1"<<endl;return 0;}
    if(n==m){
        cout<<"0"<<endl;
        return 0;
    }
    
    if(m>1)
    {
        if(n%2==0)
        {
            if(m <= (n/2))
                cout<<m<<endl;
            else
                cout<<n-m<<endl;
        }
        else{
            if(m < n/2)
                cout<<m<<endl;
            else if(m==n/2 || m==(n/2)+1)
                cout<<n/2;
            else
                cout<<n-m<<endl;
        }
    }
    return 0;
}
 
```
---

