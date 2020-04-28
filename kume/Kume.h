#pragma once


class Kume
{
public:
	Kume();
	Kume(const char);
	Kume(const char*);
	Kume(const Kume&);
	Kume(Kume&&);


	Kume& operator=(const char);
	Kume& operator=(const char*);
	Kume& operator=(const Kume&);
	Kume& operator=(Kume&&);


	
	char* dizi;
	size_t eleman_sayisi;
	size_t lenght;
private:
	void sil(char* dizi,int sayi)
	{
		if (dizi)
		{
			if (sayi == 1)
			{
				delete dizi;
			}

			if (sayi > 1)
			{
				delete[] dizi;
			}

		}
	}
};

