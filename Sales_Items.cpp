#include <iostream>
#include<string>

struct Person {
	std::string getName() const { return name; }
	std::string getAddress() const { return address; }

	std::string name;
	std::string address;
};

std::istream& read(std::istream& is, Person& rhs) {
	is >> rhs.name >> rhs.address;
	return is;
}

std::ostream& print(std::ostream& os, const Person& rhs) {
	os << rhs.getName() << " " << rhs.getAddress();
	return os;
}



struct Sales_data {

	Sales_data& combine(const Sales_data& rhs) {
		units_sold += rhs.units_sold;
		revenue += rhs.revenue;
		return *this;
	}
	std::string isbn() const {
		return bookNo;
	}
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

std::istream& read(std::istream& is, Sales_data &item){
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}
std::ostream& print(std::ostream& os, const Sales_data& item) {
	os << item.isbn() << " " << item.units_sold << " "
		<< item.revenue << " " << item.avg_price();
	return os;
}
Sales_data add(const Sales_data& lhs, const Sales_data& rhs) {
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}

int main() {
	Sales_data total;
	if (read(std::cin,total)) {
		Sales_data trans;
		while (read(std::cin, trans)) {
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else {
				print(std::cout, total) << std::endl;
				total = trans;
			}
		}
		print(std::cout, total) << std::endl;
	}
	else {
		std::cerr << "No data?!" << std::endl;
		return -1;
	}
	return 0;





}