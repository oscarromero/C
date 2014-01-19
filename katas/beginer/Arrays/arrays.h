#ifndef __ARRAYS__H__
  #define __ARRAYS__H__

  /* Sort the keys of an arrays. */
  void array_sort_keys (int** arr) 
  {
    int i, j;
    int *tmp;

    for (i = 0; i < 9; i++)
    {
      for (j = i + 1; j < 10; j++)
      {
        if (arr[j] < arr[i])
        {
          tmp = arr[j];
          arr[j] = arr[i];
          arr[i] = tmp;
        }
      }
    }

    return;
  }
#endif
