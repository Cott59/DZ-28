#pragma once
#include <iostream>
#include<string>
#include"Products.h"

//extern struct product;


product apples1{ "������",50.0,30.0 };

void print_prod(product p1) {
	std::cout << " ������������ :            " << p1.name << std::endl;
	std::cout << " ����� ���������� ������ : " << p1.number << std::endl;
	std::cout << " ���� �� 1�� :             " << p1.price << std::endl;
}

double full_price(product p1) {
	
	return (p1.number*p1.price);
}

void sell(product& prod, double num) {
	prod.number -= num;

}