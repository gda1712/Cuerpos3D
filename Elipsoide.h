#ifndef ElipsoideH
#define ElipsoideH

class Elipsoide
{
private:
	float a, b, c;
public:
	Elipsoide()
	{
		a = 0.0;
		b = 0.0;
		c = 0.0;
	}
	~Elipsoide();
	
	//Métodos de a
	void seta(float a)
	{
		this -> a = a;
	}
	float geta()
	{
		return a;
	}

	//Métodos de b
	void setb(float b)
	{
		this -> b = b;
	}
	float getb()
	{
		return b;
	}

	//Métodos de c
	void setc(float c)
	{
		this -> c = c;
	}
	float getc()
	{
		return c;
	}


	float llenarElipsoide()
	{
		cout << "Ingrese a: ";
		cin >> a;
		cout << "Ingrese b: ";
		cin >> b;
		cout << "Ingrese c: ";
		cin >> c;

		return (4 * a * b * c * 3.1416) / 3;
	}
};


#endif