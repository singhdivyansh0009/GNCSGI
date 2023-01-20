#include <iostream>
using namespace std;
void check(string s, int l, int r)
{
    if (l >= r)
    {
        cout << "TRUE";
        return;
    }
    if (s[l] != s[r])
    {
        cout << "FALSE";
        return;
    }
    else
        check(s, l + 1, r - 1);
}
int main()
{
    check("ABA", 0, 2);
}