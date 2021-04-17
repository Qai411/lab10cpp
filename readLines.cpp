#include <iostream>
#include "stabbingLines.h"

void readLines(ifstream &inPutLineFile, Line linesArray[], const int MaxLnsSize, int &numLines)
{
  linesArray[MaxLnsSize];
  int lID;
  int p1, p2;

  while (inPutLineFile >> lID >> p1 >> p2)
  {
    Line eachLine;
    eachLine.x1y1 = p1;
    eachLine.x2y2 = p2;
    linesArray[lID] = eachLine;
  }
  inPutLineFile.close();
}