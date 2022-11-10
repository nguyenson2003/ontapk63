#include <iostream>

using namespace std;

int main()
{
    int t, n;
    unsigned long long k;
    cin >> t;
    for (int o = 0; o < t; o++)
    {
        cin >> n;
        cin >> k;
        if (k > n * n)
        {
            cout << 2 * n- 1 << endl; //2*n-1
            continue;
        }
        else
        {
            if (n * (n + 1) / 2 >= k)
            {
                int l = 1, r = n, mid;
                while (l < r)
                {
                    mid = (l + r) / 2;
                    if ((long long)mid * (mid + 1) / 2 < k)
                        l = mid+1;
                    else
                        r = mid;
                }
                cout << r << endl;
                continue;
            }
            else
            {
                unsigned long long h = n * (n - 1) / 2 ;
                int l = 1, r = n - 1, mid;
                k -= n * (n + 1) / 2;
                while (l < r)
                {
                    mid = (l + r) / 2;
                    if (h  - (long long)mid * (mid + 1) / 2 <= k)
                        r = mid;
                    else
                        l = mid+1;
                }
                cout << r + n << endl;
            }
        }
    }
}