#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Deluxe.h"
#include "Premium.h"
#include "Business.h"
#include <iomanip>

int main() {
    // Khởi tạo danh sách các phòng
    std::vector<Room*> rooms;

    // Nhập thông tin cho 5 phòng
    for (int i = 0; i < 5; ++i) {
        std::cout << "Nhap thong tin cho phong thu " << i + 1 << ":\n";
        std::cout << "Loai phong (Deluxe, Premium, Business): ";
        std::string loaiPhong;
        std::cin >> loaiPhong;

        if (loaiPhong == "Deluxe") {
            int soDem;
            double phiDichVu, phiPhucVu;
            std::cout << "Nhap so dem: ";
            std::cin >> soDem;
            std::cout << "Nhap phi dich vu: ";
            std::cin >> phiDichVu;
            std::cout << "Nhap phi phuc vu: ";
            std::cin >> phiPhucVu;
            rooms.push_back(new Deluxe(soDem, phiDichVu, phiPhucVu));
        }
        else if (loaiPhong == "Premium") {
            int soDem;
            double phiDichVu;
            std::cout << "Nhap so dem: ";
            std::cin >> soDem;
            std::cout << "Nhap phi dich vu: ";
            std::cin >> phiDichVu;
            rooms.push_back(new Premium(soDem, phiDichVu));
        }
        else if (loaiPhong == "Business") {
            int soDem;
            std::cout << "Nhap so dem: ";
            std::cin >> soDem;
            rooms.push_back(new Business(soDem));
        }
        else {
            std::cout << "Loai phong khong hop le. Thu lai!\n";
            --i; // Giảm i để người dùng nhập lại thông tin
        }
    }

    // Biến lưu trữ doanh thu của từng loại phòng
    double doanhThuDeluxe = 0.0;
    double doanhThuPremium = 0.0;
    double doanhThuBusiness = 0.0;

    // Tính doanh thu từng phòng và cộng vào doanh thu của loại phòng tương ứng
    for (Room* room : rooms) {
        if (auto deluxeRoom = dynamic_cast<Deluxe*>(room)) {
            doanhThuDeluxe += deluxeRoom->doanhThu();
        }
        else if (auto premiumRoom = dynamic_cast<Premium*>(room)) {
            doanhThuPremium += premiumRoom->doanhThu();
        }
        else if (auto businessRoom = dynamic_cast<Business*>(room)) {
            doanhThuBusiness += businessRoom->doanhThu();
        }
    }

    // Xác định doanh thu cao nhất
    double maxDoanhThu = std::max({ doanhThuDeluxe, doanhThuPremium, doanhThuBusiness });

    // Tạo danh sách các loại phòng có doanh thu cao nhất
    std::vector<std::string> loaiPhongMax;

    if (doanhThuDeluxe == maxDoanhThu) {
        loaiPhongMax.push_back("Deluxe");
    }
    if (doanhThuPremium == maxDoanhThu) {
        loaiPhongMax.push_back("Premium");
    }
    if (doanhThuBusiness == maxDoanhThu) {
        loaiPhongMax.push_back("Business");
    }

    // Xuất kết quả
    std::cout << "Cac loai phong co doanh thu cao nhat (" << std::fixed << std::setprecision(0) << maxDoanhThu << " VND): ";
    for (const auto& loai : loaiPhongMax) {
        std::cout << loai << " ";
    }
    std::cout << std::endl;

    // Giải phóng bộ nhớ
    for (Room* room : rooms) {
        delete room;
    }

    return 0;
}
