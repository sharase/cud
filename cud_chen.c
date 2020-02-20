// The existing Tausworthe generators using fast state transition
// Originally implemented by Makoto Matsumoto and Takuji Nishimura,
// and modifed with 32-bit precision by Shin Harase

// S. Chen, M. Matsumoto, T. Nishimura, A. B. Owen, 
// "New inputs and methods for Markov chain quasi-Monte Carlo",
// in: Monte Carloand quasi-Monte Carlo methods 2010, Vol. 23 of Springer Proc.
// Math. Stat., Springer, Heidelberg, 2012, pp. 313--327.
// doi:10.1007/978-3-642-27440-4_15.

#include <stdio.h>
#include <stdlib.h>

unsigned int rng10(void); /* 2^10-1 */
unsigned int rng11(void); /* 2^11-1 */
unsigned int rng12(void); /* 2^12-1 */
unsigned int rng13(void); /* 2^13-1 */
unsigned int rng14(void); /* 2^14-1 */
unsigned int rng15(void); /* 2^15-1 */
unsigned int rng16(void); /* 2^16-1 */
unsigned int rng17(void); /* 2^17-1 */
unsigned int rng18(void); /* 2^18-1 */
unsigned int rng19(void); /* 2^19-1 */
unsigned int rng20(void); /* 2^20-1 */
unsigned int rng21(void); /* 2^21-1 */
unsigned int rng22(void); /* 2^22-1 */
unsigned int rng23(void); /* 2^23-1 */
unsigned int rng24(void); /* 2^24-1 */
unsigned int rng25(void); /* 2^25-1 */
unsigned int rng26(void); /* 2^26-1 */
unsigned int rng27(void); /* 2^27-1 */
unsigned int rng28(void); /* 2^28-1 */
unsigned int rng29(void); /* 2^29-1 */
unsigned int rng30(void); /* 2^30-1 */
unsigned int rng31(void); /* 2^31-1 */
unsigned int rng32(void); /* 2^32-1 */

static unsigned int state10 = 0x2bdd4dc8U;
static unsigned int state11 = 0xefea0845U;
static unsigned int state12 = 0xf0501f60U;
static unsigned int state13 = 0x7078a635U;
static unsigned int state14 = 0xefeac8c0U;
static unsigned int state15 = 0x9e5945d7U;
static unsigned int state16 = 0x5d97759fU;
static unsigned int state17 = 0x9913a8c7U;
static unsigned int state18 = 0x197ba92bU;
static unsigned int state19 = 0x6adee9f8U;
static unsigned int state20 = 0xdcaf539dU;
static unsigned int state21 = 0xfaf97888U;
static unsigned int state22 = 0x72e32e5cU;
static unsigned int state23 = 0xe4dda4feU;
static unsigned int state24 = 0x5a42779U;
static unsigned int state25 = 0x3fdb4ae0U;
static unsigned int state26 = 0xe9de19baU;
static unsigned int state27 = 0x18349a29U;
static unsigned int state28 = 0x3a46ca1eU;
static unsigned int state29 = 0x45cdd9baU;
static unsigned int state30 = 0xb37f795cU;
static unsigned int state31 = 0x22b1cbd2U;
static unsigned int state32 = 0x994b2006U;

/* 2^10-1 */
unsigned int rng10(void)
{
  int i;
  unsigned int x,t;
  unsigned int mat[10] = {
     0xe37e23cfU, 0x71bf11e7U, 0xb8df88f3U, 0xbf11e7b6U, 0xdf88f3dbU, 
     0x6fc479edU, 0x37e23cf6U, 0x1bf11e7bU, 0x8df88f3dU, 0xc6fc479eU
     };

  t = 0x80000000U;
  x = 0U;
  for (i=0; i<10; i++) {
    if ((state10 & t) != 0)
      x ^= mat[i];
    t >>= 1;
  }
  state10 = x;

  return state10;
}

/* 2^11-1 */
unsigned int rng11(void)
{
  int i;
  unsigned int x,t;
  unsigned int mat[11] = {
     0x18ef6a58U, 0x8c77b52cU, 0xded4b0ceU, 0xef6a5867U, 0x77b52c33U, 
     0x3bda9619U, 0x1ded4b0cU, 0x8ef6a586U, 0xc77b52c3U, 0x63bda961U, 
     0x31ded4b0U
     };

  t = 0x80000000U;
  x = 0U;
  for (i=0; i<11; i++) {
    if ( state11 & t )
      x ^= mat[i];
    t >>= 1;
  }
  state11 = x;

  return state11;
}

