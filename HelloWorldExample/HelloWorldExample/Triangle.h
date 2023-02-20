#pragma once

#include "Shape.h"

class Triangle : public Shape {
public:
	Triangle(float width = 0, float height = 0);
	~Triangle();
	float getArea() const override;
};
