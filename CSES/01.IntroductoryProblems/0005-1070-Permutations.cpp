/*
 * Problem Name: 1070 - Permutations
 * Problem Link: https://cses.fi/problemset/task/1070
 * Platform:     CSES
 * Difficulty:   Easy
 * Topics:       Greedy, Constructive Algorithms, Implementation
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
    
    // n represents the size of the permutation
    // متغیر n اندازه جایگشت را نشان می‌دهد
    int n;
    cin >> n;

    // For n = 2 and n = 3, it's impossible to form a valid permutation, so print "NO SOLUTION"
    // برای n = 2 و n = 3 ساختن جایگشت معتبر غیرممکن است، بنابراین عبارت "NO SOLUTION" را چاپ کن
    if (n == 2 || n == 3) cout << "NO SOLUTION\n";
    else
    {
        // First print all even numbers from 2 up to n
        // ابتدا تمام اعداد زوج از 2 تا n را چاپ کن
        for (int i = 2; i <= n; i+=2) cout << i << " ";

        // Then print all odd numbers from 1 up to n
        // سپس تمام اعداد فرد از 1 تا n را چاپ کن
        for (int i = 1; i <= n; i+=2) cout << i << " ";
    }
 
    return 0;
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up !