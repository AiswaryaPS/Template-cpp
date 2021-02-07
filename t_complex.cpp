/**
 * @file t_complex.cpp
 * @author Aiswarya PS
 * @brief 
 * @version 0.1
 * @date 2021-02-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include"t_complex.h"
#include "iostream"
/**
 * @brief Empty constructor
 * 
 * @tparam T 
 */
template<typename T>t_complex<T>::t_complex():m_real(0),m_image(0)
{
}
/**
 * @brief Parameterized Constructor
 * 
 * @tparam T 
 * @param a 
 * @param b 
 */
template<typename T>complex_no<T>::t_complex(T X,T Y):m_real(X),m_image(Y)
{

}
/**
 * @brief real Function
 * 
 * @tparam T 
 * @return T 
 */
template <typename T>T t_complex<T>::g_real()
{
    return m_real;
}
/**
 * @brief imag function
 * 
 * @tparam T 
 * @return T 
 */
template <typename T>T t_complex<T>::g_imag()
{
    return m_image;
}
/**
 * @brief Display Function
 * 
 * @tparam T 
 */
  template <typename T>void t_complex<T>::g_display(){
      std::cout<<g_real()<<g_imag();
  }


