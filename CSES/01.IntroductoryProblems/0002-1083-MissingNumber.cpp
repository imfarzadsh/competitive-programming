/*
 * Problem Name: 1083 - Missing Number
 * Problem Link: https://cses.fi/problemset/task/1083
 * Platform:     CSES
 * Difficulty:   Easy
 * Topics:       Math, Implementation
 * 
 * Time Complexity:  O(n)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    // Fast I/O for competitive programming
    // بهینه سرعت سازی ورودی و خروجی برای مسابقات برنامه نویسی
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    // n is the total count of numbers, x is used to read each input number
    // متغیر n تعداد کل اعداد و x برای دریافت هر عدد ورودی است
    long long n , x;
    cin >> n ;
 
    // Calculate the expected sum of numbers from 1 to n using the mathematical formula n*(n+1)/2
    // محاسبه مجموع مورد انتظار اعداد از 1 تا n با استفاده از فرمول ریاضی n*(n+1)/2
    long long int sum_of_all = (n * (n + 1) ) / 2 ;

    // Read the n-1 given numbers and subtract each from the total sum
    // خواندن n-1 عدد داده شده و کم کردن هر کدام از مجموع کل
    for (int i = 1; i < n; i++)
    {
        cin >> x ;
        sum_of_all -= x ;
    }
 
    // The remaining value in sum_of_all is the missing number
    // مقدار باقیمانده در sum_of_all همان عدد گمشده است
    cout << sum_of_all;
 
    return 0;
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up !