#pragma once
#include <stdio.h>
#include <math.h>
#include "Struct.h"


float noise(Vector2 pos);



float SetVector(int index, Vector2 v);

float smoothStep(float x);

float lerp(float start, float end, float t);

Vector2 Subtract(Vector2 a, Vector2 b);

Vector2 Divide(Vector2 a, float seed);
