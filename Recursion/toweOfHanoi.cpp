// Tower Of Hanoi
// this is a special program in which there are three towers associated with some disks of sizes in ascending order
// task is to move disks from first tower to last by following the rules associated with it
// rule 1 :only one disk can be moved at a time
// rule 2 : larger disk can't be placed above smaller
// rule 3 : only top disk of tower can be moved

#include<iostream>
using namespace std;

void toh(int n, char from_rod, char aux_rod, char to_rod)
{
	if(n == 1)
	{
		cout << "Move disk 1 form " << from_rod <<" to " << to_rod << endl;
		return;
	}
	
	
	toh(n-1, from_rod, to_rod, aux_rod);
	cout << "Move disk " << n << " from " << from_rod << " to " << to_rod << endl;
	toh(n-1, aux_rod, from_rod, to_rod);
}


int main()
{
	int n = 3;
	toh(n, 'A', 'B', 'C');
	return 0;
}
