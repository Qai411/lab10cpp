#include <iostream>
#include "stabbingLines.h"

void readPoints(ifstream &inPutPointFile, Point pointsArray[], const int MaxPntsSize, int &numPoints)
{

  int pID, x_coord, y_coord;
  pointsArray[MaxPntsSize];
  while (inPutPointFile >> pID >> x_coord >> y_coord) //Using the file writer Pointer
  {
    Point eachPoint;
    eachPoint.Pid = pID;
    eachPoint.x = x_coord;
    eachPoint.y = y_coord;
    pointsArray[pID] = eachPoint;
  }
  inPutPointFile.close();
}