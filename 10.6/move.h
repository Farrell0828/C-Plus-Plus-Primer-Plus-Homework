// move.h -- class Move
#ifndef MOVE_H_
#define MOVE_H_
class Move
{
private:
	double x_;
	double y_;
public:
	Move(double a = 0, double b = 0);	// sets x, y to a, b
	void ShowMove() const;				// show current x, y values
	Move Add(const Move &m) const;
	void Reset(double a = 0, double b = 0);	// resets x, y to a, b
};
#endif