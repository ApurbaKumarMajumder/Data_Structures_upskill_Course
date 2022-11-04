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

int main()
{

    int n;
    cin >> n;

    // TC :- O(sqrt(n)) SC :- O(1)

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}