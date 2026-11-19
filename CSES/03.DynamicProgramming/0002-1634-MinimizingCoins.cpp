/*
 * Problem Name: 1634 - Minimizing Coins
 * Problem Link: https://cses.fi/problemset/task/1634
 * Platform:     CSES
 * Difficulty:   Easy
 * Topics:       Dynamic Programming, Greedy (Counter-example)
 * 
 * Time Complexity:  O(n * x)
 * Space Complexity: O(x)
 */

#include <bits/stdc++.h>
using namespace std;

// Infinity constant representing an unreachable sum (strictly greater than max possible coins 10^6)
// ثابت بی‌نهایت برای نشان دادن مجموع غیرقابل دسترس (بزرگ‌تر از حداکثر تعداد سکه ممکن یعنی 10^6)
const int INF = 1e7;

// dp[i] stores the minimum number of coins needed to form sum i; coins stores available denominations
// آرایه dp[i] حداقل تعداد سکه لازم برای ساخت مجموع i را نگه می‌دارد و coins ارزش سکه‌های موجود است
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
    
    // Initialize the DP array with INF up to target x
    // مقداردهی اولیه آرایه برنامه‌نویسی پویا با مقدار بی‌نهایت (INF) تا خانه x
    fill(dp, dp + x + 1, INF);

    // Read the value of each available coin
    // خواندن ارزش هر یک از سکه‌های موجود
    for (int i = 0; i < n; i++) cin >> coins[i];

    // Base case: 0 coins are needed to make a sum of 0
    // حالت پایه: برای ساخت مجموع صفر به ۰ سکه نیاز است
    dp[0] = 0;

    // Compute minimum coins bottom-up for every sum i from 1 to x
    // محاسبه حداقل تعداد سکه به روش پایین‌به‌بالا (Bottom-Up) برای هر مبلغ i از 1 تا x
    for (int i = 1; i <= x; i++)
    {

        // Try using each coin denomination as the last coin added to reach sum i
        // امتحان کردن هر نوع سکه به عنوان آخرین سکه اضافه شده برای رسیدن به مبلغ i
        for (int j = 0; j < n; j++)
        {
            // Ensure subtracting the coin value stays within valid non-negative bounds
            // اطمینان از اینکه با کم کردن ارزش سکه از مبلغ فعلی، اندیس منفی نمی‌شود
            if (i - coins[j] >= 0) dp[i] = min(dp[i], dp[i - coins[j]] + 1);
        }
    }

    // If dp[x] remains INF, the target sum cannot be formed with the given coins
    // اگر مقدار dp[x] همچنان برابر INF باشد، ساخت مبلغ هدف با سکه‌های داده‌شده غیرممکن است
    if (dp[x] == INF) cout << "-1\n";
    else cout << dp[x] << '\n';
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!