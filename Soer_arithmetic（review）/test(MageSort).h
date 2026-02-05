#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void IsertSort(int* a, int n);
void PrintSort(int* a, int n);
void ShellSort(int* a, int n);
void SelectSort(int* a, int n);
void QuickSort(int* a, int left, int right);
void MageSort(int* a, int n);
void _MageSort(int* a, int* tmp, int begin, int end);
void MageSortNonR(int* a, int n);
