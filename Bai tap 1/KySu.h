#pragma once
#include "NhanVien.h"

class KySu : public NhanVien {
private:
    int soGioLamThem;

public:
    KySu(const std::string& maSo, const std::string& ten, double luongCoBan, int soGioLamThem);
    double TienThuong() const override;
    void Xuat() const override;
};