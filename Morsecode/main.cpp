#include<iostream>
#include<string>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<ctype.h>
#include<bits/stdc++.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<iomanip>
#define CLRSCR  system(“cls”);

using namespace std;

int shipno;

void MorseDict()
{system("cls");
    cout<<"\t\t WELCOME TO MORSE DICTIONARY\t\t\n";
    cout<<"A: .-    \t J: .---  \t S: ... \n";
    cout<<"B: -...  \t K: -.-   \t T: - \n";
    cout<<"C: -.-.  \t L: .-..  \t U: ..- \n";
    cout<<"D: -..   \t M: --    \t V: ...- \n";
    cout<<"E: .     \t N: -.    \t W: .-- \n";
    cout<<"F: ..-.  \t O: ---   \t X: -..- \n";
    cout<<"G: --.   \t P: .--.  \t Y: -.-- \n";
    cout<<"H: ....  \t Q: --.-  \t Z: --.. \n";
    cout<<"I: ..    \t R: .-.   \t  \n";
    cout<<"1: .---- \t 2: ..--- \t 3: ...--\n";
    cout<<"4: ....- \t 5: ....- \t 6: -....\n";
    cout<<"7: --... \t 8: ---.. \t 9: ----.\n";
    cout<<"0: ----- \t ,: --..--\t ?: ..--..\n";

}


string EngtoMorse(char letter)
{
    switch(letter)
    {
        case 'a': case 'A':
        return ".-"; break;
        case 'b': case 'B':
        return "-..."; break;
        case 'c': case 'C':
        return "-.-."; break;
        case 'd': case 'D':
        return "-.."; break;
        case 'e': case 'E':
        return "."; break;
        case 'f': case 'F':
        return "..-."; break;
        case 'g': case 'G':
        return "--."; break;
        case 'h': case 'H':
        return "...."; break;
        case 'i': case 'I':
        return ".."; break;
        case 'j': case 'J':
        return ".---"; break;
        case 'k': case 'K':
        return "-.-"; break;
        case 'l': case 'L':
        return ".-.."; break;
        case 'm': case 'M':
        return "--"; break;
        case 'n': case 'N':
        return "-."; break;
        case 'o': case 'O':
        return "---"; break;
        case 'p': case 'P':
        return ".--."; break;
        case 'q': case 'Q':
        return "--.-"; break;
        case 'r': case 'R':
        return ".-."; break;
        case 's': case 'S':
        return "..."; break;
        case 't': case 'T':
        return "-"; break;
        case 'u': case 'U':
        return "..-"; break;
        case 'v': case 'V':
        return "...-"; break;
        case 'w': case 'W':
        return ".--"; break;
        case 'x': case 'X':
        return "-..-"; break;
        case 'y': case 'Y':
        return "-.--"; break;
        case 'z': case 'Z':
        return "--.."; break;
        case '1':
		return ".----"; break;
		case '2':
	    return "..---"; break;
	    case '3':
	    return "...--"; break;
	    case '4':
	    return "....-"; break;
	    case '5':
	    return "....."; break;
		case '6' :
		return "-...."; break;
		case '7':
		return "--..."; break;
		case '8':
		return "---.."; break;
		case '9':
		return "----."; break;
		case '0':
		return "-----"; break;
		case ',':
		return "--..--"; break;
		case '?':
		return "..--.."; break;
        default:
        return " "; break;
    }
}


void convert(char str[])
{
    vector<string>tokens;


string Morse [41] = {".-", "-...", "-.-.", "-..",".", "..-.", "--.", "....", "..", ".---",
                   "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
                   "..-", "...-", ".--", "-..-", "-.--", "--..", ".----", "..---", "...--",
                   "....-", ".....", "-....", "--...", "---..", "----.", "-----", ".-.-.-",
                   "--..--", "..--.."};


string Letter [41] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J",
                    "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T",
                    "U", "V", "W", "X", "Y", "Z", "1", "2", "3", "4",
                    "5", "6", "7", "8", "9", "0", " ", ",", "?"};

cin.ignore();


char *token =strtok(str," ");
int y=0;
string a;
while(token!=NULL)
{
    a=token;
     for(int y = 0; y < 41; y++)
   {

     if(a == Morse[y])
                 {
                     cout << Letter[y];
                     break;
                 }}
  //  printf("%s\n",token);}
    token=strtok(NULL," ");
}


    cout << "\n";
 }


class harbour
{
public:
int person, ship;
void getdata();
void admiral();
void commod_admiral();
void commodoreaction();
void command_commod();
void commanderaction();
void liute_command();
void liutenantaction();
void mid_liute();
void midshipmanaction();
};


