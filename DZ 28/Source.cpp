#include <iostream>
#include<cstdlib>
#include"Products.h"







int main() {
	setlocale(LC_ALL, "Russian");


	

	print_prod(apples1);
	std::cout << "\n\n";
	std::cout << " Полная стоимость товара = " << full_price(apples1) << std::endl;
	std::cout << "\n\n";

	sell(apples1, 20.5);
	std::cout << "\n\n";

	print_prod(apples1);



	return 0;
}