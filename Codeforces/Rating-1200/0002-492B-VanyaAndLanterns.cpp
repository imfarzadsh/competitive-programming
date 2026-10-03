/*
 * Problem Name: 492B - Vanya and Lanterns
 * Problem Link: https://codeforces.com/contest/492/problem/B
 * Platform:     Codeforces
 * Difficulty:   1200 (Easy)
 * Topics:       binary search, implementation, math, sortings
 * 
 * Time Complexity:  O(n log n)
 * Space Complexity: O(n)
 */

#include <bits/stdc++.h>
using namespace std ;

int main() {

    // Fast I/O for competitive programing.
    // بهینه سرعت سازی ورودی و خروجی برای مسابقات برنامه نویسی.
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // Read number of lanterns (n) and length of the street (l).
    // دریافت تعداد فانوس‌ها (n) و طول خیابان (l).
    int n, l;
    cin >> n >> l;

    // Read initial positions of the lanterns.
    // دریافت موقعیت اولیه هر یک از فانوس‌ها.
    vector<double> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    // Sort lantern positions to evaluate consecutive distances.
    // مرتب‌سازی موقعیت فانوس‌ها جهت بررسی فواصل متوالی.
    sort(a.begin(), a.end());

    // Cover boundary edges: distance from 0 to first lantern and last lantern to l.
    // پوشش نقاط مرزی: فاصله نقطه ۰ تا اولین فانوس و آخرین فانوس تا انتها (l).
    double min_val = max(a[0] , l - a[n - 1]);
    
    // Check maximum required radius between all consecutive lanterns.
    // محاسبه حداکثر شعاع مورد نیاز بین هر دو فانوس متوالی.
    for (int i = 0; i < n - 1; i++)
    {
        min_val = max(min_val, (a[i + 1] - a[i]) / 2.0);
    }
    
    // Print the answer with high floating-point precision.
    // چاپ پاسخ نهایی با دقت اعشار بالا.
    cout << fixed << setprecision(10) << min_val << '\n';
    
    return 0;
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!