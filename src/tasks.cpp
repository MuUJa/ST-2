// Copyright 2024 Podyachikh Mikhail
#include "tasks.h"
#include "circle.h"

double solvePlanetAndRopeTask(double planetRadius, double radiusIncrement) {
  Circle circle(planetRadius);
  circle.setFerence(circle.getFerence() + radiusIncrement);
  return circle.getRadius() - planetRadius;
}

double solveSwimmingPoolTask(double poolRadius,
                             double widthOfSidewalk,
                             double costOfPavement,
                             double fencePrice) {
  auto pool = Circle(poolRadius);
  auto poolWithArea = Circle(poolRadius + widthOfSidewalk);

  return (poolWithArea.getArea() - pool.getArea()) * costOfPavement
      + poolWithArea.getFerence() * fencePrice;
}
