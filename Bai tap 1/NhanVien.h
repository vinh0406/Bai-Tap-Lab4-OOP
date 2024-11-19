#pragma once
#include <iostream>
#include <string>

class NhanVien {
protected:
    std::string maSo;
    std::string ten;
    double luongCoBan;

public:
    NhanVien(const std::string& maSo, const std::string& ten, double luongCoBan);
    virtual ~NhanVien() = default;

    virtual double TienThuong() const = 0;
    virtual void Xuat() const;
};
