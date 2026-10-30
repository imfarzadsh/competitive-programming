/*
 * Problem Name: 1617 - Bit Strings
 * Problem Link: https://cses.fi/problemset/task/1617
 * Platform:     CSES
 * Difficulty:   Easy
 * Topics:       Math, Binary Exponentiation
 * 
 * Time Complexity:  O(logn)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

// Function to calculate (base^exp) % mod efficiently using Binary Exponentiation (Fast Power)
// تابعی برای محاسبه کارآمد (base^exp) % mod با استفاده از الگوریتم توان‌رسانی سریع (Binary Exponentiation)
void solve_1(long long base, long long exp, long long mod){
    long long res = 1;
    base %= mod;

    // Loop until exponent becomes 0
    // حلقه تا زمانی که توان به صفر برسد ادامه دارد
    while (exp > 0)
    {

        // If exp is odd, multiply the current result with base
        // اگر توان فرد باشد، نتیجه فعلی را در پایه ضرب کن
        if (exp %2 == 1) res = (res * base) % mod;

        // Square the base and halve the exponent
        // پایه را به توان دو برسان و توان را نصف کن
        base = base * base % mod;
        exp /= 2;
    }

    // Print the final computed result
    // چاپ نتیجه نهایی محاسبه شده
    cout << res << '\n';
}

// Alternative linear approach (unused/commented out in main)
// روش خطی جایگزین (که در تابع main استفاده نشده و کامنت شده است)
void solve_2(long long base, long long exp, long long mod){
    long long res = 1;
    base %= mod;
    for (int i = 0; i < exp; i++)
    {
        res *= base ;
        res %= mod ;
    }
    cout << res << '\n';
}


int main() {
    
    // Fast I/O for competitive programming
    // بهینه سرعت سازی ورودی و خروجی برای مسابقات برنامه نویسی
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // CSES requires the result to be modulo 10^9 + 7
    // سایت CSES خروجی را با باقی‌مانده تقسیم بر 10^9 + 7 می‌خواهد
    const long long mod = 1e9 + 7;

    // Base is 2 because each bit can be either 0 or 1 (2 choices per position)
    // پایه عدد 2 است چون هر بیت می‌تواند صفر یا یک باشد (2 انتخاب برای هر جایگاه)   
    long long base = 2;

    // n represents the length of the bit string
    // متغیر n طول رشته بیتی را نشان می‌دهد
    long long n;
    cin >> n;

    // Call solve_1 for optimal O(logn) execution
    // فراخوانی تابع اول برای اجرای بهینه با مرتبه زمانی O(logn)
    solve_1(base, n, mod);

    // Alternative linear solution with O(n) time complexity (too slow for large n)
    // راه حل خطی جایگزین با مرتبه زمانی O(n) (کند برای nهای بزرگ)
    // solve_2(base, n, mod);

    return 0;
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!