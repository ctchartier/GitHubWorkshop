#pragma once

#include <string>

class Shape {
protected:
	float height;
	float width;
	

public:
	Shape(float width = 0, float height = 0);
	virtual ~Shape();

	float getWidth() const;
	void setWidth(float width);
	float getHeight() const;
	void setHeight(float height);

	virtual float getArea() const = 0;
};