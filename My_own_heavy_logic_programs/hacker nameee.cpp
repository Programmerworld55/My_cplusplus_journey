#include<iostream>
#include<windows.h>
using namespace std;
main()
{
	string arr1="\t\t\t\t+-+-+-+     +-+-+       |     |      +-+-+-       +-             *         *\n\t\t\t\t|             |         |     |        |       +               *   *       |\n\t\t\t\t|             |         |     |        |     +                *     *      *\n\t\t\t\t+-+-+-+       |         +--+-+-        |     +               *********     |\n\t\t\t\t|             |         |     |        |       +            *         *    *\n\t\t\t\t+-+-+-+       |         |     |        !         +-        *           *   *******\n                                     \t\t\t\t     +-+-+-";
	string arr2="\t\t\t\t*     *        *            +--      |   +         ######          ######\n\t\t\t\t*     *      *   *        +          |  +          |               |    #\n\t\t\t\t*******     *******      +           |+            |               |#####\n\t\t\t\t*     *    *       *      +          |  +          ######          # +\n\t\t\t\t*     *   *         *       +--      |    +        |               |    +a\n\t\t\t\t                        \t\t\t   ######";
	cout<<"\n\n\n\n";
	for(int i=0;i<=550;i++)
	{
		system("color 4");
		cout<<arr1[i];
		Sleep(10);
	}
	cout<<"\n\n\n";
	for(int i=0;i<=437;i++)
	{
		system("color 4");
		cout<<arr2[i];
		Sleep(10);
	}

}
