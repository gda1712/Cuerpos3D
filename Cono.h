#ifndef ConoH
#define ConoH

class Cono
{
private:
	float r, h;
public:
	Cono()
	{
		r = 0.0;
		h = 0.0;
	}
	~Cono();
	
	//Métodos de r
	void setr(float r)
	{
		this -> r = r;
	}
	float getr()
	{
		return r;
	}

	//Métodos de h
	void seth(float h)
	{
		this -> h = h;
	}
	float geth()
	{
		return h;
	}


	float llenarCono()
	{
		cout << "Ingrese la altura: ";
		cin >> h;
		cout << "Ingrese el radio: ";
		cin >> r;

		return (3.1416 * r * r * h) / 3;
	}


	
};


#endif