#include <iostream> 
#include <iomanip>
using namespace std;
 
class CTime
{
private:
    int hour;
    int minute;
    int second;
public:
    // Ham tao
    CTime(int h = 0, int m = 0, int s = 0): hour(h), minute(m), second(s)
    {
    }
    void set(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }
    void setHour(int h) {hour = h;}
    void setMinute(int m) {minute = m;}
    void setSencond(int s) {second = s;} 
    int getHour() {return hour;}
    int getMinute() {return minute;}
    int getSecond() {return second;}
    bool checkValidTime();
    void display24();
    void display12();
};
 
void CTime::display24()
{
    if (checkValidTime())
    {
        cout << setfill('0') << setw(2) << hour << " : "
             << setfill('0') << setw(2) << minute << " : "
             << setfill('0') << setw(2) << second << endl;
    }
    else
    {
        cout << setfill('0') << setw(2) << hour << " : "
             << setfill('0') << setw(2) << minute << " : "
             << setfill('0') << setw(2) << second << " is invalid" << endl; } } void CTime::display12() { if (checkValidTime()) { if (hour >= 12)
        {
            cout << setfill('0') << setw(2) << hour-12 << " : "
                 << setfill('0') << setw(2) << minute << " : "
                 << setfill('0') << setw(2) << second << " (PM) " << endl;
        }
        else
        {
            cout << setfill('0') << setw(2) << hour << " : "
                 << setfill('0') << setw(2) << minute << " : "
                 << setfill('0') << setw(2) << second << " (AM)" << endl;
        }
    }
    else
    {
        cout << setfill('0') << setw(2) << hour << " : "
             << setfill('0') << setw(2) << minute << " : "
             << setfill('0') << setw(2) << second << " is invalid" << endl;
    }
}
 
bool CTime::checkValidTime()
{
    int h, m, s;
    h = getHour();
    m = getMinute();
    s = getSecond();
    if (h < 0 || h > 23 ||
        m < 0 || m > 59 ||
        s < 0 || s > 59)
    {
        return false;
    }
    return true;
    
}
 
void main()
{
    CTime time(30, 45, 0);
    time.display12();
    time.setSencond(30);
    time.display24();
    time.set(13, 59, 0);
    time.display24();
    system("pause");
}
