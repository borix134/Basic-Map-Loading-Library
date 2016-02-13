# Basic-Map-Loading-Library
Just a header file that loads a text file into 2d dynamic array.  Will be useful if you intend to load maps that are tiled off of character arrays.
Example:
```
#include "maploader.hpp"
int main(){
map Map("pathtotextfile",32,32);
/*
for (int x=0; x<32; x++){
  for (int y=0; y<32; y++){
    Map.objects[x][y]  <-- current object in array
  }
}
*/
return 0;
}
```