void harbour::getdata()
{
cout<<endl<<setw(85)<<"INDIAN NAVY";
cout<<endl<<setw(87)<<"Harbour's screen";
cout<<endl<<" Which ship do you want to contact (ship no : 1-5) " ;
cin>>ship;
cout<<endl<<" Whom do you want to contact "<<endl<<"   1 - Admiral"<<endl<<"   2 - Commodore"<<endl<<"   3 - Commander"<<endl<<"   4 - Liutenant"<<endl<<"   5 - Midshipman"<<endl<<"             ";
cin>>person;
}
void harbour::admiral()
{
system("cls");
cout<<endl<<setw(85)<<"INDIAN NAVY";
cout<<endl<<setw(87)<<"Harbour's screen";
cout<<endl<<" Code finaly recieved by admiral of Ship "<<shipno;
cout<<endl<<endl<<" THANK YOU";
}
void harbour::commod_admiral()
{char harans;
	system("cls");
	cin.ignore();
cout<<endl<<setw(85)<<"INDIAN NAVY";
cout<<endl<<setw(87)<<"Harbour's screen";
cout<<endl<<" Commodore of ship "<<shipno<<" is not able to decode"<<endl<<" Code passing to admiral of ship "<<shipno<<"...................  Please wait... "<<endl;
Sleep(6000);
}
void harbour::commodoreaction()
{
	system("cls");
cout<<endl<<setw(85)<<"INDIAN NAVY";
cout<<endl<<setw(87)<<"Harbour's screen";
cout<<endl<<" Action taken by commodore of Ship "<<shipno;
cout<<endl<<endl<<" THANK YOU";
}
void harbour::command_commod()
{char harans;
	system("cls");
	cin.ignore();
cout<<endl<<setw(85)<<"INDIAN NAVY";
cout<<endl<<setw(87)<<"Harbour's screen";
cout<<endl<<" Commander of ship "<<shipno<<" is not able to decode"<<endl<<" Code passing to commodore of ship "<<shipno<<"...................  Please wait... "<<endl;
Sleep(6000);
}
void harbour::commanderaction()
{
system("cls");
cout<<endl<<setw(85)<<"INDIAN NAVY";
cout<<endl<<setw(87)<<"Harbour's screen";
cout<<endl<<" Action taken by commander of ship "<<shipno;
cout<<endl<<endl<<" THANK YOU";
}
void harbour::liute_command()
{
char harans;
	system("cls");
	cin.ignore();
cout<<endl<<setw(85)<<"INDIAN NAVY";
cout<<endl<<setw(87)<<"Harbour's screen";
cout<<endl<<" Liutenant of ship "<<shipno<<" is not able to decode"<<endl<<" Code passing to commander of ship "<<shipno<<"...................  Please wait... "<<endl;
Sleep(6000);
}
void harbour::liutenantaction()
{
system("cls");
cout<<endl<<setw(85)<<"INDIAN NAVY";
cout<<endl<<setw(87)<<"Harbour's screen";
cout<<endl<<" Action taken by liutenant of ship "<<shipno;
cout<<endl<<endl<<" THANK YOU";
}

void harbour::mid_liute()
{
char harans;
	system("cls");
	cin.ignore();
cout<<endl<<setw(85)<<"INDIAN NAVY";
cout<<endl<<setw(87)<<"Harbour's screen";
cout<<endl<<" Midshipman of ship "<<shipno<<" is not able to decode"<<endl<<" Code passing to liutenant of ship "<<shipno<<"...................  Please wait... "<<endl;
Sleep(6000);
}

void harbour::midshipmanaction()
{
system("cls");
cout<<endl<<setw(85)<<"INDIAN NAVY";
cout<<endl<<setw(87)<<"Harbour's screen";
cout<<endl<<" Action taken by midshipmen of ship "<<shipno;
cout<<endl<<endl<<" THANK YOU";
}




////////////////////////////////////////////////////////                       SHIP
class ship :public harbour
{
char action;
int pass;
public:
void admiralans(char a[]);
void commodoreans(char a[]);
void commanderans(char a[]);
void liutenantans(char a[]);
void midshipmanans(char a[]);
};


void ship::admiralans(char a[])
{
system("cls");
cout<<endl<<setw(85)<<"INDIAN NAVY";
cout<<endl<<setw(83)<<"Ship - "<<shipno;
cout<<endl<<setw(87)<<"Admiral's device";
cout<<endl<<"Code from harbour : ";
cout<<a;
Sleep(5000);
admiral();

}


void ship::commodoreans(char a[])
{
	char b[100];
strcpy(b,a);
	system("cls");
cout<<endl<<setw(85)<<"INDIAN NAVY";
cout<<endl<<setw(83)<<"Ship - "<<shipno;
cout<<endl<<setw(87)<<"Commodore's device";
printf("\n Code from harbour : ");
cout<<a;
cout<<endl<<" To get the decoded message enter the password : ";
cin>>pass;

int k=0;
for(int i=0; i<3;i++)
if(pass == 123)
{k++;
cout<<" Decoded message : ";
convert(a);
break;
}
else if(i<2)
{cout<<" Wrong Password - try again : ";
cin>>pass;
}
if(k!=0)
{
cout<<" Will you be able to take actions y or n : ";
cin>>action;
}
else
{
commod_admiral();
admiralans(b);
}
if(action =='n')
{
commod_admiral();
admiralans(b);}
else if(action =='y')
commodoreaction();
}


