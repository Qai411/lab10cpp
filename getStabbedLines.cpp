#include <iostream>

#include "stabbingLines.h"

void getStabbedLines(const int xcoord, Line linesArray[], const int MaxLnsSize, const int NumLines, Point pointsArray[], const int MaxPtsSize, Line stabbedLines[], const int MaxStbSize, int &NumOfStbLines)
{

  for (int i = 0; i < NumLines; i++)
  {
    Line l;
    l = linesArray[i];
    if (pointsArray[l.x1y1].x >= xcoord)
    {
      if (pointsArray[l.x2y2].x <= xcoord)
      {
        stabbedLines[i] = l;
      }
    }
  }
}