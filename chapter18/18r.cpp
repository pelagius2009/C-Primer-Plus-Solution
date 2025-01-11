
/*
3.
a.
r1(w)  
doubel &rx  非const左值引用与左值实参匹配
const double & rx   const左值引用与右值实参匹配
const double & rx   const左值引用与右值实参匹配

b.
double &rx  非const左值引用与左值实参匹配
double && rx 右值引用与右值实参匹配
double && rx 右值引用与右值实参匹配

c.
const double & rx  const左值引用与左值实参匹配 
double && rx 右值引用与右值实参匹配
double && rx 右值引用与右值实参匹配

总结：非const左值形参与左值实参匹配，非const右值形参与右值实参匹配;const左值形参与左值或右值实参匹配，前两者优先。


默认构造函数、复制构造函数、移动构造函数、析构函数、复制赋值运算符、移动复制运算符
编译器根据情况自动提供默认版本。

5.在转让数据所有权而该不是复制数据可行时，可使用移动构造函数，但标准数组
没有转让所有权机制。可使用指针和动态内存分配，转让所有权。

*/
//6
//auto fp = [](double x){return 1.8 * x +32;}
show2(18.0, [](double x){return 1.8*x +32;})



//7
sum(temp_c, [&total](double x){return total += x;});


