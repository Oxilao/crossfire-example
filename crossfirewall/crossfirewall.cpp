// crossfirewall.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <Windows.h>
#include <iostream>
#include <stdlib.h>

#include "xhttp.h"
#include "oxycli.h"

bool boot = false;
using namespace std;

int main()
{
	oxycli::title_cli();
	oxycli::header_cls();

	cout << "pres left shift + q to make x-log" << endl;
	while (1)
	{
		if (GetAsyncKeyState(VK_LSHIFT) && GetKeyState('Q'))
		{
			cout << "booted" << endl
				 << "x-log port assert" << endl;
			_port_block();
			Sleep(6500);
			_port_open();
			cout << "you can enter character";
			Sleep(300);
			
		}
	}
	exit(EXIT_SUCCESS);
}