#include <iostream>
#include <string>
#include <deque>
#include <queue>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
long long out_cnt = 1;
void two2ten(vector<int> num, string str)
{
    if (num.empty())
    {
        if (out_cnt <= 10)
            cout << out_cnt << ':' << str << endl;
        out_cnt++;
        return;
    }
    for (auto ptr = num.begin(); ptr < num.end(); ptr++)
    {
        if (out_cnt > 10)
            break;
        int a = *ptr;
        vector<int> new_num = num;
        new_num.erase(find(new_num.begin(), new_num.end(), a));
        two2ten(new_num, str + to_string(a) + ' ');
    }
}
long long jiecheng(int n)
{
    long long res = 1;
    for (int i = 1; i <= n; i++)
    {
        res *= i;
    }
    return res;
}
int main()
{
    vector<int> num;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        num.push_back(i);
    }
    string empty;
    two2ten(num, empty);
    cout << jiecheng(n);
}
