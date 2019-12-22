/* -----------------------------------------------
Program 		:	Papan permainan.c
Deskripsi		: 	Modul Tampilan Papan 3x3 + fullscreen
Author 			: 	Irsyad Muhammad (191524014)
Versi/tanggal	: 	21/12/2019 
Compiler 		:	TDM-GCC 4.9.6.2 64-bit release
---------------------------------------------------*/
#include<stdio.h>
#include<conio.h>
#include<windows.h>

/*Inisialisasi*/
void board3();
void gotoxy(int x, int y);

void fullscreen(){
	keybd_event(VK_MENU,0x38,0,0);
	keybd_event(VK_RETURN,0x1c,0,0);
	keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
	keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
}

void gotoxy(int x, int y){
//modul untuk memfungsikan fungsi gotoxy	
	HANDLE hConsoleOutput;  
	COORD dwCursorPosition;  
	dwCursorPosition.X = x;  
	dwCursorPosition.Y = y;  
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);  
	SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);   
}

void board3(){
//Author	: Irsyad Muhammad

//Procedure untuk menampilkan papan ukuran 3x3
//I.S	: Layar menampilkan pilihan sebelum modul board3
//F.S	: Ditampilkan papan dengan grid 3x3
		
	/*TAMPILAN PAPAN*/
	gotoxy(70,10);printf("|     |\n");
	gotoxy(70,11);printf("|     |\n");
	gotoxy(65,12);printf("_____|_____|_____\n");
	gotoxy(70,13);printf("|     |\n");
	gotoxy(70,14);printf("|  0  |\n");	
	gotoxy(65,15);printf("_____|_____|_____\n");
	gotoxy(70,16);printf("|     |\n");
	gotoxy(70,17);printf("|     |\n");
	gotoxy(70,18);printf("|     |\n");
	/*END TAMPILAN PAPAN*/
}

int main(){
	fullscreen();
	board3();

}