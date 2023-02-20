#pragma once

#include "Shape.h"

class Rectangle : public Shape {
public:
  Rectangle(float width = 0, float height = 0);
  ~Rectangle();
  float getArea() const override;
};

