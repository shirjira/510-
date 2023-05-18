#include <iostream>
#include <vector>
//#include <array>
#include <iomanip>
#include "DrinkItem.h"
#include "ConsoleApplication1.h"
#include "OrderItem.h"

using namespace std;

void AddNewDrink(std::vector<DrinkItem>& drinks)
{
	drinks.push_back(DrinkItem("紅茶", "大杯", 60));
	drinks.push_back(DrinkItem("紅茶", "小杯", 40));
	drinks.push_back(DrinkItem("綠茶", "大杯", 60));
	drinks.push_back(DrinkItem("綠茶", "小杯", 40));
	drinks.push_back(DrinkItem("咖啡", "大杯", 70));
	drinks.push_back(DrinkItem("咖啡", "小杯", 50));
	drinks.push_back(DrinkItem("可樂", "大杯", 40));
	drinks.push_back(DrinkItem("可樂", "小杯", 20));
}
void DisplayDrinkMenu(vector<DrinkItem>& drinks)
{
	cout << setw(4) << "編號" << setw(10) << "飲料名稱" << setw(10) << "大小" << setw(10) << "售價" << endl;
	cout << "-------------------------------------" << endl;

	//int i = 1;
	//for (DrinkItem item : drinks)
	//{
	//	cout << setw(4) << i;
	//	item.displayItem();
	//	i++;
	//}
	int i = 1;
	vector<DrinkItem>::iterator v = drinks.begin();
	while (v!=drinks.end())
	{
		cout << setw(4) << i;
		v->displayItem();
		v++;
		i++;
			
	}

	cout << "-------------------------------------" << endl;

}
void OrderDrink(vector<OrderItem> & order)
{

}
int main()
{
	vector<DrinkItem> drinks;
	vector<OrderItem> order;
	//array<int, 5> a = { 1,2,3,4,5 };
	//array<array<int, 2>, 3> b = { 1,2,3,4,5,6 };
    //新增飲料品項
	AddNewDrink(drinks);
	//顯示所有飲料菜單
	DisplayDrinkMenu(drinks);
    //點餐
	OrderDrink(order);


    //計算總金額與售價

}
