#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    // Sort the array
    std::sort(a.begin(), a.end());
    
    // Output the sorted array
    for (int i = 0; i < n; i++) {
        std::cout << a[i];
        if (i < n - 1) std::cout << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