/* 2^12-1 */
unsigned int rng12(void)
{
  int i;
  unsigned int x,t;
  unsigned int mat[12] = {
     0x5ecbd153U, 0x71ae39faU, 0xb8d71cfdU, 0xdc6b8e7eU, 0xb0fe166cU, 
     0xd87f0b36U, 0xb2f454c8U, 0xd97a2a64U, 0xecbd1532U, 0xf65e8a99U, 
     0x7b2f454cU, 0xbd97a2a6U
     };

  t = 0x80000000U;
  x = 0U;
  for (i=0; i<12; i++) {
    if ( state12 & t )
      x ^= mat[i];
    t >>= 1;
  }
  state12 = x;

  return state12;
}

/* 2^13-1 */
unsigned int rng13(void)
{
  int i;
  unsigned int x,t;
  unsigned int mat[13] = {
     0x7098e703U, 0xc8d49482U, 0xe46a4a41U, 0x82adc223U, 0x31ce0612U, 
     0x98e70309U, 0x4c738184U, 0x2639c0c2U, 0x131ce061U, 0x98e7030U, 
     0x84c73818U, 0xc2639c0cU, 0xe131ce06U
     };

  t = 0x80000000U;
  x = 0U;
  for (i=0; i<13; i++) {
    if ( state13 & t )
      x ^= mat[i];
    t >>= 1;
  }
  state13 = x;

  return state13;
}

/* 2^14-1 */
unsigned int rng14(void)
{
  int i;
  unsigned int x,t;
  unsigned int mat[14] = {
     0xce6bb25cU, 0xa95e6b72U, 0x54af35b9U, 0x643c2880U, 0x321e1440U, 
     0xd764b87cU, 0x6bb25c3eU, 0x35d92e1fU, 0x9aec970fU, 0xcd764b87U, 
     0xe6bb25c3U, 0x735d92e1U, 0x39aec970U, 0x9cd764b8U
     };

  t = 0x80000000U;
  x = 0U;
  for (i=0; i<14; i++) {
    if ( state14 & t )
      x ^= mat[i];
    t >>= 1;
  }
  state14 = x;

  return state14;
}

/* 2^15-1 */
unsigned int rng15(void)
{
  int i;
  unsigned int x,t;
  unsigned int mat[15] = {
     0x26c6d696U, 0xb5a5bdddU, 0xdad2deeeU, 0x6d696f77U, 0x36b4b7bbU, 
     0x1b5a5bddU, 0x8dad2deeU, 0xc6d696f7U, 0x636b4b7bU, 0xb1b5a5bdU, 
     0xd8dad2deU, 0x6c6d696fU, 0x3636b4b7U, 0x9b1b5a5bU, 0x4d8dad2dU
     };

  t = 0x80000000U;
  x = 0U;
  for (i=0; i<15; i++) {
    if ( state15 & t )
      x ^= mat[i];
    t >>= 1;
  }
  state15 = x;

  return state15;
}

/* 2^16-1 */
unsigned int rng16(void)
{
  int i;
  unsigned int x,t;
  unsigned int mat[16] = {
     0xd14d37b6U, 0x68a69bdbU, 0x651e7a5bU, 0xe3c20a9bU, 0x71e1054dU, 
     0x69bdb510U, 0x34deda88U, 0x9a6f6d44U, 0x4d37b6a2U, 0xa69bdb51U, 
     0x534deda8U, 0x29a6f6d4U, 0x14d37b6aU, 0x8a69bdb5U, 0x4534dedaU, 
     0xa29a6f6dU
     };

  t = 0x80000000U;
  x = 0U;
  for (i=0; i<16; i++) {
    if ( state16 & t )
      x ^= mat[i];
    t >>= 1;
  }
  state16 = x;

  return state16;
}

/* 2^17-1 */
unsigned int rng17(void)
{
  int i;
  unsigned int x,t;
  unsigned int mat[17] = {
     0xf24d3012U, 0xf9269809U, 0x7c934c04U, 0x4c049610U, 0xa6024b08U, 
     0xd3012584U, 0x698092c2U, 0x34c04961U, 0x9a6024b0U, 0x4d301258U, 
     0x2698092cU, 0x934c0496U, 0x49a6024bU, 0x24d30125U, 0x92698092U, 
     0xc934c049U, 0xe49a6024U
     };

  t = 0x80000000U;
  x = 0U;
  for (i=0; i<17; i++) {
    if ( state17 & t )
      x ^= mat[i];
    t >>= 1;
  }
  state17 = x;

  return state17;
}

