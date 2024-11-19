#include "GiaSuc.h"

// Constructor GiaSuc
// Input: Tên loài gia súc (ten), tiếng kêu đặc trưng của loài (tiengKeu)
// Output: Một đối tượng GiaSuc với các thuộc tính được khởi tạo
GiaSuc::GiaSuc(const std::string& ten, const std::string& tiengKeu)
    : ten(ten), tiengKeu(tiengKeu) {}

// Phương thức phatTiengKeu
// Input: Không có
// Output: Xuất tiếng kêu đặc trưng của gia súc ra màn hình
// Giải thuật: Sử dụng thuộc tính `tiengKeu` để in tiếng kêu
void GiaSuc::phatTiengKeu() const {
    std::cout << ten << " keu: " << tiengKeu << std::endl;
}
