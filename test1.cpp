#include"iostream"
using namespace std;
class CMyColock
{
private:
	int hour;
	int minute;
	int second;
	int check();
public:
	CMyColock();
	CMyColock(int h,int m,int s);
	int setColock(int h,int m,int s);
	void displayColock();
	void addOnesecond();
	int gethour();
	int getminute();
	int getsecond();
}
CMyColock::CMyColock()
{
	hour=0;
	minute=0;
	second=0;
}
CMyDate::CMycolock(int h.int m.int s)
    {
    	hour=h;
    	minute=m;
    	second=s;
    	if(check()==1||check=-1)
    	{
    		hour=0;
    		minut=0;
    		seconde=0;
    		cot<<"设置时间错误,时间已置0"<<endl;
		}
	}
	int CMyColock::setColock(int h,int m,int s)
	{
		hour=h;
		minute=m;
		second=s;
			if(check()==1||check=-1)
    	{
    		hour=0;
    		minut=0;
    		seconde=0;
    		cot<<"设置时间错误,时间已置0"<<endl;
    		return -1;
		}
		return 0;
	}
	void CMyColock::displayColock()
	{
		cout<<hour<<"时"<<minute<<"分"<<second<<"秒"<<endl; 
	}
	int CMyColock::check()
{
		if(minute>59||minute<1)
		return -1;
}
int CMyColock::gethour()
{
	return hour;
}
int CMyColock::getminute()
{
	return minute:
}
int CMyColock::getsecond()
{
	return second;
}
