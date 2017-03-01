// box.cpp -- box structures
#include <iostream>
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void disp(box);
void set_vol(box *);

int main()
{
	using namespace std;
	box b1 = { "Microsoft", 10.0, 5.3, 6.6 };
	box b2 = { "Google", 4.5, 2.9, 3.3 };
	set_vol(&b1);
	set_vol(&b2);
	cout << "The information of b1:\n";
	disp(b1);
	cout << "\nThe information of b2:\n";
	disp(b2);
	return 0;
}

// this function display each 
void disp(box b)
{
	using namespace std;
	cout << "Maker: " << b.maker << endl;
	cout << "Height: " << b.height << endl;
	cout << "Width: " << b.width << endl;
	cout << "Length: " << b.length << endl;
	cout << "Volume: " << b.volume << endl;
}

// this function set the box's volume
void set_vol(box * pb)
{
	pb->volume = pb->height * pb->width * pb->length;
}