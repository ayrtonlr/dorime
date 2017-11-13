#include <fstream>
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

struct Person {
	string	id;
	string	name;
	string	cel;
   	string   period;
};

int main() {
   const int MAX = 10000;
   int i, i1;
   string str1, str2;

   ifstream fin1, fin2;
   ofstream fout;
   
   char * infile1 = (char*)"list.txt";
   char * infile2 = (char*)"template.txt";
   char * outfile = (char*)"merge.txt";

   char ach[MAX];

   cout << "Abrindo arquivo de entrada list.txt ..." << endl;
   fin1.open( infile1 , ios::in );
   if ( !fin1.is_open( ) )
   	return (0);

   cout << "Abrindo arquivo de entrada template.txt ..." << endl;
   fin2.open( infile2 , ios::in );
   if ( !fin2.is_open( ) ) {
   	fin1.close( );
   	return (0);
   }

   memset( ach , 0 , MAX );
   cout << "Leitura do arquivo de entrada template.txt ..." << endl;
   fin2.read( ach , MAX );
   cout << "Fechando o arquivo de entrada template.txt ..." << endl;
   fin2.close( );

   str1 = ach;

   cout << "Abrindo arquivo de saida merge.txt ..." << endl;
   fout.open( outfile , ios::app ); // append
   if ( !fout.is_open( ) ) {
   	fin1.close( );
	return (0);
   }

   cout << "Leitura de todos os nomes do arquivo de entrada list.txt, e" <<
           " utilizacao dos dados lidos do arquivo template.txt para gerar os" <<
           " dados a serem escritos no arquivo de saida merge.txt" << endl;
   // Read all names from the list file
   Person person;
   while ( !fin1.eof( ) ) {
   	fin1 >> person.honorific ;
	fin1 >> person.first;
	fin1 >> person.last;

	if ( person.honorific.length( ) > 0 ) {
		str2 = str1 ;  // working copy of text.txt

		while (1)	{
			int pos = 0;
			pos= str2.find( "<FIRSTNAME>" , pos + 1 );
			if ( pos == -1 ) break;
			str2.replace( pos , 11 , person.first );
			pos = 0;
			pos = str2.find( "<LASTNAME>" , pos + 1 );
			if ( pos == -1 ) break ;
			str2.replace( pos , 10 , person.last );
			pos = 0;
			pos = str2.find( "<HONORIFIC>" , pos + 1 );
			if ( pos == -1 ) break;
			str2.replace( pos , 11 , person.honorific );
		}
        cout << "Escrita no arquivo de saida merge.txt ..." << endl;
		fout << str2 << endl;
	}
   } // fim while

   cout << "Fechando o arquivo de entrada list.txt ..." << endl;
   fin1.close( );
   cout << "Fechando o arquivo de saida merge.txt ..." << endl;
   fout.close( );
   return 0;
}


