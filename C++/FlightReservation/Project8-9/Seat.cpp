#pragma once
#include "Seat.h"

Seat::Seat() {
    resetName();
}
void Seat::setName(string name) {
    this->name = name;
}
void Seat::resetName() {
    setName("---");
}
string Seat::getName() {
    return name;
}