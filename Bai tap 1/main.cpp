#include <iostream>
#include "QuanLy.h"
#include "KySu.h" 

int main() {
    // Nhập thông tin cho Quản lý
    std::string maSoQL, tenQL;
    double luongCoBanQL, tyLeThuong;
    std::cout << "Nhap thong tin Quan ly:\n";
    std::cout << "Ma so: ";
    std::cin >> maSoQL;
    std::cin.ignore();
    std::cout << "Ten: ";
    std::getline(std::cin, tenQL);
    std::cout << "Luong co ban: ";
    std::cin >> luongCoBanQL;
    std::cout << "Ty le thuong: ";
    std::cin >> tyLeThuong;

    QuanLy ql(maSoQL, tenQL, luongCoBanQL, tyLeThuong);

    // Nhập thông tin cho Kỹ sư
    std::string maSoKS, tenKS;
    double luongCoBanKS;
    int soGioLamThem;
    std::cout << "\nNhap thong tin Ky su:\n";
    std::cout << "Ma so: ";
    std::cin >> maSoKS;
    std::cin.ignore();
    std::cout << "Ten: ";
    std::getline(std::cin, tenKS);
    std::cout << "Luong co ban: ";
    std::cin >> luongCoBanKS;
    std::cout << "So gio lam them: ";
    std::cin >> soGioLamThem;

    KySu ks(maSoKS, tenKS, luongCoBanKS, soGioLamThem);

    // Hiển thị thông tin
    std::cout << "\nThong tin Quan ly:\n";
    ql.Xuat();

    std::cout << "\nThong tin Ky su:\n";
    ks.Xuat();

    return 0;
}
