#include "Cuu.h"

// Constructor Cuu
// Input: Không có
// Output: Một đối tượng Cừu với các thuộc tính "ten" là "Cừu" và "tiengKeu" là "Beee"
Cuu::Cuu() : GiaSuc("Cuu", "Beee") {}

// Phương thức choSua
// Input: Không có
// Output: Trả về số lượng sữa mà cừu cho (0-5 lít)
// Giải thuật: Sử dụng hàm `rand()` để tạo số ngẫu nhiên trong khoảng 0-5
int Cuu::choSua() const {
    return rand() % 6; // Số sữa từ 0 đến 5 lít
}

// Phương thức sinhCon
// Input: Không có
// Output: Trả về số lượng con mà cừu sinh
// Giải thuật: Sử dụng hàm `rand()` để tạo số ngẫu nhiên trong khoảng 0-2
int Cuu::sinhCon() const {
    return rand() % 3; // Số con từ 0 đến 2
}
