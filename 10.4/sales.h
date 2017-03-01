// sales.h -- class Sales
#ifndef SALES_H_
#define SALES_H_
namespace sales
{
	class Sales
	{
	private:
		static const int Quarters = 4;
		double sales_[Quarters];
		double average_;
		double max_;
		double min_;
		void SetAMM();	// set the value of average_, max_, and min_
	public:
		Sales();		// default constructor
		Sales(const double[], int);
		~Sales();
		void SetSales();
		void ShowSales() const;
	};
}
#endif