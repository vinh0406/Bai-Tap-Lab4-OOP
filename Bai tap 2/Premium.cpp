#include "Premium.h"

// Constructor
// Input: soDem (số đêm lưu trú), phiDichVu (phí dịch vụ)
// Output: Không có (constructor chỉ khởi tạo đối tượng)
Premium::Premium(int soDem, double phiDichVu)
    : Room(soDem), phiDichVu(phiDichVu) {
    // Gán giá trị các thuộc tính cho đối tượng
}

// Phương thức doanhThu
// Input: Không có tham số đầu vào (sử dụng thuộc tính của đối tượng)
// Output: Doanh thu của phòng Premium
// Giải thuật:
// 1. Tính doanh thu bằng công thức: doanh thu = số đêm * 500000 + phí dịch vụ
// 2. Trả về giá trị doanh thu đã tính
double Premium::doanhThu() const {
    return soDem * 500000 + phiDichVu;
}
