#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;

    int discounted_meal = n / 15;

    if(discounted_meal >= 1) cout << (n * 800) - discounted_meal * 200;
    else cout << n * 800;
}
