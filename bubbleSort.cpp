#include <iostream>

using namespace std;

int main ()
{
  int tab[10] = { 1, 5, 3, 6, 8, 2, 7, 9, 4 };
  int buf;
  bool flag = false;
  do
    {
      flag = false;
      for (int i = 0; i < sizeof (tab) / sizeof (int) - 1; i++)
	{
	  if (tab[i] > tab[i + 1])
	    {
	      buf = tab[i];
	      tab[i] = tab[i + 1];
	      tab[i + 1] = buf;
	      flag = true;
	    }

	}
    }
  while (flag == true);

  for (int i = 0; i < sizeof (tab) / sizeof (int); i++)
    {
      cout << tab[i] << " ";
    }

  return 0;
}
