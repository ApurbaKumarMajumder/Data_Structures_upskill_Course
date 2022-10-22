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

int main()
{

    // Pairs
    /*
    // initialization of pair
    pair<int, int> p = {1, 2};
    // pair<int, int> p = make_pair(1, 2);
    // pair<int, int> p (1, 2);

    // output for pair
    cout << p.first << " " << p.second << endl;

    pair<char, int> p2 = {'a', 3};
    cout << p2.first << " " << p2.second << endl;

    pair<string, int> p3 = {"hello", 10};
    pair<string, char> p5 = {"hi", 'a'};

    // pair<int, int> u = p;
    // u.first = 7;

    // cout << p.first << " " << p.second << endl;
    // cout << u.first << " " << u.second << endl;

    // with reference
    pair<int, int> &u = p;
    u.first = 7;

    cout << p.first << " " << p.second << endl;
    cout << u.first << " " << u.second << endl;

    */

    /*
    // Comparision
    pair<int, int> p = {3, 2};
    pair<int, int> u = {3, 2};

    if (p < u)
    {
        cout << "Yes" << endl;
    }

    if (p == u)
    cout << "they are equal" << endl;
    */

    // Vectors

    int a[5];      // array initialiazition
    vector<int> v; // vector initialization

    // v.push_back(2);
    // v.push_back(4);
    // v.push_back(8);

    cout << "Enter size of vector " << "\n";
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        printVec(v);
        int x;
        cin >> x;
        v.push_back(x);
    }

    printVec(v);
}