/* 2^18-1 */
unsigned int rng18(void)
{
  int i;
  unsigned int x,t;
  unsigned int mat[18] = {
     0xd324d053U, 0x69926829U, 0xb4c93414U, 0x5a649a0aU, 0xad324d05U, 
     0xd6992682U, 0xeb4c9341U, 0x268299f3U, 0x93414cf9U, 0x49a0a67cU, 
     0x24d0533eU, 0x9268299fU, 0xc93414cfU, 0x649a0a67U, 0x324d0533U, 
     0x99268299U, 0x4c93414cU, 0xa649a0a6U
     };

  t = 0x80000000U;
  x = 0U;
  for (i=0; i<18; i++) {
    if ( state18 & t )
      x ^= mat[i];
    t >>= 1;
  }
  state18 = x;

  return state18;
}

/* 2^19-1 */
unsigned int rng19(void)
{
  int i;
  unsigned int x,t;
  unsigned int mat[19] = {
     0x67b65819U, 0xd46d7415U, 0x8d80e213U, 0xc6c07109U, 0xe3603884U, 
     0x9606445bU, 0xcb03222dU, 0x65819116U, 0xb2c0c88bU, 0xd9606445U, 
     0x6cb03222U, 0xb6581911U, 0xdb2c0c88U, 0xed960644U, 0xf6cb0322U, 
     0x7b658191U, 0x3db2c0c8U, 0x9ed96064U, 0xcf6cb032U
     };

  t = 0x80000000U;
  x = 0U;
  for (i=0; i<19; i++) {
    if ( state19 & t )
      x ^= mat[i];
    t >>= 1;
  }
  state19 = x;

  return state19;
}

/* 2^20-1 */
unsigned int rng20(void)
{
  int i;
  unsigned int x,t;
  unsigned int mat[20] = {
     0x8885accaU, 0x4442d665U, 0xa2216b32U, 0x59951953U, 0xacca8ca9U, 
     0xd6654654U, 0x6b32a32aU, 0xb5995195U, 0x5acca8caU, 0x2d665465U, 
     0x16b32a32U, 0xb599519U, 0x85acca8cU, 0x42d66546U, 0x216b32a3U, 
     0x10b59951U, 0x885acca8U, 0x442d6654U, 0x2216b32aU, 0x110b5995U
     };

  t = 0x80000000U;
  x = 0U;
  for (i=0; i<20; i++) {
    if ( state20 & t )
      x ^= mat[i];
    t >>= 1;
  }
  state20 = x;

  return state20;
}

/* 2^21-1 */
unsigned int rng21(void)
{
  int i;
  unsigned int x,t;
  unsigned int mat[21] = {
     0x52eee0caU, 0xa9777065U, 0x65558f8U, 0x832aac7cU, 0xc195563eU, 
     0xe0caab1fU, 0x7065558fU, 0xb832aac7U, 0xdc195563U, 0xee0caab1U, 
     0x77065558U, 0xbb832aacU, 0xddc19556U, 0xeee0caabU, 0x77706555U, 
     0xbbb832aaU, 0x5ddc1955U, 0x2eee0caaU, 0x97770655U, 0x4bbb832aU, 
     0xa5ddc195U
     };
  
  t = 0x80000000U;
  x = 0U;
  for (i=0; i<21; i++) {
    if ( state21 & t )
      x ^= mat[i];
    t >>= 1;
  }
  state21 = x;

  return state21;
}

/* 2^22-1 */
unsigned int rng22(void)
{
  int i;
  unsigned int x,t;
  unsigned int mat[22] = {
     0x114ccccfU, 0x99eaaaa8U, 0xccf55554U, 0x667aaaaaU, 0x333d5555U, 
     0x999eaaaaU, 0xcccf5555U, 0x6667aaaaU, 0x3333d555U, 0x9999eaaaU, 
     0xccccf555U, 0x66667aaaU, 0x33333d55U, 0x99999eaaU, 0x4ccccf55U, 
     0xa66667aaU, 0x533333d5U, 0x299999eaU, 0x14ccccf5U, 0x8a66667aU, 
     0x4533333dU, 0x2299999eU
     };

  t = 0x80000000U;
  x = 0U;
  for (i=0; i<22; i++) {
    if ( state22 & t )
      x ^= mat[i];
    t >>= 1;
  }
  state22 = x;

  return state22;
}

