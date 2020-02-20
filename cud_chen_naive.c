// The existing Tausworthe generators using naive slow generation
// Implemented by Shin Harase

// S. Chen, M. Matsumoto, T. Nishimura, A. B. Owen, 
// "New inputs and methods for Markov chain quasi-Monte Carlo",
// in: Monte Carloand quasi-Monte Carlo methods 2010, Vol. 23 of Springer Proc.
// Math. Stat., Springer, Heidelberg, 2012, pp. 313--327.
// doi:10.1007/978-3-642-27440-4_15.

#include <stdio.h>
#include <stdlib.h>

#define MAX_DEG 32
#define WORD_SIZE 32

unsigned int MSB[WORD_SIZE+1] = {
		0x80000000, 0x40000000, 0x20000000, 0x10000000, 0x8000000, 0x4000000, 0x2000000, 0x1000000,
		0x800000, 0x400000, 0x200000, 0x100000, 0x80000, 0x40000, 0x20000, 0x10000,
		0x8000, 0x4000, 0x2000, 0x1000, 0x800, 0x400, 0x200, 0x100,
		0x80, 0x40, 0x20, 0x10, 0x8, 0x4, 0x2, 0x1};
		
unsigned int p_chen[MAX_DEG+1][MAX_DEG+1] = {
{}, //deg = 0
{}, //deg = 1
{}, //deg = 2
{}, //deg = 3
{}, //deg = 4
{}, //deg = 5
{}, //deg = 6,
{}, //deg = 7
{}, //deg = 8
{}, //deg = 9
{1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1}, //deg = 10
{1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1}, //deg = 11
{1, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1}, //deg = 12
{1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1}, // deg = 13
{1, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1}, // deg = 14
{1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}, // deg = 15
{1, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}, // deg = 16
{1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}, // deg = 17
{1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}, // deg = 18
{1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}, // deg = 19
{1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}, // deg = 20
{1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}, // deg = 21
{1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}, // deg = 22
{1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}, // deg = 23
{1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}, // deg = 24
{1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}, // deg = 25
{1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}, // deg = 26
{1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}, // deg = 27
{1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}, // deg = 28
{1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}, // deg = 29
{1, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}, // deg = 30
{1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}, // deg = 31
{1, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1} // deg = 32
};

unsigned int q_chen[MAX_DEG+1][MAX_DEG+1] = {
{}, //deg = 0
{}, //deg = 1
{}, //deg = 2
{}, //deg = 3
{}, //deg = 4
{}, //deg = 5
{}, //deg = 6,
{}, //deg = 7
{}, //deg = 8
{}, //deg = 9
{1, 0, 1, 1, 1, 0, 0, 0, 1, 1}, // deg = 10, //deg = 10
{0, 1, 1, 1, 0, 0, 0, 1, 1}, // deg = 11, //deg = 11
{0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1}, //deg = 12
{0, 1, 1, 1, 0, 1, 0, 0, 0, 0, 1, 1, 1}, // deg = 13
{1, 1, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1}, // deg = 14
{0, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0, 1}, // deg = 15
{1, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1}, // deg = 16
{1, 1, 0, 0, 1, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 1, 1}, // deg = 17
{1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1}, // deg = 18
{0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 1}, // deg = 19
{1, 0, 1, 0, 1, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1}, // deg = 20
{0, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 1, 0, 1}, // deg = 21
{0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0, 0, 1}, // deg = 22
{0, 1, 1, 0, 1, 1, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 1, 0, 1, 0, 0, 0, 1}, // deg = 23
{0, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 0, 1, 0, 1, 1}, // deg = 24
{1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1}, // deg = 25
{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1}, // deg = 26
{1, 1, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 1}, // deg = 27
{1, 1, 0, 1, 0, 0, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 1}, // deg = 28
{0, 0, 0, 0, 0, 1, 1, 0, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0, 1}, // deg = 29
{1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 1, 1, 1, 0, 1}, // // deg = 30
{0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1}, // deg = 31
{1, 0, 0, 1, 0, 1, 0, 0, 1, 1, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1} // deg = 32
};

unsigned int tausworthe_full(unsigned int state, unsigned int *p, int m)
{
	int i, j;
	unsigned int x;
	
	for(i = 0; i < WORD_SIZE - m; i++)
	{
		x = 0;
		for(j = 0; j < m; j++)
			if(p[j] != 0)
				if((state & MSB[j+i]) != 0) x ^= MSB[m+i];
		state = (state ^ x);
	}
	return state;
}

unsigned int tausworthe_next(unsigned int state, unsigned int *p, int m)
{
	int i;
	unsigned int x = 0;
	
	for(i = 0; i < m; i++)
		if(p[i] != 0)
			if((state & MSB[i+WORD_SIZE-m]) != 0) x ^= MSB[WORD_SIZE-1]; //if((state & MSB[i]) != 0) x ^= MSB[m-1];
	x ^= (state << 1);
	return x;
}

unsigned int tausworthe_jump(unsigned int state, unsigned int * p, unsigned int *q, int m)
{
	int i, j;
	unsigned int x = 0;
	unsigned int y = 0;
	
	for(i = 0; i < m; i++)
	{
		if(q[i] != 0)
		{
			y = state;
			for(j = 0; j < i; j++) y = tausworthe_next(y, p, m);
			x ^= y;
		}
	}
	return x;
}

unsigned int tausworthe_chen(int m)
{	
	static int i = 0, j;
	static unsigned int state;
	static unsigned int p[MAX_DEG+1];
	static unsigned int q[MAX_DEG+1];
	
	if(i == 0)
	{
		for(j = 0; j <= m; j++)
		{
			p[j] = p_chen[m][j];
			q[j] = q_chen[m][j];
		}
		state = MSB[m-1];
		state = tausworthe_full(state, p, m);
		i = 1;
		return state;
	}
	state = tausworthe_jump(state, p, q, m);
	return state;
}

int main(int argc,char *argv[])
{
  unsigned int i;
  unsigned int m, N;
  int w = 32; //WORD_SIZE
  
  m = atoi(argv[1]);
  N = (0xffffffff >> (w - m)); // N = 2^m-1
  
  for(i = 0; i < N; i++) printf("%10.8f\n", tausworthe_chen(m)*(1.0/4294967296.0));
  
  return 0;
}

