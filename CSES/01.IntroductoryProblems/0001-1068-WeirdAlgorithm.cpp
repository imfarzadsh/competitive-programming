/*
 * Problem Name: 1068 - Weird Algorithm
 * Problem Link: https://cses.fi/problemset/task/1068
 * Platform:     CSES
 * Difficulty:   Easy
 * Topics:       Math, Simulation, Brute Force
 * 
 * Time Complexity:  Simulation (Depends on n)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    // Use long long to prevent integer overflow during 3*n + 1 operations
    // استفاده از long long برای جلوگیری از سرریز شدن عدد در عملیات 3*n + 1
    long long n ;

    // Read the input number
    // خواندن عدد ورودی
    cin >> n ;
 
    // Simulate the Collatz conjecture algorithm
    // شبیه‌سازی الگوریتم حدس کلاتز
    while (true)
    {
        // Print the current number in the sequence
        // چاپ عدد فعلی در دنباله
        cout << n << " ";

        // Stop the loop when n reaches 1
        // توقف حلقه زمانی که n برابر با 1 می‌شود
        if (n == 1) break;
        
        // If n is even, divide it by 2
        // اگر n زوج باشد، آن را بر 2 تقسیم کن
        if (n % 2 == 0) {
            n /= 2;
        }
        
        // If n is odd, multiply by 3 and add 1
        // اگر n فرد باشد، آن را در 3 ضرب کرده و 1 اضافه کن
        else {
            n = 3 * n + 1;
        }
    }
 
    return 0;
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up !