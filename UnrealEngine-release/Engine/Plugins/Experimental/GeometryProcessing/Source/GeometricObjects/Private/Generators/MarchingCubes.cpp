// Copyright Epic Games, Inc. All Rights Reserved.

#include "Generators/MarchingCubes.h"


constexpr int FMarchingCubes::EdgeIndices[12][2];
constexpr int FMarchingCubes::EdgeTable[256];
constexpr int FMarchingCubes::TriTable[256][16];