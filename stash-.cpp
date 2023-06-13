<<<<<<< Updated upstream
#include <iostream>qwer
=======
#include <iostream>
>>>>>>> Stashed changes

using namespace std;

// 辗转相除法求最大公因数
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

// 计算最小公倍数
int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int main()
{
    int a, b;
    cout << "请输入两个正整数：";
    cin >> a >> b;
    cout << "最大公因数为：" << gcd(a, b) << endl;
    cout << "最小公倍数为：" << lcm(a, b) << endl;
    return 0;
}
