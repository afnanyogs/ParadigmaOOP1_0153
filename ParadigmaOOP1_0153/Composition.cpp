#include<iostream>
#include<string>
using namespace std;

#include"Jantung.H"
#include"Manusia.H"

int main() {
	manusia* varManusia = new manusia("jono");
	delete varManusia;
	return 0;