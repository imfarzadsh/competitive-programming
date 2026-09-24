/*
 * Problem Name: 122A - Lucky Division
 * Problem Link: https://codeforces.com/contest/122/problem/A
 * Platform:     Codeforces
 * Difficulty:   1000 (Easy)
 * Topics:       brute force, number theory
 * 
 * Time Complexity:  O(1) [At most ~30 lucky numbers generated for n <= 1000] {or O(2^(logn))}
 * Space Complexity: O(1) [Queue size is bounded by a small constant]
 */

#include <bits/stdc++.h>
using namespace std ;

int main() {

    // Fast I/O for competitive programing.
    // بهینه سرعت سازی ورودی و خروجی برای مسابقات برنامه نویسی.
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // Read the input number n.
    // دریافت عدد n از ورودی.
    int n;
    cin >> n;

    // Queue for BFS generation of lucky numbers (containing only digits 4 and 7).
    // صف برای تولید سطح‌به‌سطح اعداد شانس (شامل فقط ارقام ۴ و ۷) با الگوریتم BFS.
    queue<long long> q;
    q.push(4);
    q.push(7);

    while (!q.empty())
    {
        long long current = q.front();
        q.pop();

        // If current lucky number exceeds n, skip further expansion.
        // اگر عدد شانس فعلی از n بزرگتر شود، نیازی به ادامه تولید فرزندان آن نیست.
        if (current > n) continue;

        // If n is divisible by the current lucky number, it's almost lucky.
        // اگر n بر عدد شانس فعلی بخش‌پذیر باشد، یک عدد تقریباً خوش شانس است.
        if (n % current == 0)
        {
            cout << "YES" << '\n'; 
            return 0; // Terminate early upon finding a valid divisor / خروج سریع پس از پیدا کردن مقسوم‌علیه.
        }

        // Generate next lucky numbers by appending 4 and 7
        // تولید اعداد شانس بعدی با الحاق ارقام ۴ و ۷ به انتهای عدد فعلی
        q.push(current * 10 + 4);
        q.push(current * 10 + 7);
    }
    
    // If no lucky divisor divides n
    // اگر هیچ عدد شانسی n را عاد نکند (بخش‌پذیر نباشد)
    cout << "NO" << '\n';

    return 0;
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!