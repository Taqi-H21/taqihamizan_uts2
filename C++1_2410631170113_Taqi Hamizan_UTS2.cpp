#include<iostream>
using namespace std;
int main()
{
int n;

cout << " : ";
cin >> n;

for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= n; j++)
    {
        cout << (i * (j + 1) / 2) << " ";
    }
    cout << endl;
}

return 0;
}
