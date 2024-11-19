#pragma once
#include "Room.h"

class Premium : public Room {
private:
    double phiDichVu;

public:
    Premium(int soDem, double phiDichVu);
    double doanhThu() const override;
};