void ship::commanderans(char a[])
{
	char b[100];
strcpy(b,a);
	system("cls");
cout<<endl<<setw(85)<<"INDIAN NAVY";
cout<<endl<<setw(83)<<"Ship - "<<shipno;
cout<<endl<<setw(87)<<"Commoander's device";
printf("\n Code from harbour : ");
cout<<a;
cout<<endl<<" To get the decoded message enter the password : ";
cin>>pass;

int k=0;
for(int i=0; i<3;i++)
if(pass == 123)
{k++;
cout<<" Decoded message : ";
convert(a);
break;
}
else if(i<2)
{cout<<" Wrong Password - try again : ";
cin>>pass;
}
if(k!=0)
{
cout<<" Will you be able to take actions y or n : ";
cin>>action;
}
else
{
command_commod();
commodoreans(b);
}
if(action =='n')
{
command_commod();
commodoreans(b);}
else if(action =='y')
commanderaction();
}


void ship::liutenantans(char a[])
{
	char b[100];
strcpy(b,a);
	system("cls");
cout<<endl<<setw(85)<<"INDIAN NAVY";
cout<<endl<<setw(83)<<"Ship - "<<shipno;
cout<<endl<<setw(87)<<"Liutenant's device";
printf("\n Code from harbour : ");

cout<<a;
cout<<endl<<" To get the decoded message enter the password : ";
cin>>pass;

int k=0;
for(int i=0; i<3;i++)
if(pass == 123)
{k++;
cout<<" Decoded message : ";
convert(a);
break;
}
else if(i<2)
{cout<<" Wrong Password - try again : ";
cin>>pass;
}
if(k!=0)
{
cout<<" Will you be able to take actions y or n : ";
cin>>action;
}
else
{
liute_command();
commanderans(b);
}
if(action =='n')
{
liute_command();
commanderans(b);}
else if(action =='y')
liutenantaction();
}



void ship::midshipmanans(char a[])
{
char b[100];
strcpy(b,a);
	system("cls");
cout<<endl<<setw(85)<<"INDIAN NAVY";
cout<<endl<<setw(83)<<"Ship - "<<shipno;
cout<<endl<<setw(87)<<"Midshipman's device";
printf("\n Code from harbour : ");
cout<<a;
cout<<endl<<" To get the decoded message enter the password : ";
cin>>pass;

int k=0;
for(int i=0; i<3;i++)
if(pass == 123)
{k++;
cout<<" Decoded message : ";
convert(a);
break;
}
else if(i<2)
{cout<<" Wrong Password - try again : ";
cin>>pass;
}
if(k!=0)
{
cout<<" Will you be able to take actions y or n : ";
cin>>action;
}
else
{
mid_liute();
commanderans(b);
}
if(action =='n')
{
mid_liute();
commanderans(b);
}
else if(action =='y')
midshipmanaction();
}



int main()
{
char op;
int choice;



    do
    {system("cls");
    cout<<"\t\tWELCOME TO MORSE CODE TRANSLATOR\t\t\n";
    cout<<" 1.Morse Code Dictionary\n";
    cout<<" 2.English word to Morse Code.\n";
    cout<<" 3.Morse code to English Word.\n";
    cout<<" Enter your choice:";
    cin>>choice;

    switch(choice)
    {
    	case 1: MorseDict();
        break;
        case 2:
		{system("cls");
            string input;
            string output = "";
            cout<<" Enter the word:";
            cin>>input;
            for(int i=0;i<input.length();i++)
            {
                if(i!=0)
                {
                    output+=" ";
                }
                output = output + EngtoMorse(input[i]);
            }
            cout<<" Morse Code translation for the given word is \n";
            cout << output << endl;
        }
	break;
    case 3:
    {system("cls");
cout<<" Here we will be seeing an application of Morse code that is the usage of morse code in ships to convey messages."<<endl;
harbour h;
char str[100];
h.getdata();
 cin.ignore();

cout <<endl<<" Enter a Coded Morse Message (e.g. .- -... -.-.)";
cout << "\nSeparate Morse Code by blanks:   ";
cin.getline(str,100);
if(h.ship==1)
shipno=1;
else if(h.ship==2)
shipno=2;
else if(h.ship==3)
shipno=3;
else if(h.ship==4)
shipno=4;
else
shipno=5;

ship s;
switch(h.person)
{
case 1: s.admiralans(str);
break;
case 2: s.commodoreans(str);
break;
case 3: s.commanderans(str);
break;
case 4: s.liutenantans(str);
break;
case 5: s.midshipmanans(str);
break;
}
}
break;
}
cout<<endl<<"------------------------------------------------------------------------------------------------------------------------------";
cout<<endl<<" Do you want to continue y or n"<<endl;
cin>>op;
}while(op=='y');
return 0;
}
