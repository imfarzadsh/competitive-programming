/*
 * Problem Name: 1192 - Counting Rooms
 * Problem Link: https://cses.fi/problemset/task/1192
 * Platform:     CSES
 * Difficulty:   Easy
 * Topics:       Graph Algorithms, DFS, Flood Fill, Grid Traversal
 * 
 * Time Complexity:  O(n * m)
 * Space Complexity: O(n * m)
 */

#include <bits/stdc++.h>
using namespace std;

// Direction arrays for moving down, up, right, and left in a 2D grid
// آرایه‌های جهت‌یابی برای حرکت به پایین، بالا، راست و چپ در جدول دوبعدی
const int dx[4] = {1, -1, 0, 0};
const int dy[4] = {0, 0, 1, -1};

// Depth-First Search (Flood Fill) to explore and mark all connected floor cells ('.') of a single room
// جستجوی اول عمق (پر کردن سیلابی) برای پیمایش و علامت‌گذاری تمام خانه‌های کف متصل به هم ('.') در یک اتاق
void dfs(vector<string>& v, int r, int c){

    // Mark the current cell as visited by turning it into a wall ('#')
    // علامت‌گذاری خانه فعلی به عنوان بازدید شده با تبدیل آن به دیوار ('#')
    v[r][c] = '#';

    int n = v.size();
    int m = v[0].size();

    // Explore all 4 adjacent neighbors (up, down, left, right)
    // بررسی تمام ۴ همسایه مجاور (بالا، پایین، چپ، راست)
    for (int i = 0; i < 4; i++)
    {
        int nr = r + dx[i];
        int nc = c + dy[i];

        // Check grid boundaries and verify if the neighbor cell is an unvisited floor ('.')
        // بررسی محدوده مرزهای جدول و اطمینان از اینکه خانه همسایه یک کف بازدید نشده ('.') است
        if (nr >= 0 && nr < n && nc >= 0 && nc < m && v[nr][nc] == '.') dfs(v, nr, nc);
    }
    
}

int main() {
    
    // Fast I/O for competitive programming
    // بهینه سرعت سازی ورودی و خروجی برای مسابقات برنامه نویسی
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // n represents the number of rows (height), m represents the number of columns (width)
    // متغیر n تعداد سطرها (ارتفاع) و m تعداد ستون‌ها (عرض) را نشان می‌دهد
    int n, m;
    cin >> n >> m;

    // Grid map storing walls ('#') and floor tiles ('.')
    // نقشه جدول برای ذخیره دیوارها ('#') و خانه‌های کف ('.')
    vector<string> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    // Counter for the total number of distinct rooms (connected components)
    // شمارنده برای تعداد کل اتاق‌های مجزا (مؤلفه‌های همبندی)
    int rooms = 0;

    // Iterate through every cell in the grid
    // پیمایش تک‌تک خانه‌های موجود در جدول
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            // If an unvisited floor tile is found, increment room count and visit the entire room via DFS
            // اگر یک خانه کف بازدید نشده پیدا شد، تعداد اتاق‌ها را یکی اضافه کن و کل اتاق را با DFS بپیما
            if (a[i][j] == '.')
            {
                rooms++;
                dfs(a, i, j);
            }
        }
        
    }
    
    // Print the total number of rooms found
    // چاپ تعداد کل اتاق‌های پیدا شده
    cout << rooms << '\n';

}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!