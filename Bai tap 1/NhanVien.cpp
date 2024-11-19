#include "NhanVien.h"
#include <iomanip>

// Constructor
// Input:
// - maSo: Mã số nhân viên.
// - ten: Tên nhân viên.
// - luongCoBan: Lương cơ bản của nhân viên.
// Output: Không có (khởi tạo các thuộc tính).
NhanVien::NhanVien(const std::string& maSo, const std::string& ten, double luongCoBan)
    : maSo(maSo), ten(ten), luongCoBan(luongCoBan) {}

// Phương thức Xuat()
// Input: Không có.
// Output: Hiển thị thông tin mã số, tên và lương cơ bản của nhân viên.
// Giải thuật: Sử dụng cout để xuất các thuộc tính.
void NhanVien::Xuat() const {
    std::cout << "Ma so: " << maSo << "\n"
        << "Ten: " << ten << "\n"
        << "Luong co ban: " << std::fixed << std::setprecision(0) << luongCoBan << "\n";
}
