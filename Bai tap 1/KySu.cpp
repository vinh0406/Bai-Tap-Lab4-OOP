#include "KySu.h"
#include <iomanip>

// Constructor
// Input:
// - maSo: Mã số kỹ sư.
// - ten: Tên kỹ sư.
// - luongCoBan: Lương cơ bản của kỹ sư.
// - soGioLamThem: Số giờ làm thêm của kỹ sư.
// Output: Không có (khởi tạo các thuộc tính).
KySu::KySu(const std::string& maSo, const std::string& ten, double luongCoBan, int soGioLamThem)
    : NhanVien(maSo, ten, luongCoBan), soGioLamThem(soGioLamThem) {}

// Phương thức TienThuong()
// Input: Không có.
// Output: Tiền thưởng (double) tính dựa trên số giờ làm thêm.
// Giải thuật: Tiền thưởng = số giờ làm thêm * 100,000.
double KySu::TienThuong() const {
    return soGioLamThem * 100000;
}

// Phương thức Xuat()
// Input: Không có.
// Output: Hiển thị thông tin kỹ sư gồm mã số, tên, lương cơ bản, số giờ làm thêm và tiền thưởng.
// Giải thuật: Gọi Xuat() từ lớp cha để hiển thị các thuộc tính chung, sau đó in thêm thông tin đặc thù.
void KySu::Xuat() const {
    NhanVien::Xuat();
    std::cout << "So gio lam them: " << std::fixed << std::setprecision(0) << soGioLamThem << "\n"
        << std::fixed << std::setprecision(0) << "Tien thuong: " << TienThuong() << "\n";
}
