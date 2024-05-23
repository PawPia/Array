//
// Created by pawel on 23.05.2024.
//

#ifndef ARRAY_ARRAY_H
#define ARRAY_ARRAY_H
#define SIZE 10
void displayArray(int array[]);

void displayArray(int *array);

void enterDataIntoArray(int array[]) ;

int FindMaximumValue(int array[]) ;

int FindMinimumValue(int array[]) ;

float CalculateAverage(int array[]) ;

int saveArrayToFile(int array[]);

int restoreArrayFromFile(int array[]);

#endif //ARRAY_ARRAY_H