/* 2^23-1 */
unsigned int rng23(void)
{
  int i;
  unsigned int x,t;
  unsigned int mat[23] = {
     0x45a2e7e3U, 0xa2d173f1U, 0xd168b9f8U, 0x68b45cfcU, 0xb45a2e7eU, 
     0x9f8ff0dcU, 0xcfc7f86eU, 0xe7e3fc37U, 0x73f1fe1bU, 0xb9f8ff0dU, 
     0x5cfc7f86U, 0x2e7e3fc3U, 0x173f1fe1U, 0x8b9f8ff0U, 0x45cfc7f8U, 
     0xa2e7e3fcU, 0xd173f1feU, 0x68b9f8ffU, 0xb45cfc7fU, 0x5a2e7e3fU, 
     0x2d173f1fU, 0x168b9f8fU, 0x8b45cfc7U
     };

  t = 0x80000000U;
  x = 0U;
  for (i=0; i<23; i++) {
    if ( state23 & t )
    x ^= mat[i];
    t >>= 1;
  }
  state23 = x;

  return state23;
}

/* 2^24-1 */
unsigned int rng24(void)
{
  int i;
  unsigned int x,t;
  unsigned int mat[24] = {
     0xd36bbadU, 0x8bade67bU, 0xc5d6f33dU, 0x6fddc233U, 0xbad85ab4U, 
     0xdd6c2d5aU, 0xeeb616adU, 0x775b0b56U, 0xbbad85abU, 0x5dd6c2d5U, 
     0xaeeb616aU, 0xd775b0b5U, 0x6bbad85aU, 0xb5dd6c2dU, 0xdaeeb616U, 
     0x6d775b0bU, 0x36bbad85U, 0x9b5dd6c2U, 0x4daeeb61U, 0xa6d775b0U, 
     0xd36bbad8U, 0x69b5dd6cU, 0x34daeeb6U, 0x1a6d775bU
     };

  t = 0x80000000U;
  x = 0U;
  for (i=0; i<24; i++) {
    if ( state24 & t )
      x ^= mat[i];
    t >>= 1;
  }
  state24 = x;

  return state24;
}

/* 2^25-1 */
unsigned int rng25(void)
{
  int i;
  unsigned int x,t;
  unsigned int mat[25] = {
     0xc156e5e5U, 0xe0ab72f2U, 0x7055b979U, 0x797c3959U, 0xbcbe1cacU, 
     0x5e5f0e56U, 0x2f2f872bU, 0x9797c395U, 0xcbcbe1caU, 0xe5e5f0e5U, 
     0x72f2f872U, 0xb9797c39U, 0xdcbcbe1cU, 0x6e5e5f0eU, 0xb72f2f87U, 
     0x5b9797c3U, 0xadcbcbe1U, 0x56e5e5f0U, 0xab72f2f8U, 0x55b9797cU, 
     0x2adcbcbeU, 0x156e5e5fU, 0xab72f2fU, 0x55b9797U, 0x82adcbcbU
     };

  t = 0x80000000U;
  x = 0U;
  for (i=0; i<25; i++) {
    if ( state25 & t )
      x ^= mat[i];
    t >>= 1;
  }
  state25 = x;

  return state25;
}

/* 2^26-1 */
unsigned int rng26(void)
{
  int i;
  unsigned int x,t;
  unsigned int mat[26] = {
     0x3e7263c9U, 0x214b522dU, 0x2ed7cadfU, 0x176be56fU, 0xbb5f2b7U, 
     0x5daf95bU, 0x3c9f1f64U, 0x1e4f8fb2U, 0x8f27c7d9U, 0xc793e3ecU, 
     0x63c9f1f6U, 0x31e4f8fbU, 0x98f27c7dU, 0x4c793e3eU, 0x263c9f1fU, 
     0x931e4f8fU, 0xc98f27c7U, 0xe4c793e3U, 0x7263c9f1U, 0x3931e4f8U, 
     0x9c98f27cU, 0xce4c793eU, 0xe7263c9fU, 0xf3931e4fU, 0xf9c98f27U, 
     0x7ce4c793U
     };

  t = 0x80000000U;
  x = 0U;
  for (i=0; i<26; i++) {
    if ( state26 & t )
      x ^= mat[i];
    t >>= 1;
  }
  state26 = x;

  return state26;
}

