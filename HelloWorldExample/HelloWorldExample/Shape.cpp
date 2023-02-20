#include "Shape.h"
Shape::Shape(float width = 0, float height = 0) {
	setWidth(0);
	setHeight(0);
}

float Shape::getWidth() const {
	return width;
}
void Shape::setWidth(float width1) {
	width = width1;
}
float Shape::getHeight() const {
	return height;
}
void Shape::setHeight(float height1) {
	height = height1;
}
