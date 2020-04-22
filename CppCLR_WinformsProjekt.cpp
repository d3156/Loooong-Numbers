#include "pch.h"
#include <stddef.h>
#include <malloc.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include <windows.h>
#include <stdio.h>
#include <tchar.h>
#include <wchar.h>
#include <psapi.h>
int numbcpy(uint8_t *A, uint8_t *B, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		A[i] = B[i];
	}
	return 0;
}
int COM_NN_D(uint8_t* A, uint8_t* D, int n, int m)
{
	int i;
	if (n > m) return 2;
	if (n < m) return 1;
	for (i = n - 1; i >= 0; i--)
		if (A[i] > D[i]) return 2;
		else if (A[i] != D[i]) return 1;
	return 0;
}
int NZER_N_B(uint8_t* A, int n)
{
	return !((n == 1) && (A[0] == 0));
}
uint8_t* ADD_1N_N(uint8_t* A, int* n)
{
	int i, nn = *n, MAXSIZE_A = int(_msize(A));//check
	for (i = 0; i < nn; i++)
	{
		A[i]++;
		if (A[i] == 10) A[i] = 0;
		else return A;
	}
	uint8_t* temp = new uint8_t[MAXSIZE_A + 1];
	numbcpy(temp, A, nn);
	delete[] A;
	A = temp;
	A[nn] = uint8_t(1);
	*n = nn + 1;
	return A;
}
uint8_t* ADD_NN_N(uint8_t* A, uint8_t* B, int n, int m, int* p)
{
	uint8_t* temp; int tempint, i, x, MAX_temp, COM = COM_NN_D(A, B, n, m);
	if (COM == 1) { temp = A; A = B; B = temp; x = n; n = m; m = x; }
	x = 0;
	MAX_temp = n + 2;
	temp = new uint8_t[MAX_temp];
	for (i = 0; i < n; i++)
	{
		tempint = x + A[i];
		temp[i] = tempint;
		if (i < m) temp[i] += B[i];
		if (temp[i] >= 10) { x = 1; temp[i] -= 10; }
		else x = 0;
	}
	*p = n;
	if (x) { (*p)++; temp[n] = 1; }
	return temp;
}
uint8_t* SUB_NN_N(uint8_t* A, uint8_t* B, int n, int m, int* p)
{
	int i, flag = 1, x = 0;
	for (i = 0; i < n; i++)
	{
		x += A[i];
		if (i < m) x -= B[i];
		if (x < 0)
		{
			A[i] = x + 10;
			x = -1;
		}
		else {
			A[i] = x;
			x = 0;
			if (i > m) break;
		}
	}
	for (i = n - 1; i >= 0; i--)
		if (A[i]) {
			*p = i + 1;
			flag = 0;
			break;
		}
	if (flag) *p = 1;
	return A;
}
uint8_t* MUL_ND_N(uint8_t* A, int n, int a, int* p)
{
	int i, x, MAXSIZE_A = int(_msize(A)), r = 0, MAXSIZE_temp = n + 2; uint8_t* temp;
	if (a == 0) {
		temp = new uint8_t[2];
		temp[0] = 0;
		*p = 1;
		return temp;
	}
	temp = new uint8_t[MAXSIZE_temp];
	for (i = 0; i < MAXSIZE_temp - 2; i++)
	{
		x = ((A[i] * a + r) % 10);
		temp[i] = uint8_t(x);
		r = (A[i] * a + r) / 10;
	}
	if (r) {
		temp[MAXSIZE_temp - 2] = uint8_t(r % 10);
		n++;
	}
	*p = n;
	return temp;
}
uint8_t* MUL_Nk_N(uint8_t* A, int n, int k, int* p)//7
{
	int i, MAXSIZE_temp = n + k + 2; uint8_t* temp;
	if (k == 0) return MUL_ND_N(A, n, 1, p);
	temp = new uint8_t[MAXSIZE_temp];
	for (i = 0; i < MAXSIZE_temp - 2 - n; i++) temp[i] = uint8_t(0);
	for (int i = k; i < MAXSIZE_temp - 2; i++)
		temp[i] = uint8_t(A[i - k]);
	*p = n + k;
	return temp;
}
uint8_t* MUL_NN_N(uint8_t* A, uint8_t* B, int n, int m, int* p)
{
	int i, temp_n = 1, T_B = 1, MAXSIZE_temp = m + n + 2; uint8_t* x, * y, * temp;
	temp = new uint8_t[MAXSIZE_temp];
	temp[0] = 0;
	for (i = 0; i < n; i++)
	{
		x = MUL_ND_N(B, m, A[i], &T_B);
		y = MUL_Nk_N(x, T_B, i, &T_B);
		delete[] x; x = NULL;
		x = ADD_NN_N(y, temp, T_B, temp_n, &temp_n);
		delete[] y;	y = NULL;
		numbcpy(temp, x, temp_n);
		delete[] x;	x = NULL;
	}
	*p = temp_n;
	return temp;
}
uint8_t* SUB_NDN_N(uint8_t* A, uint8_t* B, int n, int m, int k, int* p)//9
{
	uint8_t* x, * y;
	x = MUL_ND_N(B, m, k, &m);
	y = SUB_NN_N(A, x, n, m, p);
	delete[] x;	x = NULL;
	return y;
}
int DIV_NN_Dk(uint8_t* A, uint8_t* B, int n, int m, int* k)//10
{
	int x, COM, res = 1, q = 1; uint8_t* temp, * temp1;
	*k = 0;
	COM = COM_NN_D(A, B, n, m);
	if (COM == 1) { temp = A; A = B; B = temp; x = n; n = m; m = x; }
	else if (COM == 0) return 1;
	x = n - m - 1;
	if (n == m) x = 0;
	*k = x;
	temp1 = MUL_Nk_N(B, m, x, &q);
	temp = MUL_Nk_N(B, m, x, &m);
	while (COM_NN_D(A, temp1, n, q) != 1)
	{
		res++;
		delete[] temp1;
		temp1 = NULL;
		if (res == 10) {
			temp1 = MUL_Nk_N(temp, m, 1, &m);
			delete[]temp;
			temp = temp1;
			res = 1;
			(*k)++;
		}
		temp1 = MUL_ND_N(temp, m, res, &q);
	}
	res--;
	delete[] temp; temp = NULL;
	delete[] temp1; temp1 = NULL;
	if (res == 0) { (*k)--; return 9; }
	return res;
}
uint8_t* DIV_NN_N(uint8_t* A, uint8_t* B, int n, int m, int* p)
{
	uint8_t i, * temp, * temp1, * temp2; int MAXSIZE_temp, t1, t2, q, x, k, COM = COM_NN_D(A, B, n, m);
	if (COM == 1) { temp = A; A = B; B = temp; x = n; n = m; m = x; }
	MAXSIZE_temp = n - m + 2;
	temp = new uint8_t[MAXSIZE_temp];
	if ((m == 1) && (B[0] <= 1)) {
		*p = n;
		numbcpy(temp, A, n);
		return temp;
	}
	for (i = 0; i < MAXSIZE_temp - 1; i++) temp[i] = uint8_t(0);
	q = 0;
	while (COM_NN_D(A, B, n, m) != 1)
	{
		x = DIV_NN_Dk(A, B, n, m, &k);
		temp1 = MUL_Nk_N(B, m, k, &t1);
		temp2 = MUL_ND_N(temp1, t1, x, &t2);
		delete[] temp1; temp1 = NULL;
		A = SUB_NN_N(A, temp2, n, t2, &n);
		delete[] temp2;	temp2 = NULL;
		if (k + 1 > q) q = k + 1;
		temp[k] = uint8_t(x);
	}
	*p = q;
	return temp;
}
uint8_t* MOD_NN_N(uint8_t** AA, uint8_t** BB, int n, int m, int* p)
{
	uint8_t* temp1, * temp2, * B = *BB, * A = *AA; int t1, t2, x, k, COM = COM_NN_D(A, B, n, m);
	if (COM == 1) { temp1 = A; A = B; B = temp1; x = n; n = m; m = x; }
	while (COM_NN_D(A, B, n, m) != 1)
	{
		x = DIV_NN_Dk(A, B, n, m, &k);
		temp1 = MUL_Nk_N(B, m, k, &t1);
		temp2 = MUL_ND_N(temp1, t1, x, &t2);
		delete[]temp1;
		temp1 = NULL;
		A = SUB_NN_N(A, temp2, n, t2, &n);
		delete[] temp2;
		temp2 = NULL;
	}
	*p = n;
	return A;
}
uint8_t* GCF_NN_N(uint8_t** AA, uint8_t** BB, int* n, int* m, int* p)
{
	int x, COM; uint8_t* temp;
	if (NZER_N_B(*AA, *n) + NZER_N_B(*BB, *m) < 2) { *p = 1; *AA[0] = 0;  return *AA; }
	COM = COM_NN_D(*AA, *BB, *n, *m);
	if (COM == 1) { temp = *AA; *AA = *BB; *BB = temp; x = *n; *n = *m; *m = x; }
	while (NZER_N_B(*BB, *m)) {
		*AA = MOD_NN_N(AA, BB, *n, *m, n);
		temp = *AA; *AA = *BB; *BB = temp; x = *n; *n = *m; *m = x;
	}
	*p = *n;
	return *AA;
}
uint8_t* LCM_NN_N(uint8_t** AA, uint8_t** BB, int n, int m, int* p)
{
	int x, t1, t2, m_temp, MAXSIZE_B_temp, MAXSIZE_temp, COM = COM_NN_D(*AA, *BB, n, m); uint8_t* temp, * B_temp, * temp1;
	if (COM == 1) { temp = *AA; *AA = *BB; *BB = temp; x = n; n = m; m = x; }
	MAXSIZE_temp = n + 1; t1 = n;
	temp = new uint8_t[MAXSIZE_temp];
	temp[0] = 0;
	*p = 1;
	if (!NZER_N_B(*BB, m)) return temp;
	numbcpy(temp, *AA, n);
	MAXSIZE_B_temp = m + 1;
	B_temp = new uint8_t[MAXSIZE_B_temp];
	numbcpy(B_temp, *BB, m);
	m_temp = m;
	temp = GCF_NN_N(&temp, &B_temp, &t1, &m_temp, &t1); delete[] B_temp; B_temp = NULL;
	temp1 = DIV_NN_N(*AA, temp, n, t1, &t2); delete[] temp; temp = NULL;
	temp = MUL_NN_N(temp1, *BB, t2, m, p); delete[]temp1; temp1 = NULL;
	return temp;
}

using namespace System;

#include "Form2.h"
using namespace System::Windows::Forms;

[STAThread]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew CppCLRWinformsProjekt::Form2()); 
	return 0;
}