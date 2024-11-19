#include <iostream>
#include <vector>
#include <ctime>
#include "Bo.h"
#include "Cuu.h"
#include "De.h"

int main() {
    srand(static_cast<unsigned>(time(0))); // Gieo hạt số ngẫu nhiên

    // Nhập số lượng ban đầu
    int soBo, soCuu, soDe;
    std::cout << "Nhap so luong bo ban dau: ";
    std::cin >> soBo;
    std::cout << "Nhap so luong cuu ban dau: ";
    std::cin >> soCuu;
    std::cout << "Nhap so luong de ban dau: ";
    std::cin >> soDe;

    // Tạo các danh sách gia súc
    std::vector<Bo> danhSachBo(soBo);
    std::vector<Cuu> danhSachCuu(soCuu);
    std::vector<De> danhSachDe(soDe);

    // a) Các gia súc đói kêu
    std::cout << "\nTat ca gia suc dang doi. Tieng keu nghe duoc:\n";
    for (const auto& bo : danhSachBo) bo.phatTiengKeu();
    for (const auto& cuu : danhSachCuu) cuu.phatTiengKeu();
    for (const auto& de : danhSachDe) de.phatTiengKeu();

    // b) Thống kê sau một lứa sinh và cho sữa
    int tongSua = 0;

    // Sản lượng sữa
    for (const auto& bo : danhSachBo) tongSua += bo.choSua();
    for (const auto& cuu : danhSachCuu) tongSua += cuu.choSua();
    for (const auto& de : danhSachDe) tongSua += de.choSua();

    // Số con được sinh
    int soBoMoi = 0, soCuuMoi = 0, soDeMoi = 0;
    for (const auto& bo : danhSachBo) soBoMoi += bo.sinhCon();
    for (const auto& cuu : danhSachCuu) soCuuMoi += cuu.sinhCon();
    for (const auto& de : danhSachDe) soDeMoi += de.sinhCon();

    // Thêm gia súc mới
    danhSachBo.insert(danhSachBo.end(), soBoMoi, Bo());
    danhSachCuu.insert(danhSachCuu.end(), soCuuMoi, Cuu());
    danhSachDe.insert(danhSachDe.end(), soDeMoi, De());

    // Xuất kết quả thống kê
    std::cout << "\nThong ke sau mot chu ky:\n";
    std::cout << "So luong bo: " << danhSachBo.size() << "\n";
    std::cout << "So luong cuu: " << danhSachCuu.size() << "\n";
    std::cout << "So luong de: " << danhSachDe.size() << "\n";
    std::cout << "Tong so sua thu duoc: " << tongSua << " lit\n";

    return 0;
}
