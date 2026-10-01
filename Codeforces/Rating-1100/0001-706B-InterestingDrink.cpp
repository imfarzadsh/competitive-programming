/*
 * Problem Name: 706B - Interesting drink
 * Problem Link: https://codeforces.com/contest/706/problem/B
 * Platform:     Codeforces
 * Difficulty:   1100 (Easy)
 * Topics:       binary search, dp, implementation
 * 
 * Time Complexity:  O((n + q) * logn)
 * Space Complexity: O(n)
 */

#include <bits/stdc++.h>
using namespace std ;

int main() {

    // Fast I/O for competitive programing.
    // بهینه سرعت سازی ورودی و خروجی برای مسابقات برنامه نویسی.
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // Read total number of shops selling the drink.
    // دریافت تعداد کل مغازه‌های فروشنده نوشیدنی.
    int n;
    cin >> n;

    // Read price of drink in each shop.
    // دریافت قیمت نوشیدنی در هر مغازه.
    vector<int> x(n);
    for (int i = 0; i < n; i++) cin >> x[i];

    // Sort shop prices in ascending order to enable Binary Search.
    // مرتب‌سازی قیمت مغازه‌ها به صورت صعودی جهت امکان استفاده از جستجوی دودویی.
    sort(x.begin(), x.end());
    
    // Read total number of days/queries.
    // دریافت تعداد کل روزها (پرسش‌ها).
    int q, m;
    cin >> q;

    // Process each query using upper_bound (Binary Search).
    // پردازش هر پرسش با استفاده از upper_bound (جستجوی دودویی).
    for (int i = 0; i < q; i++)
    {
        cin >> m;

        // upper_bound returns an iterator to the first element strictly greater than m.
        // تابع upper_bound ایتریتوری به اولین عنصر اکیداً بزرگتر از m برمی‌گرداند.
        auto it = upper_bound(x.begin(),x.end(), m);

        // Calculate count of shops with price <= m using iterator arithmetic.
        // محاسبه تعداد مغازه‌های با قیمت کمتر یا مساوی m با تفاضل ایتریتورها.
        int cnt = it - x.begin();
        cout << cnt << '\n';
    }
    
    return 0;
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!