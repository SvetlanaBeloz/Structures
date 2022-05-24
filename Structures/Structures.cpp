#include <iostream>

enum Usage { SUNPROTECTION, CORRECTION, IMAGE };
enum Purpose { KITCHEN, BAR, OFFICE, COMPUTER };
enum Color { WHITE, BLACK, RED, YELLOW, ORANGE, GREEN, BLUE, PURPLE, PINK, BROWN, GREY};

struct Measurements
{
	double height;
	double width;
	double lenth;
};

struct Glasses
{
	std::string manufacturer;
	std::string country;
	std::string glassesMaterial;
	std::string lensMaterial;
	double diopter;
	int lensHeight;
	int earHookLenth;
	int weight;
	Usage usage;
	Color glasses;
};

struct Chair
{
	std::string frameMaterial;
	std::string upholsteryMaterial;
	std::string manufacturer;
	std::string country;
	Measurements chair;
	int weight;
	int maximumLoad;
	Purpose chair;
	Color chair;
	bool backrest;
};

struct Candle
{
	std::string type;
	std::string form;
	std::string candleMaterial;
	std::string color;
	std::string manufacturer;
	std::string country;
	std::string fragrance;
	double burningTime;
	Measurements candle;
	Color candle;
	bool fragrance;
};

struct Cup
{
	std::string type;
	std::string material;
	std::string manufacturer;
	std::string country;
	int capacity;
	int weight;
	Measurements cup;
	Color cup;
	bool decor;
};

struct Table
{
	std::string form;
	std::string countertopMaterial;
	std::string legMaterial;
	std::string manufacturer;
	std::string country;
	Purpose table;
	Measurements table;
	Color table;
	int bodyThickness;
	int weight;
};

int main()
{

}

