/*
 * Problem Name: 1472B - Fair Division
 * Problem Link: https://codeforces.com/contest/1472/problem/B
 * Platform:     Codeforces
 * Difficulty:   800 (Easy)
 * Topics:       dp, greedy, math
 * 
 * Time Complexity:  O(n)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std ;

void solve() {
    int n;
    cin >> n;

    // Track total sum and counts of 1-gram and 2-gram candies.
    // محاسبه مجموع کل و شمارش تعداد شکلات‌های ۱ گرمی و ۲ گرمی.
    int count_1 = 0, count_2 = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        sum += temp;
        if (temp == 1) count_1++;
        else count_2++;
    }

    // Case 1: Total sum is odd -> Impossible to divide equally.
    // حالت اول: مجموع کل فرد است -> امکان تقسیم مساوی وجود ندارد.
    if (sum % 2 != 0) {
        cout << "NO\n";
    }

    // Case 2: Only 2-gram candies exist and their count is odd -> Cannot split evenly.
    // حالت دوم: فقط شکلات ۲ گرمی داریم و تعدادشان فرد است -> امکان تقسیم مساوی وجود ندارد.
    else if (count_1 == 0 && count_2 % 2 != 0) {
        cout << "NO\n";
    } 
    // Case 3: Sum is even and we can balance the weights -> Always possible.
    // حالت سوم: مجموع زوج است و امکان متعادل‌سازی وجود دارد -> همواره ممکن است.
    else {
        cout << "YES\n";
    }
}

int main() {

    // Fast I/O for competitive programing.
    // بهینه سرعت سازی ورودی و خروجی برای مسابقات برنامه نویسی.
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    // Process all test cases.
    // پردازش تمام تست‌کیس‌ها.
    while (t--)
    {
        solve();
    }
    
    
    return 0;
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!