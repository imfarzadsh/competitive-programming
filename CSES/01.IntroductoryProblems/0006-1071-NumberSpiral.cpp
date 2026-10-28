/*
 * Problem Name: 1071 - Number Spiral
 * Problem Link: https://cses.fi/problemset/task/1071
 * Platform:     CSES
 * Difficulty:   Easy
 * Topics:       Math, Implementation
 * 
 * Time Complexity:  O(t) (where t is the number of test cases)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

void solve(){

    // y represents the row, x represents the column
    // متغیر y نشان‌دهنده سطر و x نشان‌دهنده ستون است
    long long x, y;
    cin >> y >> x;

    // Find the maximum of y and x to determine the current spiral layer size
    // پیدا کردن ماکزیمم بین y و x برای تعیین اندازه لایه مارپیچ فعلی
    int max_num = max(y, x);

    // Calculate the diagonal value for the max_num layer: max_num^2 - max_num + 1
    // محاسبه مقدار روی قطر اصلی برای لایه max_num: رابطه max_num^2 - max_num + 1
    long long z = 1LL * max_num * max_num - max_num + 1;

    // If max_num is even, apply the corresponding offset based on row and column differences
    // اگر max_num زوج باشد، افست متناظر را بر اساس اختلاف سطر و ستون اعمال کن
    if (max_num %2 == 0) cout << z + y - x << '\n';

    // If max_num is odd, apply the opposite offset
    // اگر max_num فرد باشد، افست معکوس را اعمال کن
    else cout << z - y + x << '\n';
}

int main() {
    
    // Fast I/O for competitive programming
    // بهینه سرعت سازی ورودی و خروجی برای مسابقات برنامه نویسی
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // t represents the number of test cases
    // متغیر t تعداد تست‌کیس‌ها را نشان می‌دهد
    int t;
    cin >> t;

    // Process each test case
    // پردازش هر تست‌کیس
    while (t--)
    {
        solve();
    }
 
    return 0;
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up !