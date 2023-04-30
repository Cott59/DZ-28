#pragma once



struct product {
	std::string name;
	double number = 0;
	double price;
};

extern product apples1;

void print_prod(product p1);
double full_price(product p1);
void sell(product& prod, double num);
