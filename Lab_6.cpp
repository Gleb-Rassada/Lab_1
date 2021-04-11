#include <iostream>
using namespace std;

struct Branch
{
	int Data;
	Branch* LeftBranch; 
	Branch* RightBranch;
	Branch* MiddleBranch;
};

void Add(int aData, Branch*& aBranch)
{
	if (!aBranch)
	{ 
		aBranch = new Branch;
		aBranch->Data = aData;
		aBranch->LeftBranch = 0;
		aBranch->RightBranch = 0;
		aBranch->MiddleBranch = 0;
		return;
	}
	else {
		if (aBranch->Data > aData)
		{ 
			Add(aData, aBranch->LeftBranch);
		}
		else if (aBranch->Data < aData)
		{
			Add(aData, aBranch->RightBranch);
		}
		else if (aBranch->Data == aData)
		{
			Add(aData, aBranch->MiddleBranch);
		}
	}
}

void is_Empty(Branch*& aBranch)
{
	if (!aBranch)
	{
		cout << "Дерево пустое";
	}
	else
	{
		cout << "Дерево не пустое";
	}
}

void FreeTree(Branch* aBranch)
{
	if (!aBranch) return;
	FreeTree(aBranch->LeftBranch);
	FreeTree(aBranch->MiddleBranch);
	FreeTree(aBranch->RightBranch);
	delete aBranch;
	return;
}

int main()
{
	setlocale(LC_ALL, "rus");
	Branch* Root = 0;
	int size;
	int element;

	cout << "Введите кол-во элементов для будущего дерева: ";
	cin >> size;
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Введите " << i+1 << " элемент: ";
		cin >> element;
		Add(element, Root);
	}
	cout << endl;
	is_Empty(Root);
	FreeTree(Root);
	return 0;
}