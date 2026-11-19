/*
 * Problem Name: 1636 - Coin Combinations II
 * Problem Link: https://cses.fi/problemset/task/1636
 * Platform:     CSES
 * Difficulty:   Easy
 * Topics:       Dynamic Programming, Combinatorics
 * 
 * Time Complexity:  O(n * x)
 * Space Complexity: O(x)
 */

#include <bits/stdc++.h>
using namespace std;

// Modulo constant required by the problem statement (10^9 + 7)
// ثابت پیمانه (باقی‌مانده) مورد نیاز طبق صورت مسئله
const int MOD = 1e9 + 7;

// dp[j] stores the number of unordered ways (combinations) to form sum j; coins stores available denominations
// آرایه dp[j] تعداد راه‌های بدون ترتیب (ترکیب‌ها) برای ساخت مجموع j را نگه می‌دارد و coins ارزش سکه‌های موجود است
int dp[1000007], coins[105];

int main() {
    
    // Fast I/O for competitive programming
    // بهینه سرعت سازی ورودی و خروجی برای مسابقات برنامه نویسی
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // n: number of coin denominations, x: target sum
    // متغیر n تعداد انواع سکه و x مبلغ هدف است
    int n, x;
    cin >> n >> x;

    // Read the value of each available coin
    // خواندن ارزش هر یک از سکه‌های موجود
    for (int i = 0; i < n; i++) cin >> coins[i];

    // Base case: there is 1 way to form sum 0 (using no coins)
    // حالت پایه: دقیقاً ۱ راه برای ساخت مجموع صفر وجود دارد (بدون استفاده از هیچ سکه‌ای)
    dp[0] = 1;

    // Outer loop iterates over coin denominations so each coin is processed in a fixed order,
    // preventing duplicate permutations (e.g., 2+3 is counted once, 3+2 is never generated)
    // حلقه بیرونی روی انواع سکه می‌چرخد تا سکه‌ها با یک ترتیب ثابت پردازش شوند و جایگشت‌های تکراری ساخته نشوند
    for (int i = 0; i < n; i++)
    {
        // Inner loop iterates forward over sums (from 1 to x) allowing unlimited use of the current coin
        // حلقه درونی به صورت رو به جلو روی مبالغ (از ۱ تا x) می‌چرخد تا امکان استفاده نامحدود از سکه فعلی فراهم شود
        for (int j = 1; j <= x; j++)
        {
            // Ensure current sum j is at least the value of coin i
            // اطمینان از اینکه مبلغ فعلی j بزرگ‌تر یا مساوی ارزش سکه i است
            if (j >= coins[i]) dp[j] = (dp[j] + dp[j - coins[i]]) % MOD;
        }
    }
    
    // Print the total number of unordered ways to form sum x modulo 10^9 + 7
    // چاپ تعداد کل راه‌های بدون ترتیب برای ساخت مبلغ x به پیمانه 10^9 + 7
    cout << dp[x] << '\n';
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!