#include <iostream>
    int main() {
        int n;
        std::cin >> n;
        int a[10][10];
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                a[i][j] = 0;
            }
        }
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            int x, y;
            std::cin >> x >> y;
            if (x == y) {
                ans += a[x][y];
            }
            else {
                ans += a[x][y];
                ans += a[y][x];
            }
            a[x][y]++;
        }
        std::cout << ans;
    }