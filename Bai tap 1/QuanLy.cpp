#include "QuanLy.h"
#include <iomanip>

// Constructor
// Input:
// - maSo: Mã số quản lý.
// - ten: Tên quản lý.
// - luongCoBan: Lương cơ bản của quản lý.
// - tyLeThuong: Tỷ lệ thưởng của quản lý (0 <= tyLeThuong <= 1).
// Output: Không có (khởi tạo các thuộc tính).
QuanLy::QuanLy(const std::string& maSo, const std::string& ten, double luongCoBan, double tyLeThuong)
    : NhanVien(maSo, ten, luongCoBan), tyLeThuong(tyLeThuong) {}

// Phương thức TienThuong()
// Input: Không có.
// Output: Tiền thưởng (double) tính dựa trên lương cơ bản và tỷ lệ thưởng.
// Giải thuật: Tiền thưởng = lương cơ bản * tỷ lệ thưởng.
double QuanLy::TienThuong() const {
    return luongCoBan * tyLeThuong;
}

// Phương thức Xuat()
// Input: Không có.
// Output: Hiển thị thông tin quản lý gồm mã số, tên, lương cơ bản, tỷ lệ thưởng và tiền thưởng.
// Giải thuật: Gọi Xuat() từ lớp cha để hiển thị các thuộc tính chung, sau đó in thêm thông tin đặc thù.
void QuanLy::Xuat() const {
    NhanVien::Xuat();
    std::cout << "Ty le thuong: " << std::setprecision(3) << tyLeThuong << "\n"
        << "Tien thuong: " << std::fixed << std::setprecision(0) << TienThuong() << "\n";
}
