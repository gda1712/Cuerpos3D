#ifndef OrtoedroH
#define OrtoedroH

class Ortoedro
{
private:
	float a, b, c;
public:
	Ortoedro()
	{
		a = 0.0;
		b = 0.0;
		c = 0.0;
	}
	~Ortoedro();
	
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


	float llenarOrtoedro()
	{
		cout << "Ingrese a: ";
		cin >> a;
		cout << "Ingrese b: ";
		cin >> b;
		cout << "Ingrese c: ";
		cin >> c;

		return (a * b * c);
	}

};


#endif