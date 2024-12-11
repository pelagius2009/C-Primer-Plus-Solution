//14.2

Gloam::Gloam(int g, const char * s)
{
	glip = g;
	fb.Frabjous(s);
}


Gloam::Gloam(int g, const char * s):glip(g), fb(s){}

Gloam::Gloam(int g, const Frabjous & f)
{
	glip = g;
	fb = f;
}

Gloam::Gloam(int g, const Frabjous & f):glip(g), fb(f){}

void Gloam::tell()
{
	cout << g;
	fb.tell();
}



//14.3



Gloam::Gloam(int g, const char * s):glip(g),Frabjous(s){}

Gloam::Gloam(int g, const Frabjous & f):glip(g), Frabjous(f){}

void Gloam::tell()
{
	cout << g;
	Frabjous::tell();
}




//14.4
class Stack
{
private:
	enum {MAX = 10};
	Work * itmes[MAX];
	int top;
public:
	Stack();
	bool isempty();
	bool is full();
	bool push(const Work * & item);
	bool pop(Work* & item);

};


//14.5

ArrayTP <string> arr_str;
StackTP <ArrayTP<double>> st_a_d
ArrayTP <StackTP<Work *>> arr_s_w






