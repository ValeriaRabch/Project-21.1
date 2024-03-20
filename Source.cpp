#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>

using namespace std;

char* MostFrequentString(char* link) {
	FILE* file;
	file = fopen(link, "r");

	int end = Line(link);
	char arr[50][30];
	int* line = new int(end);

	FullMassive(link, arr, end);

	for (int i = 0; i < end; i++) {
		line[i] = 0;
	}

	for (int i = 0; i < end; i++) {
		for (int j = 0; j < end; j++) {
			if (i != j) {
				if (strcmp(arr[i], arr[j]) == 0) {
					line[i]++;
				}
			}
		}
	}

	fclose(file);

	return arr[Max(line, end)];
}

int main() {
	
	char link[] = { "d:\\Valeria\\file.txt" };
	cout << MostFrequentString(link);
	
	return 0;
}