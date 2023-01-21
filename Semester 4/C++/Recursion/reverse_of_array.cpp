#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &a, int l, int r)
{
    if (l >= r)
        return;
    swap(a[l], a[r]);
    reverse(a, l + 1, r - 1);
}
int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    reverse(a, 0, a.size() - 1);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i];
    }
}
