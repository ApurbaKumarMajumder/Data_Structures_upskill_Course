#include <bits/stdc++.h>
using namespace std;

// Approach 1

// int main() {

//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         if (n % i == 0) {
//             cout << i << " ";
//         }
//     }

//     return 0;
// }

// Approach 2

// int main()
// {

//     int n;
//     cin >> n;

//     // TC :- O(sqrt(n)) SC :- O(1)

//     for (int i = 1; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             cout << i << " ";
//         }
//     }

//     return 0;
// }

// Approach 3

void primeFactors(int n)
{
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n/2;
    }
 
    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            cout << i << " ";
            n = n/i;
        }
    }
 
    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        cout << n << " ";
}
 
/* Driver code */
int main()
{
    int n;
    cin >> n;
    primeFactors(n);
    return 0;
}