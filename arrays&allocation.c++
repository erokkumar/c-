#include <iostream>
using namespace std;

class Shop
{
	int itemID[100];
	int itemprice[100];
	int counter;

public:
	void initcounter(void) { counter = 0; }
	void setprice(void);
	void displayPrice(void);
};

void Shop ::setprice(void)
{
	cout << "Enter Id of your item no" << counter + 1 << endl;
	cin >> itemID[counter];
	cout << "Enter price of your item" << endl;
	cin >> itemprice[counter];
	counter++;
}
void Shop ::displayPrice(void)
{
	for (int i = 0; i < counter; i++)
	{
		cout << "the price of item with Id" << itemID << "is" << itemprice[i] << endl;
	}
}

int main()
{
	Shop dukaan;
	dukaan.initcounter();
	dukaan.setprice();
	dukaan.setprice();
	dukaan.setprice();
	dukaan.displayPrice();
	return 0;
}
