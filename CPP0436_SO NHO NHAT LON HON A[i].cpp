#include <iostream>
#include <set>
#include <vector>
using namespace std;

void solve(vector<int>& A) {
    int n = A.size();
    vector<string> result(n, "_"); // Mảng kết quả khởi tạo toàn bộ là '_'
    set<int> s; // Sử dụng set để lưu các phần tử đã duyệt
    
    // Duyệt từ phải sang trái
    for (int i = n - 1; i >= 0; --i) {
        // Tìm phần tử lớn hơn A[i] trong set
        auto it = s.upper_bound(A[i]);
        if (it != s.end()) {
            result[i] = to_string(*it); // Nếu tìm thấy, lưu giá trị vào kết quả
        }
        s.insert(A[i]); // Thêm phần tử hiện tại vào set
    }
    
    // In kết quả
    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T; // Đọc số lượng bộ test
    while (T--) {
        int n;
        cin >> n; // Đọc số lượng phần tử của mảng
        vector<int> A(n);
        for (int i = 0; i < n; ++i) {
            cin >> A[i]; // Đọc các phần tử của mảng
        }
        solve(A); // Gọi hàm giải quyết
    }
    return 0;
}
