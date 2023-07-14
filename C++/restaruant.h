class Tableinfo
{
	private:
		int x;
		int y;
	public:
		int tablenumber;
		char tableNO[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
		Tableinfo(int x, int y);
};

class Delivery
{
	public:
		void carry(int a);
		void gotable(int table);
		void backcounter();
};

class Order
{
	private:	
		int menuNO_PRICE[2][20]; //첫 행 매뉴번호, 둘째 행 가격
		int orderedNO;
		int tableprice[9];
	public:
		void calculateorder(int b,int table);
};

class Claim
{
	private:
		bool claimavailable;
		int claiminfo[9];
	public:
		void checkclaim(int table);
		void afterservice(int table);
};

class Clear
{
	private:
		bool customer;
	public:
		void cleantable(int table);
		void resettableinfo(int table);
};