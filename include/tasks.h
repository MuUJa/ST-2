// Copyright 2024 Podyachikh Mikhail
#ifndef INCLUDE_TASKS_H_
#define INCLUDE_TASKS_H_

const double EARTH_RADIUS = 6.3781e6;

double solvePlanetAndRopeTask(double planetRadius, double radiusIncrement);

double solveSwimmingPoolTask(double poolRadius, double widthOfSidewalk,
                             double costOfPavement, double fencePrice);

#endif // INCLUDE_TASKS_H_
