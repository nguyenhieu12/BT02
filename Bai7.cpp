#include <iostream>
using namespace std;
int main()
{
	int n, m;
    cin >> n;
    cout << n << " ";
    while (n>=0)
    {
        m = n;
        cin >> n;
        if (n!=m) cout << n << " ";
    }
	return 0;
}
