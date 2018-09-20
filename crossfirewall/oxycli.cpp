#include "pch.h"
#include "oxycli.h"
#include <iostream>
#include <cstdlib>

namespace oxycli
{
	using std::endl;
	using std::cout;

	void title_cli()
	{
		system("title Connection breaker for Tibia");
	}

	void header_cls()
	{
		system("cls");
		cout << "Connection breaker for Tibia [port:7171]" << endl << endl;
	}
}