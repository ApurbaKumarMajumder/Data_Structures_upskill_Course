#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> a)
{
    cout << "Size: " << a.size() << endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {

    vector<int> v{1, 2, 3, 4, 5, 6};
    printVec(v);

    vector<int> :: iterator it = v.begin();

    cout << (*it) << endl;
    cout << (*(it+1)) << endl;

    for (it = v.begin(); it != v.end(); it++) {
        cout << *it << endl;
    }
}