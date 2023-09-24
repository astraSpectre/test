#include<iostream>
using namespace std;
int main()
{
    int rem, num;
    int rev = 0;
    cout<<"enter the number: ";
    cin>>num;
    while (num>0){
        rem = num % 2;
        num = num / 2;
        rev = rev * 10 + rem;
    }
    cout<<rev;
    return 0;
}