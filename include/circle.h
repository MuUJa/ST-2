// Copyright 2024 Podyachikh Mikhail
#ifndef INCLUDE_CIRCLE_H_
#define INCLUDE_CIRCLE_H_
#include <cstdint>

class Circle {
 private:
  double radius;
  double area;
  double ference;

 public:
  explicit Circle(double radius);

  double getRadius() const;

  double getArea() const;

  double getFerence() const;

  void setRadius(double radius);

  void setArea(double area);

  void setFerence(double ference);
};

#endif  // INCLUDE_CIRCLE_H_
