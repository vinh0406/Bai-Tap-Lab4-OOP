#include "Business.h"

// Constructor
// Input: soDem (số đêm lưu trú)
// Output: Không có (constructor chỉ khởi tạo đối tượng)
Business::Business(int soDem) : Room(soDem) {
    // Gán giá trị soDem cho đối tượng
}

// Phương thức doanhThu
// Input: Không có tham số đầu vào (sử dụng thuộc tính của đối tượng)
// Output: Doanh thu của phòng Business
// Giải thuật:
// 1. Tính doanh thu bằng công thức: doanh thu = số đêm * 300000
// 2. Trả về giá trị doanh thu đã tính
double Business::doanhThu() const {
    return soDem * 300000;
}
