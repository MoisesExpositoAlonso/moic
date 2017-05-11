
#include "stdio.h" 



void LoadCities() {
  int x, y;
  ifstream in("Cities.txt");

  if (!in) {
    cout << "Cannot open file.\n";
    return;
  }

  for (y = 0; y < 15; y++) {
    for (x = 0; x < 15; x++) {
      in >> distances[x][y];
    }
  }

  in.close();

}
