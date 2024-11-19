#pragma once
#include "Room.h"

class Business : public Room {
public:
    Business(int soDem);
    double doanhThu() const override;
};