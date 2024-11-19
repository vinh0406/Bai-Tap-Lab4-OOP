#include "De.h"

// Constructor De
// Input: Không có
// Output: Một đối tượng Dê với các thuộc tính "ten" là "Dê" và "tiengKeu" là "Mehhh"
De::De() : GiaSuc("De", "Mehhh") {}

// Phương thức choSua
// Input: Không có
// Output: Trả về số lượng sữa mà dê cho (0-10 lít)
// Giải thuật: Sử dụng hàm `rand()` để tạo số ngẫu nhiên trong khoảng 0-10
int De::choSua() const {
    return rand() % 11; // Số sữa từ 0 đến 10 lít
}

// Phương thức sinhCon
// Input: Không có
// Output: Trả về số lượng con mà dê sinh 
// Giải thuật: Sử dụng hàm `rand()` để tạo số ngẫu nhiên trong khoảng 0-2
int De::sinhCon() const {
    return rand() % 3; // Số con từ 0 đến 2
}
