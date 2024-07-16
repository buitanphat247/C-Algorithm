#include <iostream>
#include <string>

using namespace std;

string findMaxNumber(const string& s) {
    string max_number; // Chuỗi lưu trữ số lớn nhất

    string current_number; // Chuỗi lưu trữ số hiện tại

    for (char c : s) { // Duyệt qua từng ký tự trong xâu
        if (isdigit(c)) { // Nếu là chữ số
            current_number += c; // Thêm ký tự vào chuỗi số hiện tại
        } else { // Nếu không phải chữ số
            if (current_number.size() > max_number.size() || (current_number.size() == max_number.size() && current_number > max_number)) {
                // Nếu độ dài của chuỗi số hiện tại lớn hơn số lớn nhất đã biết
                // hoặc cùng độ dài nhưng chuỗi số hiện tại lớn hơn số lớn nhất đã biết
                max_number = current_number; // Cập nhật số lớn nhất
            }
            current_number = ""; // Đặt lại chuỗi số hiện tại về rỗng để bắt đầu xây dựng số mới
        }
    }

    // Kiểm tra lại sau khi kết thúc vòng lặp
    if (current_number.size() > max_number.size() || (current_number.size() == max_number.size() && current_number > max_number)) {
        max_number = current_number; // Cập nhật số lớn nhất
    }

    return max_number;
}

int main() {
    string s;
    getline(cin,s);

    string max_number_in_string = findMaxNumber(s);

    cout <<  max_number_in_string << endl;

    return 0;
}
