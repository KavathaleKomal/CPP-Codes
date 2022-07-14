#include <iostream>
#include <bits/stdc++.h> //strings vector
using namespace std;

string DecimalToHexadecimal(int n)
{
    string ans = "";
    int base = 1;
    int count = 0;
    while (base <= n)
    {
        base *= 16;
        count++;
    }
    base /= 16;
    // cout << count << endl;
    if (n == 0)
    {
        ans += to_string(n);
    }
    else
    {
        while (n > 0)
        {
            // cout<<n<<"\t"<<base<<"\t"<<ans<<endl;
            for (int j = 0; j <= 16; j++)
            {
                if (n < base * j)
                {
                    if (j - 1 > 9)
                    {
                        char x = 'A' + (j - 1) - 10;
                        ans += x;
                    }
                    else
                    {
                        ans += to_string(j - 1);
                    }
                    // cout<<n<<"\t"<<base<<"\t"<<ans<<endl;
                    n = n - base * (j - 1);

                    if (n == 0)
                    {
                        for (int x = 0; x < count - 1; x++)
                        {
                            ans += '0';
                        }
                    }
                    base /= 16;
                    break;
                }
            }
        }
    }
    return ans;
}

int32_t main()
{
    int n;
    cin >> n;
    cout << DecimalToHexadecimal(n) << endl;
}