/*
 * Problem Name: 1635 - Coin Combinations I
 * Problem Link: https://cses.fi/problemset/task/1635
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

// dp[i] stores the number of ordered ways to form sum i; coins stores available denominations
// آرایه dp[i] تعداد راه‌های با ترتیب برای ساخت مجموع i را نگه می‌دارد و coins ارزش سکه‌های موجود است
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

    // Outer loop iterates over sums (1 to x) so different permutations of the same coins are counted separately
    // حلقه بیرونی روی مبالغ (۱ تا x) می‌چرخد تا جایگشت‌های مختلف از سکه‌های یکسان جداگانه شمرده شوند
    for (int i = 1; i <= x; i++)
    {
        // Try appending every available coin denomination to reach sum i
        // امتحان کردن اضافه کردن هر یک از سکه‌های موجود به انتهای دنباله برای رسیدن به مبلغ i
        for (int j = 0; j < n; j++)
        {
            // Ensure current sum i is at least the value of coin j
            // اطمینان از اینکه مبلغ فعلی i بزرگ‌تر یا مساوی ارزش سکه j است
            if (i >= coins[j]) dp[i] = (dp[i] + dp[i - coins[j]]) % MOD;
        }
    }
    
    // Print the total number of ordered ways to form sum x modulo 10^9 + 7
    // چاپ تعداد کل راه‌های ساخت مبلغ x به پیمانه 10^9 + 7
    cout << dp[x] << '\n';
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!