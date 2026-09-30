/*
 * Problem Name: 996A - Hit the Lottery
 * Problem Link: https://codeforces.com/contest/996/problem/A
 * Platform:     Codeforces
 * Difficulty:   800 (Easy)
 * Topics:       greedy, dp
 * 
 * Time Complexity:  O(1)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std ;

int main() {

    // Fast I/O for competitive programing.
    // بهینه سرعت سازی ورودی و خروجی برای مسابقات برنامه نویسی.
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // Read total money amount.
    // دریافت مبلغ کل.
    int n, ans = 0;
    cin >> n;
    
    // Bill denominations in descending order for Greedy approach.
    // ارزش اسکناس‌ها به ترتیب نزولی برای الگوریتم حریصانه (Greedy).
    int base_dollars[5] = {100, 20, 10, 5, 1};

    // Calculate maximum bills of each denomination and update remaining money.
    // محاسبه حداکثر تعداد اسکناس از هر ارزش و به‌روزرسانی مبلغ باقی‌مانده.
    for (int i = 0; i < 5; i++)
    {
        ans += (n / base_dollars[i]);
        n %= base_dollars[i];
    }

    // Output total minimum number of bills needed.
    // چاپ حداقل تعداد کل اسکناس‌های مورد نیاز.
    cout << ans << '\n';

    return 0;
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!