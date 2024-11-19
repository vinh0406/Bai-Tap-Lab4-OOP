#pragma once
#include <string>

class Room {
protected:
    int soDem; // Số đêm ở phòng

public:
    Room(int soDem);
    virtual double doanhThu() const = 0; // Phương thức tính doanh thu (thuần ảo)
    virtual ~Room() {}
};