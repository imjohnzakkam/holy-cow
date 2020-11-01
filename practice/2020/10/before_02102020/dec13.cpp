#include<bits/stdc++.h>

int n;

struct Heap
{
	int arr[n];
	int last; 
    int z[n];
};
struct Heap H;
void insert(int p);
int main()
{
    cin >> n;
// create empty heap
	H.last = 0;
	for(int i=0;i<n;i++)
    {

    }	
	for(int i = 1;i <= H.last;++i)
		printf("%d ", H.arr[i]);
	for(int i = 1;i <= H.last;++i)
		printf("%d ", H.arr[i]);
    return 0;
}

void insert(int p)
{
	H.last++;
	H.arr[H.last] = p;
	int t = H.last;
	while((t/2 >= 1) && (H.arr[t] >= H.arr[t / 2]))
	{
		H.arr[t] = H.arr[t] ^ H.arr[t/2];
		H.arr[t/2] = H.arr[t] ^ H.arr[t/2];
		H.arr[t] = H.arr[t] ^ H.arr[t/2];
		t /= 2;
	}
}