/* 2^27-1 */
unsigned int rng27(void)
{
  int i;
  unsigned int x,t;
  unsigned int mat[27] = {
     0xa19fa5eaU, 0xf150771fU, 0xd9379e65U, 0x6c9bcf32U, 0xb64de799U, 
     0x7ab95626U, 0xbd5cab13U, 0x5eae5589U, 0x2f572ac4U, 0x97ab9562U, 
     0x4bd5cab1U, 0xa5eae558U, 0xd2f572acU, 0xe97ab956U, 0xf4bd5cabU, 
     0xfa5eae55U, 0xfd2f572aU, 0x7e97ab95U, 0x3f4bd5caU, 0x9fa5eae5U, 
     0xcfd2f572U, 0x67e97ab9U, 0x33f4bd5cU, 0x19fa5eaeU, 0xcfd2f57U, 
     0x867e97abU, 0x433f4bd5U
     };

  t = 0x80000000U;
  x = 0U;
  for (i=0; i<27; i++) {
    if ( state27 & t )
      x ^= mat[i];
    t >>= 1;
  }
  state27 = x;

  return state27;
}

/* 2^28-1 */
unsigned int rng28(void)
{
  int i;
  unsigned int x,t;
  unsigned int mat[28] = {
     0xc4c15e7eU, 0xe260af3fU, 0x7130579fU, 0xfc5975b1U, 0x7e2cbad8U, 
     0x3f165d6cU, 0x9f8b2eb6U, 0xcfc5975bU, 0xe7e2cbadU, 0xf3f165d6U, 
     0x79f8b2ebU, 0xbcfc5975U, 0x5e7e2cbaU, 0xaf3f165dU, 0x579f8b2eU, 
     0x2bcfc597U, 0x15e7e2cbU, 0xaf3f165U, 0x579f8b2U, 0x82bcfc59U, 
     0xc15e7e2cU, 0x60af3f16U, 0x30579f8bU, 0x982bcfc5U, 0x4c15e7e2U, 
     0x260af3f1U, 0x130579f8U, 0x8982bcfcU
     };

  t = 0x80000000U;
  x = 0U;
  for (i=0; i<28; i++) {
    if ( state28 & t )
      x ^= mat[i];
    t >>= 1;
  }
  state28 = x;

  return state28;
}

/* 2^29-1 */
unsigned int rng29(void)
{
  int i;
  unsigned int x,t;
  unsigned int mat[29] = {
     0x27d1c585U, 0x13e8e2c2U, 0x2e25b4e4U, 0x1712da72U, 0xb896d39U, 
     0x85c4b69cU, 0xc2e25b4eU, 0x61712da7U, 0xb0b896d3U, 0x585c4b69U, 
     0x2c2e25b4U, 0x161712daU, 0x8b0b896dU, 0xc585c4b6U, 0xe2c2e25bU, 
     0x7161712dU, 0x38b0b896U, 0x1c585c4bU, 0x8e2c2e25U, 0x47161712U, 
     0xa38b0b89U, 0xd1c585c4U, 0xe8e2c2e2U, 0xf4716171U, 0xfa38b0b8U, 
     0x7d1c585cU, 0x3e8e2c2eU, 0x9f471617U, 0x4fa38b0bU
     };

  t = 0x80000000U;
  x = 0U;
  for (i=0; i<29; i++) {
    if ( state29 & t )
      x ^= mat[i];
    t >>= 1;
  }
  state29 = x;

  return state29;
}

/* 2^30-1 */
unsigned int rng30(void)
{
  int i;
  unsigned int x,t;
  unsigned int mat[30] = {
     0xde941dc4U, 0xb1de1326U, 0xd8ef0993U, 0x6c7784c9U, 0x68afdfa0U, 
     0x3457efd0U, 0xc4bfea2cU, 0xe25ff516U, 0x712ffa8bU, 0xb897fd45U, 
     0xdc4bfea2U, 0xee25ff51U, 0x7712ffa8U, 0x3b897fd4U, 0x1dc4bfeaU, 
     0xee25ff5U, 0x7712ffaU, 0x83b897fdU, 0x41dc4bfeU, 0xa0ee25ffU, 
     0x507712ffU, 0x283b897fU, 0x941dc4bfU, 0x4a0ee25fU, 0xa507712fU, 
     0xd283b897U, 0xe941dc4bU, 0xf4a0ee25U, 0x7a507712U, 0xbd283b89U
     };

  t = 0x80000000U;
  x = 0U;
  for (i=0; i<30; i++) {
    if ( state30 & t )
      x ^= mat[i];
    t >>= 1;
  }
  state30 = x;

  return state30;
}

