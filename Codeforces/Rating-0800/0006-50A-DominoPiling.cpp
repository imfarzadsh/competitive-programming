/*
 * Problem Name: 50A - Domino piling
 * Problem Link: https://codeforces.com/contest/50/problem/A
 * Platform:     Codeforces
 * Difficulty:   800 (Easy)
 * Topics:       greedy, math
 * 
 * Time Complexity:  O(1)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std ;

int main() {

    // Fast I/O for competitive programing.
    // بهینه سرعت سازی ورودی و خروجی برای مسابقات برنامه نویسی.
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // M and N represent the dimensions of the board (M x N)
    // M و N نشان‌دهنده ابعاد صفحه شطرنجی (M در N) هستند
    int M , N;
    cin >> M >> N;

    // Calculate the total board area
    // محاسبه مساحت کل صفحه
    int area = M * N;

    // Each domino covers 2 squares, so maximum dominoes = floor(area / 2)
    // هر دومینو ۲ مربع را می‌پوشاند، بنابراین حداکثر دومینو = تقسیم صحیح مساحت بر ۲
    int result = area / 2;

    // Output the maximum number of dominoes that can be placed
    // چاپ حداکثر تعداد دومینوهای قابل جاگذاری
    cout << result;

    return 0;
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!