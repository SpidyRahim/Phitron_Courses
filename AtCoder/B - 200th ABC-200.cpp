#include <iostream>
using namespace std;
int main()
{
    long long int n, k;
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        if (n % 200 == 0)
        {
            n = n / 200;
        }
        else
        {
            n = 1000 * n + 200;
        }
    }
    cout << n << endl;
}
/* #include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    int k;
    cin >> n >> k;
    for(int i=0;i<k;i++){
        if(n%200==0){
            n/=200;
        }
        else{
            n=1000*n+200;
        }
    }
    cout << n << endl;
} */