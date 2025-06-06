﻿// ННГУ, ИИТММ, Курс "Алгоритмы и структуры данных"
//
// Copyright (c) Сысоев А.В.
//
// Тестирование матриц

#include <iostream>
#include "tmatrix.h"
//---------------------------------------------------------------------------

void main()
{
  TDynamicMatrix<int> a(5), b(5), c(5);
  int i, j;

  setlocale(LC_ALL, "Russian");
  std::cout << "Тестирование класс работы с матрицами" << std::endl;
  for (i = 0; i < 5; i++)
    for (j = i; j < 5; j++ )
    {
      a[i][j] =  i * 10 + j;
      b[i][j] = (i * 10 + j) * 100;
    }
  c = a + b;
  std::cout << "Matrix a = " << std::endl << a << std::endl;
  std::cout << "Matrix b = " << std::endl << b << std::endl;
  std::cout << "Matrix c = a + b" << std::endl << c << std::endl;
}
//---------------------------------------------------------------------------
