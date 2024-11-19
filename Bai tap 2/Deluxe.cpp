#include "Deluxe.h"

// Constructor
// Input: soDem (số đêm lưu trú), phiDichVu (phí dịch vụ), phiPhucVu (phí phục vụ)
// Output: Không có (constructor chỉ khởi tạo đối tượng)
Deluxe::Deluxe(int soDem, double phiDichVu, double phiPhucVu)
    : Room(soDem), phiDichVu(phiDichVu), phiPhucVu(phiPhucVu) {
    // Gán giá trị các thuộc tính cho đối tượng
}

// Phương thức doanhThu
// Input: Không có tham số đầu vào (sử dụng thuộc tính của đối tượng)
// Output: Doanh thu của phòng Deluxe
// Giải thuật:
// 1. Tính doanh thu bằng công thức: doanh thu = số đêm * 750000 + phí dịch vụ + phí phục vụ
// 2. Trả về giá trị doanh thu đã tính
double Deluxe::doanhThu() const {
    return soDem * 750000 + phiDichVu + phiPhucVu;
}
