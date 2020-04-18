// BEGINNIGN WITH THE NAME OF ALMIGHTY GOD ALLAH
// AUTHOR:: MOHAMMAD FAISAL
// Replace all 0's with 5.
/*
 Algorithm:
 1.Create a variable sum = 0 to store the sum, place = 1 to store the place value of current digit and create a copy of input variable
 2.If the number is zero return 5
 3. Iterate the next step while the input variable is greater than 0
 4. Extract the last digit (n%10) and if the digit is zero, then update sum = sum + place*5, remove the last digit from the numbern = n/10
 and update place = place * 10
 5. Return the sum.
 */
#include<bits/stdc++.h>
using namespace std;

int helper(int num)
{
    int ans = 0;
    int decimalplace = 1;
    
    if(num==0)
        ans+=(5*decimalplace);
    
    while(num >0)
    {
        if(num%10==0){
            ans+=(5*decimalplace);
        }
        decimalplace*=10;
        num/=10;
    }
    return ans;
}
int iterative(int num)
{
    return num+=helper(num);
}

int solve(int number){
    
    // base case
    if(number==0)
        return 0;
    
    int digit = number%10;
    if(digit==0){
        digit = 5;
    }
    
    return solve(number/10)*10+digit;
}
int recursive(int number){
    if(number==0)
        return 5;
    else
        return solve(number);
}
int main()
{
    int n;
    cin >> n;
    
    
    // iterative way
    int method1 = iterative(n);
    cout<<method1<<endl;
    
    // Recursive Way
    int method2 = recursive(n);
    cout<<method2<<endl;
    return 0;
}
