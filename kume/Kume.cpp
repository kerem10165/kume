#include "Kume.h"
#include <iostream>

Kume::Kume()
{
	dizi = nullptr;
	eleman_sayisi = 0;
}

Kume::Kume(const char c)
{
	dizi = new char[2];
	dizi[0] = c;
	dizi[1] = '\0';
	eleman_sayisi = 1;
}

Kume::Kume(const char* str)
{
	char* temp = new char;
	*temp = str[0];
	char* temp_tut = nullptr;
	bool flag = true;
	size_t str_eleman = strlen(str);
	size_t temp_eleman = 1;

	for (size_t i = 0; i < str_eleman+1; i++)
	{
		for (size_t j = 0; j < temp_eleman; j++)
		{
			if (temp[j] == str[i])
			{
				flag = false;
				break;
			}
		}

		if (flag == true)
		{
			temp_tut = new char[temp_eleman];
			memcpy(temp_tut, temp, temp_eleman);
			sil(temp, temp_eleman);
			temp = new char[temp_eleman + 1];
			memcpy(temp, temp_tut , temp_eleman);
			sil(temp_tut, temp_eleman);
			temp[temp_eleman] = str[i];
			++temp_eleman;
		}

		flag = true;
	}
	

	dizi = temp;
	eleman_sayisi = temp_eleman - 1;
	lenght = eleman_sayisi;
}

Kume::Kume(const Kume&)
{
}

Kume::Kume(Kume&&)
{
}
