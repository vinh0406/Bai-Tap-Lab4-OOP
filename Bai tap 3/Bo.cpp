#include "Bo.h"

// Constructor Bo
// Input: Không có
// Output: Một đối tượng Bò với các thuộc tính "ten" là "Bò" và "tiengKeu" là "umbooo"
Bo::Bo() : GiaSuc("Bo", "umbooo") {}

// Phương thức choSua
// Input: Không có
// Output: Trả về số lượng sữa mà bò cho (0-20 lít)
// Giải thuật: Sử dụng hàm `rand()` để tạo số ngẫu nhiên trong khoảng 0-20
int Bo::choSua() const {
    return rand() % 21; // Số sữa từ 0 đến 20 lít
}

// Phương thức sinhCon
// Input: Không có
// Output: Trả về số lượng con mà bò sinh (0-2 con)
// Giải thuật: Sử dụng hàm `rand()` để tạo số ngẫu nhiên trong khoảng 0-2
int Bo::sinhCon() const {
    return rand() % 3; // Số con từ 0 đến 2
}
