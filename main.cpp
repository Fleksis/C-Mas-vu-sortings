#include <iostream>

int main() {

  int masivs[20]; // masīva maksimālais elementu skaits ir 20
  int skaits = 0;

  std::cin >> skaits; // ievadam masīva elementu skaitu

  for(int i = 0; i < skaits; i++) { 
      std::cin >> masivs[i];      // aizpildam masīvu
  }

  // jūsu kods zemāk 

  for(int i = 0; i < skaits; i++)
  { 
    for(int j = 0; j < skaits; j++)
    {
      if(masivs[i] < masivs[j])
      {
        int sorted;
        sorted = masivs[j];
        masivs[j] = masivs[i];
        masivs[i] = sorted;
      }

    }

  }
  for(int i = 0; i < skaits; i++)
  {
    std::cout << masivs[i];
  }
  return 0;
}