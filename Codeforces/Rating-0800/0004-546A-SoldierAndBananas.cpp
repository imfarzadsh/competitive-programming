/*
 * Problem Name: 546A - Soldier and Bananas
 * Problem Link: https://codeforces.com/contest/546/problem/A
 * Platform:     Codeforces
 * Difficulty:   800 (Easy)
 * Topics:       brute force, implementation, math
 * 
 * Time Complexity:  O(1)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std ;

int main() {

    // Fast I/O for competitive programing.
    // بهینه سرعت سازی ورودی و خروجی برای مسابقات برنامه نویسی.
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    // k: Cost of the first banana.
    // n: Initial number of dollars the soldier has.
    // w: Number of bananas he wants to buy.
    // k: قیمت اولین موز.
    // n: مقدار پول اولیه سرباز.
    // w: تعداد موزهایی که می‌خواهد بخرد.
    long long k , n , w;
    cin >> k >> n >> w;

    // Calculate total cost using the Arithmetic Progression sum formula:
    // Sum = w * (first_term + last_term) / 2 = w * (k + w * k) / 2.
    // محاسبه هزینه کل با استفاده از فرمول مجموع تصاعد حسابی:
    // مجموع = تعداد * (جمله اول + جمله آخر) / ۲.
    long long total = (k + (w*k)) * w / 2;

    // Calculate the required amount to borrow (0 if he already has enough money).
    // محاسبه مقدار پول مورد نیاز برای قرض گرفتن (0 در صورت کافی بودن پول اولیه).
    long long result = max(total - n, 0LL);

    // Output the calculated result.
    // چاپ نتیجه محاسبه‌شده.
    cout << result;

    return 0;
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!