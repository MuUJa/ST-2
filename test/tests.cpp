// Copyright 2024 Podyachikh Mikhail
#include <gtest/gtest.h>
#include <cmath>
#include "circle.h"
#include "tasks.h"

const double EPS = 1.0e-9;

TEST(CIRCLE_CLASS, Constructor) {
  Circle circle(5.0);
  EXPECT_NEAR(circle.getRadius(), 5.0, EPS);
}

TEST(CIRCLE_CLASS, AreaAfterRadiusChange) {
  Circle circle(3.0);
  circle.setRadius(6.0);
  EXPECT_NEAR(circle.getArea(), 36.0 * M_PI, EPS);
}

TEST(CIRCLE_CLASS, FerenceAfterRadiusChange) {
  Circle circle(2.0);
  circle.setRadius(4.0);
  EXPECT_NEAR(circle.getFerence(), 8.0 * M_PI, EPS);
}

TEST(CIRCLE_CLASS, AreaAfterAreaChange) {
  Circle circle(2.0);
  circle.setArea(16.0 * M_PI);
  EXPECT_NEAR(circle.getArea(), 16.0 * M_PI, EPS);
}

TEST(CIRCLE_CLASS, RadiusAfterAreaChange) {
  Circle circle(4.0);
  circle.setArea(25.0 * M_PI);
  EXPECT_NEAR(circle.getRadius(), 5.0, EPS);
}

TEST(CIRCLE_CLASS, FerenceAfterAreaChange) {
  Circle circle(3.0);
  circle.setArea(49.0 * M_PI);
  EXPECT_NEAR(circle.getFerence(), 14.0 * M_PI, EPS);
}

TEST(CIRCLE_CLASS, FerenceAfterFerenceChange) {
  Circle circle(6.0);
  circle.setFerence(10.0 * M_PI);
  EXPECT_NEAR(circle.getFerence(), 10.0 * M_PI, EPS);
}

TEST(CIRCLE_CLASS, RadiusAfterFerenceChange) {
  Circle circle(4.0);
  circle.setFerence(14.0 * M_PI);
  EXPECT_NEAR(circle.getRadius(), 7.0, EPS);
}

TEST(CIRCLE_CLASS, AreaAfterFerenceChange) {
  Circle circle(5.0);
  circle.setFerence(18.0 * M_PI);
  EXPECT_NEAR(circle.getArea(), 81.0 * M_PI, EPS);
}

TEST(CIRCLE_CLASS, NegativeRadiusConstructor) {
  EXPECT_ANY_THROW(Circle(-2.0));
}

TEST(CIRCLE_CLASS, NegativeRadiusSet) {
  Circle circle(3.0);
  EXPECT_ANY_THROW(circle.setRadius(-4.0));
}

TEST(CIRCLE_CLASS, NegativeAreaSet) {
  Circle circle(4.0);
  EXPECT_ANY_THROW(circle.setArea(-16.0 * M_PI));
}

TEST(CIRCLE_CLASS, NegativeFerenceSet) {
  Circle circle(5.0);
  EXPECT_ANY_THROW(circle.setFerence(-20.0 * M_PI));
}

TEST(CIRCLE_CLASS, ZeroRadiusConstructor) {
  EXPECT_ANY_THROW(Circle(0.0));
}

TEST(CIRCLE_CLASS, ZeroRadiusSet) {
  Circle circle(6.0);
  EXPECT_ANY_THROW(circle.setRadius(0.0));
}

TEST(CIRCLE_CLASS, ZeroAreaSet) {
  Circle circle(7.0);
  EXPECT_ANY_THROW(circle.setArea(0.0));
}

TEST(CIRCLE_CLASS, ZeroFerenceSet) {
  Circle circle(8.0);
  EXPECT_ANY_THROW(circle.setFerence(0.0));
}

TEST(TASKS, PlanetAndRopeTask) {
  EXPECT_NEAR(solvePlanetAndRopeTask(6371000.0, 1.0), M_1_PI * 0.5, EPS);
}

TEST(TASKS, SwimmingPoolTask) {
  EXPECT_NEAR(solveSwimmingPoolTask(5.0, 1.0, 1000.0, 2000.0),
              35000.0 * M_PI, EPS);
}

TEST(TASKS, ZeroSizeSwimmingPoolTask) {
  EXPECT_ANY_THROW(solveSwimmingPoolTask(0.0, 0.0, 1000.0, 2000.0));
}
