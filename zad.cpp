#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include "sha1.c"
#include "base64.c"
using namespace std;
int main()
{
    ifstream plik;
    string line;
    plik1.open("test.txt");
    for(int i=0; i<6; i++)
	{
        	getline(plik,line);
    	}
    plik.close();
    char* char_arr;
    string str_obj(line);
    char_arr = &str_obj[0];
    cout<<char_arr;

    char *magicTest = "258EAFA5-E914-47DA-95CA-C5AB0DC85B11"; 
    char shaSource[128] = char_arr;
    strcat(shaSource, magicTest); 
    printf("String kodowany: [%s]\n", shaSource);
    char result[32];
    SHA1(result, shaSource, strlen(shaSource) ); 
    char base64string[128];
    Base64encode(base64string, result, strlen(result)); 
    printf("Po zakodowaniu to [%s] - dlugosc %i bajtow", base64string, strlen(base64string)); 
    return 0;
 }
