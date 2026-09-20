/*
 * Problem Name: 231A - Team
 * Problem Link: https://codeforces.com/contest/231/problem/A
 * Platform:     Codeforces
 * Difficulty:   800 (Easy)
 * Topics:       greedy, Brute Force(*)
 * 
 * Time Complexity:  O(n)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std ;

int main() {

    // Fast I/O for competitive programing
    // بهینه سرعت سازی ورودی و خروجی برای مسابقات برنامه نویسی
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    // n: Number of problems in the contest.
    // result: Counter for the number of problems the team will solve. 
    // n: تعداد سوالات مسابفه.
    // result: شمارنده تعداد سوالاتی که تیم حل خواهد کرد.
    int n , result = 0;

    // Read the number of problems.
    // دریافت تعداد سوالات از ورودی.
    cin >> n;

    // Process each problem one by one.
    //  بررسی همه سوالات دونه به دونه.
    for (int i = 0; i < n; i++)
    {

        // a, b, c represent the views of Petya, Vasya, and Tonya respectively.
        // (1 if sure about the solution, 0 otherwise).
        // متغیرهای a, b, c به ترتیب نشان‌دهنده نظر پتیا، واسیا و تونیا هستند.
        // (1 یعنی مطمئن هستند و 0 یعنی مطمئن نیستند).
        int a, b, c;
        cin >> a >> b >> c;

        // The team will solve the problem if at least 2 of them are sure about the solution.
        // Since the values are 0 or 1, a + b + c > 1 means at least two 1s were entered.
        // تیم در صورتی سوال را حل می‌کند که حداقل ۲ نفر از آن‌ها از حل آن مطمئن باشند.
        // از آنجا که مقادیر 0 یا 1 هستند، شرط a + b + c > 1 یعنی حداقل دو تا 1 وارد شده است.
        if (a + b + c > 1) result++;
    }
    
    // Output the total count of solved problems
    // چاپ تعداد کل سوالات قابل حل
    cout << result;

    return 0;
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up !