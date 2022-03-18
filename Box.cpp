#include "Box.h"

// Implement setters and getters

// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return length*width*height;
}
void Box::setLength(int l)
{
  if (l>0)
    length = l;
  else
    length = 0;
  
}
int Box::getLength()
{
  return length;
}

void Box::setHeight(int h)
{
  if(h>0)
    height = h;
  else
    height = 0;
}
int Box::getHeight()
{
  return height;
}
void Box::setWidth(int w)
{
  if (w>0)
    width = w;
  else
    width = 0;
}

int Box::getWidth()
{
  return width;
}