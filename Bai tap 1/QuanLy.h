#pragma once
#include "NhanVien.h"

class QuanLy : public NhanVien {
private:
    double tyLeThuong;  

public:
    QuanLy(const std::string& maSo, const std::string& ten, double luongCoBan, double tyLeThuong);
    double TienThuong() const override;
    void Xuat() const override;
};