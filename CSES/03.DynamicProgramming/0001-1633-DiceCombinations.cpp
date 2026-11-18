/*
 * Problem Name: 1633 - Dice Combinations
 * Problem Link: https://cses.fi/problemset/task/1633
 * Platform:     CSES
 * Difficulty:   Easy
 * Topics:       Dynamic Programming, Combinatorics
 * 
 * Time Complexity:  O(n)
 * Space Complexity: O(n)
 */

#include <bits/stdc++.h>
using namespace std;

// Modulo constant required by the problem statement (10^9 + 7)
// ثابت پیمانه (باقی‌مانده) مورد نیاز طبق صورت مسئله
const long long mod = 1e9 + 7;

// Global DP array initialized to 0; dp[i] stores the number of ways to achieve sum i
// آرایه سراسری برنامه‌نویسی پویا که با صفر مقداردهی شده؛ dp[i] تعداد راه‌های رسیدن به مجموع i را نگه می‌دارد
int dp[1000007];

int main() {
    
    // Fast I/O for competitive programming
    // بهینه سرعت سازی ورودی و خروجی برای مسابقات برنامه نویسی
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // n represents the target sum we want to construct by rolling a die
    // متغیر n مجموع هدفی است که می‌خواهیم با پرتاب تاس به آن برسیم
    long long n;
    cin >> n;

    // Base case: there is 1 way to achieve a sum of 0 (rolling nothing)
    // حالت پایه: دقیقاً ۱ راه برای رسیدن به مجموع صفر وجود دارد (بدون هیچ پرتابی)
    dp[0] = 1;

    // Compute the number of combinations bottom-up for every sum i from 1 to n
    // محاسبه تعداد ترکیب‌ها به روش پایین‌به‌بالا (Bottom-Up) برای هر مجموع i از 1 تا n
    for (int i = 1; i <= n; i++)
    {

        // Try all possible outcomes of the last die roll (1 through 6)
        // بررسی تمام حالت‌های ممکن برای آخرین پرتاب تاس (اعداد ۱ تا ۶)
        for (int j = 1; j <= 6; j++)
        {

            // If the current sum i is at least j, add the ways to form (i - j)
            // اگر مجموع فعلی i بزرگ‌تر یا مساوی j باشد، تعداد راه‌های ساخت (i - j) را اضافه کن
            if (i >= j)
            {
                dp[i] = (dp[i] + dp[i - j]) % mod; 
            }
        }
    }
    
    // Print the total number of ways to form sum n modulo 10^9 + 7
    // چاپ تعداد کل راه‌های رسیدن به مجموع n به پیمانه 10^9 + 7
    cout << dp[n] << '\n';
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!