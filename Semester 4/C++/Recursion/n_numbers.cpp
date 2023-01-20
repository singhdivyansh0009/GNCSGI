#include <iostream>
using namespace std;
int n_num(int n)
{
    if (n == 0)
        return 0;
    else
    {
        n_num(n - 1);
        cout << n << " ";
    }
}
int main()
{
    n_num(10);
}