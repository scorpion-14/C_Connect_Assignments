#include<iostream>
using namespace std;
int count_occurrences(int);

int main()
{
    int n;
    cout<<"Enter Number :";
    cin>>n;

    int ans = count_occurrences(n);
    cout<<"Total Occurrence of Digits are :"<<ans;

}

int count_occurrences(int x)
{
    int count=0;
    while(x!=0)
    {
        x = x/10;
        ++count;
    }
    return (count);
    
}