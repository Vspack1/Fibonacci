#include <iostream>  

using namespace std;

int main() {
    int n;
    cout << "Nhap so phan tu muon in ra (n): ";
    cin >> n; // Nhap n  

    int a = 0, b = 1; // Khai bao hai so dau tien  
    cout << "Day so Fibonacci: ";

    for (int i = 0; i < n; i++) {
        cout << a << " "; // In ra so Fibonacci hien tai  
        int next = a + b; // Tinh so tiep theo  
        a = b; // Cap nhat so dau  
        b = next; // Cap nhat so tiep theo  
    }
    cout << endl;

    return 0;
}