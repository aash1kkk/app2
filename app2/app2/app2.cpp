
#include <Windows.h>
#include<string>
#include <mmsystem.h>
#include <iostream>

#pragma comment (lib, "winmm.lib")
using namespace std;

int main()
{
	system("color A0");
	const wchar_t* songs[] = {
	L"Purpose is Glorious.wav",
	L"Angel.wav",
	L"Vivalavida.wav",
	L"Suds.wav",
	L"agape.wav",
	L"skyfullofstars.wav",
	L"scientist.wav",
	L"quedate.wav",
	L"puntog.wav",
	L"django.wav",
	L"bible.wav",
	};
	const wchar_t* authors[] = {
		L"Luis Bacalov",
		L"Thomas Newman",
		L"Coldplay",
		L"Louis Dunford",
		L"Quedate",
		L"Natalie Holt",

	};
	int n1;
	cout << "Enter choice \n1.Music Player \n2.Music Statistics \n3.Artists \n \n";
	cin >> n1;
	int n2;
	if (n1 == 1) {
		system("color B0");
		cout << "\n1.Purpose is Glorious  |  Natalie Holt  |3:08 \n";
		cout << "2.The Angel  | Louis Dunford | 4:13 \n";
		cout << "3.Viva La Vida  |Coldplay |3:20 \n";
		cout << "4.Suds On the Roof  | Thomas Newman  |1:36 \n";
		cout << "5.Agape | Nicholas Britell | 2:56 \n";
		cout << "6.Sky Full of Stars | Coldplay | 3:57 \n";
		cout << "7.The Scientist | Coldplay |3:53 \n";
		cout << "8.Quedate | Quevedo  | 3:23 \n";
		cout << "9.Punto G  | Quevedo | 2:36 \n";
		cout << "10.Django | Luis Bacalov |3:07 \n";
		cout << "11.Bible | Thomas Newman |1:46 \n";
		cout << "\nEnter song choice";
		cin >> n2;
		int l;
		cout << "\nLoop(1)/No Loop(2)";
		cin >> l;
		cout << "\nPlaying music \n";
		if (n1 == 1) {
			if (l == 1) {
				PlaySound(songs[n2 - 1], NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
			}
			else
			{
				PlaySound(songs[n2 - 1], NULL, SND_FILENAME | SND_ASYNC);
			}
			string inp;
			getline(cin, inp);
			getchar();
			while (inp != "stop") {
				PlaySound(0, 0, 0);
				cout << "Stopped music \n";

				getline(cin, inp);
				cout << "Playing music \n";
				if (l == 1) {
					PlaySound(songs[n2 - 1], NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
				}
				else
				{
					PlaySound(songs[n2 - 1], NULL, SND_FILENAME | SND_ASYNC);
				}
				getline(cin, inp);
			}
			cout << "Music Over";
		}
	}
	else if (n1 == 2)
	{
		system("color 0B");
		cout << "\n \nSong \t \t \t \t Artist\t\t Plays \t \t        Date Released\n";
		cout << "---------------------------------------------------------------------------------------\n";
		cout << "Purpose is Glorious \t   Natalie Holt \t 715K \t \t \t Nov 18, 2023  \n";
		cout << "---------------------------------------------------------------------------------------\n";
		cout << "The Angel \t  \t   Louis Dunford \t 2.4M \t \t \t Feb 25, 2022  \n";
		cout << "---------------------------------------------------------------------------------------\n";
		cout << "Viva La Vida \t  \t   Coldplay  \t  \t 9.04M \t \t \t Aug 4, 2008 \n";
		cout << "----------------------------------------------------------------------------------------\n";
		cout << "Suds On The Roof  \t   Thomas Newman \t 2.02M \t \t         October 14, 1994 \n";
		cout << "---------------------------------------------------------------------------------------\n";
		cout << "Agape \t\t\t   Nicholas Britell  \t 60 M \t \t\t Nov 8, 2018 \n";
		cout << "---------------------------------------------------------------------------------------\n";
		cout << "Sky Full Of Stars \t   Coldplay \t \t 1.4B \t \t \t May 2,2014 \n";
		cout << "---------------------------------------------------------------------------------------\n";
		cout << "The Scientist\t \t   Coldplay \t \t 1.8B \t \t \t November 11,2002 \n";
		cout << "----------------------------------------------------------------------------------------\n";
		cout << "Quedate \t\t   Quevedo \t\t 1.6B \t \t \t Feb 21,2022 \n";
		cout << "-------------------------------------------------------------------------------------------\n";
		cout << "Punto G \t\t   Quevedo \t\t 580M \t \t \t August 23,2023 \n";
		cout << "------------------------------------------------------------------------------------------\n";
		cout << "Django \t\t\t   Luis Bacalov \t 329M \t \t \t April 2,1966 \n";
		cout << "------------------------------------------------------------------------------------------\n";
		cout << "Bible \t \t \t   Thomas Newman \t 873K \t \t\t October 14,1994 \n";  
		
	}
	else if (n1 == 3)
	{
		int a, b;
		system("color 05");
		cout << "\nArtist Details";
		cout << "\nSelect Artist for Details :";
		cout << "\n1.Thomas Newman\n2.Coldplay\n3.Luis Bacalov\n4.Quevedo\n5.Natalie Holt\n6.Nicholas Britell\n";
		cin >> a;
		if (a == 1)
		{
			cout <<"\nThomas Newman\n\nNo.of Movie Compositions : 67\n\nAvailable Songs :\n\n1.Suds on the Roof\n2.Bible\n\nPress 1 or 2 to play" ;
			cin>>b;
			if (b==1)
			{
				cout << "\nPlaying: Suds on the Sunroof\n";
				PlaySound(songs[3], NULL, SND_FILENAME | SND_SYNC );
			}
			else if (b ==2)
			{
				cout << "\nPlaying:Bible";
				PlaySound(songs[10], NULL, SND_FILENAME | SND_SYNC);
			}
			else { exit(0); }
		}
		if (a == 2)
		{
			cout << "\nColdplay\n\nNo.of Songs: 41 \n\nAvailable Songs :\n\n1.Viva La Vida\n2.The Scientist\n3.Sky Full of Stars\n\nPress 1,2 or 3 to play";
				cin>>b;
				if (b == 1)
				{
					cout << "\nPlaying: Viva La Vida\n";
					PlaySound(songs[2], NULL, SND_FILENAME | SND_SYNC);
				}
				else if (b == 2)
				{
					cout << "\nPlaying:The Scientist\n";
					PlaySound(songs[6], NULL, SND_FILENAME | SND_SYNC);
				}
				else if (b == 3)
				{
					cout << "\nPlaying:Sky Full of Stars\n";
					PlaySound(songs[5], NULL, SND_FILENAME | SND_SYNC);
				}
		}
		if (a == 3)
		{
			cout <<"\nLuis Bacalov\n\nNo.of Compositions : 151\n\nAvailable Songs :\n\n1.Django \n\nPress 1 to play" ;
			cin>>b;
			if (b==1)
			{
				cout << "\nPlaying:Django\n";
				PlaySound(songs[9], NULL, SND_FILENAME | SND_SYNC );
			}
			else { exit(0); }
		}
		if (a == 4)
		{
			cout << "\nQuevedo\n\nNo.of Compositions :43\n\nAvailable Songs :\n\n1.Quedate\n2.Punto G\n\nPress 1 or 2 to play";
			cin >> b;
			if (b == 1)
			{
				cout << "\nPlaying: Quedate\n";
				PlaySound(songs[7], NULL, SND_FILENAME | SND_SYNC);
			}
			else if (b == 2)
			{
				cout << "\nPlaying:Punto G";
				PlaySound(songs[8], NULL, SND_FILENAME | SND_SYNC);
			}
			else { exit(0); }
		}
		if (a == 5)
		{
			cout << "\nNatalie Holt\n\nNo.of Compositions : 63\n\nAvailable Music :\n\n1.Purpose is Glorious\n";
			cin >> b;
			if (b == 1)
			{
				cout << "\nPlaying: Purpose is Glorious\n";
				PlaySound(songs[3], NULL, SND_FILENAME | SND_SYNC);
			}
			else { exit(0); }
		}
		if (a == 6)
		{
			cout << "\nNicholas Britell\n\nNo.of Compositions :162\n\nAvailable Music :\n1Agape\n";
			cin >> b;
			if (b == 1)
			{
				cout << "\nPlaying: Agape\n";
				PlaySound(songs[4], NULL, SND_FILENAME | SND_SYNC);
			}
			else { exit(0); }
		}

	}
	
	return 0;
}
