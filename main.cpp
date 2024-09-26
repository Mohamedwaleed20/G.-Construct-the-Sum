#include <iostream>
#include<cmath>

using namespace std;


int main()
{
    long long num;
    cin >> num ;
    while(num--)
    {
        long long n, s ;
        cin >> n >> s ;
        if(n*(n + 1) / 2 < s)
        {
            cout << "-1" << endl ;
        }
        else
        {
            long long sum = 0 ;
            for(long long i = n ; i >= 1 ; i--)
            {
                if(sum + i <= s&& i!= s)
                {
                    sum = sum + i ;
                    cout << i << " ";
                }
                if(sum == s)
                {
                    break;
                }
            }
            cout << "\n";
        }
    }


    return 0;
}
