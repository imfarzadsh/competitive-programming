/*
 * Problem Name: 1722D - Line
 * Problem Link: https://codeforces.com/contest/1722/problem/D
 * Platform:     Codeforces
 * Difficulty:   1100 (Easy)
 * Topics:       greedy, sortings
 * 
 * Time Complexity:  O(n log n)
 * Space Complexity: O(n)
 */

#include <bits/stdc++.h>
using namespace std ;

void solve()
{

    long long n;
    string s;
    cin >> n >> s;

    // Track total initial score and store potential gains (deltas) from flipping each direction.
    // ثبت امتیاز اولیه کل و ذخیره سودهای ممکن (delta) حاصل از تغییر جهت هر شخص.
    long long current = 0;
    vector<long long> delta(n, 0);

    // Calculate initial total value and max possible improvement for each position.
    // محاسبه ارزش اولیه کل و حداکثر بهبود ممکن برای هر موقعیت.
    for (int i = 0; i < n; i++) {
        long long left_val = i;
        long long right_val = n - 1 - i;

        if (s[i] == 'L') {
            current += left_val;
            delta[i] = max(0LL, right_val - left_val);
        } else {
            current += right_val;
            delta[i] = max(0LL, left_val - right_val);
        }
    }

    // Sort deltas in descending order to greedily pick largest gains first.
    // مرتب‌سازی دلتاها به صورت نزولی جهت انتخاب حریصانه بزرگ‌ترین سودها در ابتدا.
    sort(delta.rbegin(), delta.rend());

    // Print maximal score after 1, 2, ..., n flips.
    // چاپ حداکثر امتیاز پس از ۱، ۲، ...، n تغییر جهت.
    for (int i = 0; i < n; i++) {
        current += delta[i];
        cout << current << (i == n - 1 ? "" : " ");
    }
    cout << '\n';
}

int main() {

    // Fast I/O for competitive programing.
    // بهینه سرعت سازی ورودی و خروجی برای مسابقات برنامه نویسی.
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // Process all test cases.
    // پردازش تمام تست‌کیس‌ها.
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    
    
    return 0;
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!