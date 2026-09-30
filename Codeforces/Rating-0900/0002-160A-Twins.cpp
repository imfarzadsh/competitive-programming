/*
 * Problem Name: 160A - Twins
 * Problem Link: https://codeforces.com/contest/160/problem/A
 * Platform:     Codeforces
 * Difficulty:   900 (Easy)
 * Topics:       greedy, sorting
 * 
 * Time Complexity:  O(nlogn)
 * Space Complexity: O(n)
 */

#include <bits/stdc++.h>
using namespace std ;

int main() {

    // Fast I/O for competitive programing.
    // بهینه سرعت سازی ورودی و خروجی برای مسابقات برنامه نویسی.
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // Read total number of coins.
    // دریافت تعداد کل سکه‌ها.
    int n, sum = 0;
    cin >> n;

    // Read coin values and calculate total sum.
    // دریافت ارزش سکه‌ها و محاسبه مجموع کل آن‌ها.
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    
    // Half of the total coin values (strictly more than half is needed).
    // نصف ارزش کل سکه‌ها (نیاز به سهمی اکیداً بیشتر از نصف داریم).
    int half = sum/2;

    // Sort coins in descending order for Greedy approach (take largest coins first).
    // مرتب‌سازی سکه‌ها به صورت نزولی برای الگوریتم حریصانه (برداشتن بزرگ‌ترین سکه‌ها در ابتدا).
    sort(a.rbegin(), a.rend());
    
    // Accumulate largest coins until total exceeds half of the sum.
    // جمع‌آوری بزرگ‌ترین سکه‌ها تا زمانی که مجموع آن‌ها از نصف کل بیشتر شود.
    int total_first_person = 0, count = 0;
    for (int i : a)
    {
        count++;
        total_first_person += i;
        if (total_first_person > half)
        {
            cout << count;
            break;
        }
    }
    

    return 0;
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!