/* 2^31-1 */
unsigned int rng31(void)
{
  int i;
  unsigned int x,t;
  unsigned int mat[31] = {
     0x51c2ce85U, 0x28e16742U, 0x1470b3a1U, 0x5bfa9755U, 0x2dfd4baaU, 
     0x16fea5d5U, 0xb7f52eaU, 0x85bfa975U, 0x42dfd4baU, 0xa16fea5dU, 
     0xd0b7f52eU, 0xe85bfa97U, 0x742dfd4bU, 0x3a16fea5U, 0x9d0b7f52U, 
     0xce85bfa9U, 0x6742dfd4U, 0xb3a16feaU, 0x59d0b7f5U, 0x2ce85bfaU, 
     0x16742dfdU, 0xb3a16feU, 0x859d0b7fU, 0xc2ce85bfU, 0xe16742dfU, 
     0x70b3a16fU, 0x3859d0b7U, 0x1c2ce85bU, 0x8e16742dU, 0x470b3a16U, 
     0xa3859d0bU
     };

  t = 0x80000000U;
  x = 0U;
  for (i=0; i<31; i++) {
    if ( state31 & t )
      x ^= mat[i];
    t >>= 1;
  }
  state31 = x;

  return state31;
}

/* 2^32-1 */
unsigned int rng32(void)
{
  int i;
  unsigned int x,t;
  unsigned int mat[32] = {
     0x82fb4d95U, 0x417da6caU, 0x22459ef0U, 0x9122cf78U, 0x489167bcU,
     0xa448b3deU, 0x50df147aU, 0x2a94c7a8U, 0x954a63d4U, 0xcaa531eaU,
     0x655298f5U, 0xb2a94c7aU, 0xd954a63dU, 0x6caa531eU, 0x3655298fU,
     0x9b2a94c7U, 0x4d954a63U, 0xa6caa531U, 0xd3655298U, 0x69b2a94cU,
     0xb4d954a6U, 0xda6caa53U, 0xed365529U, 0xf69b2a94U, 0xfb4d954aU,
     0x7da6caa5U, 0xbed36552U, 0x5f69b2a9U, 0x2fb4d954U, 0x17da6caaU,
     0xbed3655U, 0x5f69b2aU
     };
	 
  t = 0x80000000U;
  x = 0U;
  for (i=0; i<32; i++) {
    if ( state32 & t )
      x ^= mat[i];
    t >>= 1;
  }
  state32 = x;

  return state32;
}


unsigned int rng_chen(int i)
{
	switch(i){
		case 10: 
			return rng10();
			break;
		case 11: 
			return rng11();
			break;
		case 12: 
			return rng12();
			break;
		case 13: 
			return rng13();
			break;
		case 14: 
			return rng14();
			break;
		case 15: 
			return rng15();
			break;
		case 16: 
			return rng16();
			break;
		case 17: 
			return rng17();
			break;
		case 18: 
			return rng18();
			break;
		case 19: 
			return rng19();
			break;
		case 20: 
			return rng20();
			break;
		case 21: 
			return rng21();
			break;
		case 22: 
			return rng22();
			break;
		case 23: 
			return rng23();
			break;
		case 24: 
			return rng24();
			break;
		case 25: 
			return rng25();
			break;
		case 26: 
			return rng26();
			break;
		case 27: 
			return rng27();
			break;
		case 28: 
			return rng28();
			break;
		case 29: 
			return rng29();
			break;
		case 30: 
			return rng30();
			break;
		case 31: 
			return rng31();
			break;
		case 32: 
			return rng32();
			break;

		default:
			printf("Number of Bits Should be between [10,32] \n");
			return 0;
	}
}

int main(int argc,char *argv[])
{
  unsigned int i;
  unsigned int m, N;
  int w = 32; //WORD_SIZE
  
  m = atoi(argv[1]);
  N = (0xffffffff >> (w - m)); // N = 2^m-1
  
  for(i = 0; i < N; i++) printf("%10.8f\n", rng_chen(m)*(1.0/4294967296.0));

  return 0;
}