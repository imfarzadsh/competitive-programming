/*
 * Problem Name: 4A - Watermelon
 * Problem Link: https://codeforces.com/contest/4/problem/A
 * Platform:     Codeforces
 * Difficulty:   800 (Easy)
 * Topics:       Math, Brute Force
 * 
 * Time Complexity:  O(1)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std ;

int main() {

    // Fast I/O for competitive programing
    // بهینه سرعت سازی ورودی و خروجی برای مسابقات برنامه نویسی
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int w ;
    // Read the weight of the watermelon
    // دریافت وزن هندوانه از ورودی
    cin >> w ;

    // A watermelon can be divided into to even parts if and only if :
    // 1. The total weight is even (w % 2 == 0) .
    // 2. The weight is strictly greater than 2 , because 2 can only be split into 1 + 1 (both odd) .   

    // هندوانه زمانی میتواند به دو بخش زوج تقسیم شود که :
    // 1. وزن کل زوج باشد (بخش پذیر بر 2) .
    // 2. وزن کل بزرگتر از 2 باشد ، چون عدد 2 تنها به 1 + 1 تقسیم میشود که هردو فرد هستند .

    if (w % 2 == 0 && w > 2)
    {
        // Output YES if a valid division is exists
        // چاپ یس در صورت امکان تقسیم به دو بخش زوج
        cout << "YES\n" ;
    }
    else cout << "NO\n" ; // Output No otherwise

    return 0;
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up !