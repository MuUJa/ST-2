// Copyright 2024 Podyachikh Mikhail
#include <cmath>
#include <stdexcept>
#include "circle.h"

double Circle::getRadius() const {
  return radius;
}

double Circle::getArea() const {
  return area;
}

double Circle::getFerence() const {
  return ference;
}

void Circle::setRadius(double radius) {
  if (radius <= 0.0) {
    throw std::invalid_argument("radius");
  }
  Circle::radius = radius;
  area = M_PI * radius * radius;
  ference = 2 * M_PI * radius;
}

void Circle::setArea(double area) {
  if (area <= 0.0) {
    throw std::invalid_argument("area");
  }
  Circle::area = area;
  radius = sqrt(area / M_PI);
  ference = 2 * M_PI * radius;
}

void Circle::setFerence(double ference) {
  if (ference <= 0.0) {
    throw std::invalid_argument("ference");
  }
  Circle::ference = ference;
  radius = ference / (2 * M_PI);
  area = M_PI * radius * radius;
}

Circle::Circle(double radius) {
  setRadius(radius);
}
