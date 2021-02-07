#ifndef __TCOMPLEX_H
#define __TCOMPLEX_H
#include<iostream>
template<typename T>
class Complex {
  T m_real;
  T m_image;
  public:
  Complex();
  Complex(T,T);
  void display();
  T real();
  T imag();
};
