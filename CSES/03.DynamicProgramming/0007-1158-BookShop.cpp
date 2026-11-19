/*
 * Problem Name: 1158 - Book Shop
 * Problem Link: https://cses.fi/problemset/task/1158
 * Platform:     CSES
 * Difficulty:   Easy
 * Topics:       Dynamic Programming, 0/1 Knapsack
 * 
 * Time Complexity:  O(n * x)
 * Space Complexity: O(x)
 */

#include <bits/stdc++.h>
using namespace std;

// dp[j] stores the maximum pages obtainable with budget j; h stores book prices, s stores page counts
// آرایه dp[j] حداکثر تعداد صفحات قابل خرید با بودجه j را نگه می‌دارد؛ h قیمت کتاب‌ها و s تعداد صفحات آن‌هاست
int dp[100005], h[1005], s[1005];

int main() {
    
    // Fast I/O for competitive programming
    // بهینه سرعت سازی ورودی و خروجی برای مسابقات برنامه نویسی
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // n: number of books, x: maximum total price (budget)
    // متغیر n تعداد کتاب‌ها و x حداکثر بودجه مجاز است
    int n, x;
    cin >> n >> x;

    // Read the price of each book
    // خواندن قیمت هر کتاب
    for (int i = 0; i < n; i++) cin >> h[i];

    // Read the number of pages of each book
    // خواندن تعداد صفحات هر کتاب
    for (int i = 0; i < n; i++) cin >> s[i];

    // Iterate over each book one by one (0/1 Knapsack items)
    // پیمایش تک‌تک کتاب‌ها (آیتم‌های کوله‌پشتی 0/1)
    for (int i = 0; i < n; i++)
    {

        // Iterate backward from budget x down to h[i] so each book is used at most once
        // پیمایش معکوس از بودجه x تا قیمت کتاب h[i] تا هر کتاب حداکثر یک‌بار انتخاب شود
        for (int j = x; j >= h[i]; j--)
        {
            // Choose the maximum between skipping book i or buying it with remaining budget (j - h[i])
            // انتخاب بیشترین مقدار بین نخریدن کتاب i یا خریدن آن با بودجه باقی‌مانده (j - h[i])
            dp[j] = max(dp[j], dp[j - h[i]] + s[i]);
        }
    }

    // Print the maximum number of pages achievable within budget x
    // چاپ حداکثر تعداد صفحاتی که با بودجه x می‌توان به دست آورد 
    cout << dp[x] << '\n';
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!