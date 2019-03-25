struct student{
    int no, a, b, sum, level;
    bool operator<(const student& l)const
    {
        if (level != l.level)
            return level > l.level;
        else if (sum != l.sum)
            return sum < l.sum;
        else if (a != l.a)
            return l.a>a;
        else
            return no > l.no;
    }
};
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n, l, h, cnt = 0, no, a, b, sum;
    vector<student>  vs;
    cin >> n >> l >> h;
    for (int i = 0; i != n;i++)
    {
        cin >> no >> a >> b;
        sum = a + b;
        if (a < l || b < l)
        {
            cnt++;//不符合的人数
            continue;
        }
        else if (a >= h&&b >= h)
        {
            vs.push_back({ no,a,b,sum,1 });
        }
        else if (a >= h)
        {
            vs.push_back({ no,a,b,sum,2 });
        }
        else if (a >= b)
        {
            vs.push_back({ no,a,b,sum,3 });
        }
        else {
            vs.push_back({ no,a,b,sum,4 });
        }
    }
    sort(vs.begin(), vs.end());
    cout << n - cnt << endl;
    for (auto it = vs.rbegin(); it != vs.rend(); it++)
        cout << it->no << " " << it->a << " " << it->b << endl;
    return 0;
}
