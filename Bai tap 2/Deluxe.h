#pragma once
#include "Room.h"

class Deluxe : public Room {
private:
    double phiDichVu;
    double phiPhucVu;

public:
    Deluxe(int soDem, double phiDichVu, double phiPhucVu);
    double doanhThu() const override;
};