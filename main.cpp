#include <iostream>

using namespace std;

int main()
{
    int n,m,k;
    cin >> n >> m >> k;
    if ((k%n==0 || k%m==0) && (k<m*n))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
