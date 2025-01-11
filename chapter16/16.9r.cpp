//chapter 16 review exercise


//16.1
class RQ1
{
	private:
		std::string st;
	public:
		RQ1(){st = "";}
		RQ1(const std::string s)
		{
			st = s;
		}
		/*
		RQ1(const RQ1 & rq)
		{
			st =rq.st;
		}
		~RQ1(){};
		RQ & operator = (const RQ & rq);
*/
};



/*
16.2
 
1.自动调整大小
2.不用管理内存
3.可以赋值
   */

//16.3
include <cctype>
include <string>
include <algorithm>
using std::string;
void to_upper(string &s)
{
	for (int i = 0; i < s.size(); i++)
		s[i] = topper(s[i]);
}

std::transform(s,begin(), s.end(), s.begin,::toupper);






