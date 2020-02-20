// The proposed Tausworthe generators using fast state transition
// Implemented by Shin Harase

// S. Harase, "A table of short-period Tausworthe generators 
// for Markov chain quasi-Monte Carlo", submitted.

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

static unsigned int state10 = 0xbcd02380U;
static unsigned int state11 = 0xa26390c2U;
static unsigned int state12 = 0xd6945853U;
static unsigned int state13 = 0xbd3682dbU;
static unsigned int state14 = 0xcfccae44U;
static unsigned int state15 = 0xc8598f5cU;
static unsigned int state16 = 0xa2021ffcU;
static unsigned int state17 = 0xc9bf3b33U;
static unsigned int state18 = 0xa5e94a58U;
static unsigned int state19 = 0xd08641ebU;
static unsigned int state20 = 0xa3e4b3f6U;
static unsigned int state21 = 0xc83862dfU;
static unsigned int state22 = 0xcfd34e85U;
static unsigned int state23 = 0xd6f44af7U;
static unsigned int state24 = 0xbcc857a7U;
static unsigned int state25 = 0xbb3d02a9U;
static unsigned int state26 = 0xbd36fd73U;
static unsigned int state27 = 0xd0fe54b2U;
static unsigned int state28 = 0xbb236383U;
static unsigned int state29 = 0xa27c7351U;
static unsigned int state30 = 0xcfcac9daU;
static unsigned int state31 = 0xbd297dd9U;
static unsigned int state32 = 0xa5f6d56bU;

/* 2^10-1 */
unsigned int rng10(void)
{
  int i;
  unsigned int x,t;
  unsigned int mat[10] = {
     0x6883b679, 0xb441db3c, 0x5a20ed9e, 0xad1076cf, 0xd6883b67, 
     0xeb441db3, 0x1d21b8a0, 0xe6136a29, 0x7309b514, 0xd1076cf3
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
     0x642cfac0, 0xd63a87a0, 0x6b1d43d0, 0x358ea1e8, 0x7eebaa34, 
     0x3f75d51a, 0x9fbaea8d, 0xabf18f86, 0xb1d43d03, 0x58ea1e81, 
     0xc859f580
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
     0x510e0fc6, 0x79890825, 0xedca8bd4, 0x27eb4a2c, 0x42fbaad0, 
     0xa17dd568, 0xd0beeab4, 0xb9517a9c, 0xdca8bd4e, 0x6e545ea7, 
     0xe6242095, 0xa21c1f8c
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
     0xd2fb5552, 0x3b86fffb, 0xcf382aaf, 0x679c1557, 0xe1355ff9, 
     0xf09aaffc, 0xf84d57fe, 0xfc26abff, 0xace800ad, 0x56740056, 
     0x79c15579, 0xee1bffee, 0xa5f6aaa5
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
     0xd2c46026, 0x69623013, 0xe675782f, 0xf33abc17, 0xab593e2d, 
     0x8768ff30, 0x43b47f98, 0xf31e5fea, 0x2b4b4fd3, 0x4761c7cf, 
     0xf17483c1, 0x78ba41e0, 0xee9940d6, 0xa588c04d
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
     0x5d5d2d53, 0x73f3bbfa, 0xb9f9ddfd, 0x81a1c3ad, 0x1d8dcc85, 
     0x8ec6e642, 0xc7637321, 0xbeec94c3, 0x22b6732, 0x5c489eca, 
     0x2e244f65, 0x4a4f0ae1, 0x25278570, 0xcfceefeb, 0xbaba5aa6
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
     0xdd9d42ae, 0x3353e3f9, 0x19a9f1fc, 0xd149ba50, 0xe8a4dd28, 
     0xa9cf2c3a, 0x97ad4b3, 0xd92028f7, 0x310d56d5, 0x451be9c4, 
     0xa28df4e2, 0xd146fa71, 0x353e3f96, 0x9a9f1fcb, 0xcd4f8fe5, 
     0xbb3a855c
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
     0xe8431fc9, 0xf4218fe4, 0x9253d83b, 0xa16af3d4, 0x38f66623, 
     0x9c7b3311, 0x4e3d9988, 0xa71eccc4, 0xd38f6662, 0x8184acf8, 
     0x40c2567c, 0xc82234f7, 0x8c5205b2, 0xc62902d9, 0xe314816c, 
     0x718a40b6, 0xd0863f92
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
     0xe4dc919cU, 0x96b2d952U, 0xcb596ca9U, 0x17027c8U, 0xb813e4U, 
     0xe480986eU, 0x969cddabU, 0xcb4e6ed5U, 0x17ba6f6U, 0xbdd37bU, 
     0x64827821U, 0x32413c10U, 0x19209e08U, 0x8c904f04U, 0xa294b61eU, 
     0xb596ca93U, 0x5acb6549U, 0xc9b92338U
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
     0x5d61e40eU, 0x2eb0f207U, 0x4a399d0dU, 0x787d2a88U, 0xbc3e9544U, 
     0x837eaeacU, 0x9cdeb358U, 0x930ebda2U, 0x14e6badfU, 0xa735d6fU, 
     0x539aeb7U, 0x29cd75bU, 0xdc2f8fa3U, 0xb37623dfU, 0xd9bb11efU, 
     0x6cdd88f7U, 0xeb0f2075U, 0x7587903aU, 0xbac3c81dU
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
     0x5d92423bU, 0xf35b6326U, 0x243ff3a8U, 0x121ff9d4U, 0x549dbed1U, 
     0xaa4edf68U, 0x88b52d8fU, 0xc45a96c7U, 0xbfbf0958U, 0x24dc697U, 
     0x5cb4a170U, 0xae5a50b8U, 0xd72d285cU, 0xb604d615U, 0x6902931U, 
     0x5eda56a3U, 0xaf6d2b51U, 0x57b695a8U, 0x764908efU, 0xbb248477U
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
     0x5e97b12aU, 0xf1dc69bfU, 0x267985f5U, 0xcdab73d0U, 0xb84208c2U, 
     0x82b6b54bU, 0x415b5aa5U, 0x7e3a1c78U, 0xe18abf16U, 0xae52eea1U, 
     0x57297750U, 0x2b94bba8U, 0xcb5decfeU, 0xe5aef67fU, 0x2c40ca15U, 
     0x9620650aU, 0x158783afU, 0x545470fdU, 0xf4bd8954U, 0x7a5ec4aaU, 
     0xbd2f6255U
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
     0x51cd9c61U, 0x792b5251U, 0xbc95a928U, 0xde4ad494U, 0x3ee8f62bU, 
     0x9f747b15U, 0x4fba3d8aU, 0x27dd1ec5U, 0x42231303U, 0x70dc15e0U, 
     0xb86e0af0U, 0x5c370578U, 0x7fd61eddU, 0xbfeb0f6eU, 0xe381bd6U, 
     0x71c0debU, 0x838e06f5U, 0xc1c7037aU, 0x312e1ddcU, 0xc95a928fU, 
     0xe4ad4947U, 0xa39b38c2U
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
     0xe729c87dU, 0x14bd2c43U, 0xed775e5cU, 0x76bbaf2eU, 0x3b5dd797U, 
     0xfa8723b6U, 0x1a6a59a6U, 0xd352cd3U, 0x869a9669U, 0xa4648349U, 
     0x523241a4U, 0x4e30e8afU, 0xa7187457U, 0x34a5f256U, 0xfd7b3156U, 
     0xfebd98abU, 0xff5ecc55U, 0x9886ae57U, 0x2b6a9f56U, 0x729c87d6U, 
     0x394e43ebU, 0x9ca721f5U, 0xce5390faU
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
     0xe880b0c3U, 0x9cc0e8a2U, 0x26e0c492U, 0x7bf0d28aU, 0x3df86945U, 
     0x1efc34a2U, 0x8f7e1a51U, 0xaf3fbdebU, 0xbf1f6e36U, 0xdf8fb71bU, 
     0x87476b4eU, 0xc3a3b5a7U, 0x9516a10U, 0x6c2805cbU, 0xb61402e5U, 
     0x5b0a0172U, 0xad8500b9U, 0x3e42309fU, 0x9f21184fU, 0x27103ce4U, 
     0xfb08aeb1U, 0x9504e79bU, 0xa202c30eU, 0xd1016187U
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
     0x52f869b3U, 0xfb845d6aU, 0x2f3a4706U, 0x979d2383U, 0x1936f872U, 
     0xc9b7c39U, 0xd4b5d7afU, 0x38a28264U, 0x1c514132U, 0xe28a099U, 
     0xd5ec39ffU, 0x380e754cU, 0x9c073aa6U, 0x1cfbf4e0U, 0x5c8593c3U, 
     0xae42c9e1U, 0xd72164f0U, 0xb968dbcbU, 0x5cb46de5U, 0xfca25f41U, 
     0xaca94613U, 0x5654a309U, 0x79d23837U, 0xee1175a8U, 0xa5f0d367U
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
     0xd2f7a625U, 0xbb8c7537U, 0xf319cbeU, 0x8798ce5fU, 0x913bc10aU, 
     0xc89de085U, 0x36b95667U, 0xc9ab0d16U, 0x64d5868bU, 0x609d6560U, 
     0x304eb2b0U, 0x4ad0ff7dU, 0xf79fd99bU, 0x7bcfeccdU, 0xef105043U, 
     0xa57f8e04U, 0x486127U, 0x80243093U, 0x40121849U, 0x20090c24U, 
     0x10048612U, 0x8024309U, 0x56f687a1U, 0x798ce5f5U, 0xee31d4dfU, 
     0xa5ef4c4aU
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
     0x67e594eeU, 0xd4175e99U, 0x6a0baf4cU, 0xb505d7a6U, 0x5a82ebd3U, 
     0x4aa4e107U, 0x25527083U, 0x92a93841U, 0xaeb108ceU, 0xd7588467U, 
     0xebac4233U, 0xf5d62119U, 0x9d0e8462U, 0x4e874231U, 0xc0a635f6U, 
     0x60531afbU, 0xb0298d7dU, 0x5814c6beU, 0x4beff7b1U, 0xc2126f36U, 
     0x6109379bU, 0xd7610f23U, 0xc55137fU, 0xe1cf1d51U, 0xf0e78ea8U, 
     0x9f9653baU, 0xcfcb29ddU
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
     0x510efc9bU, 0x28877e4dU, 0x1443bf26U, 0x8a21df93U, 0x941e1352U, 
     0x4a0f09a9U, 0xf409784fU, 0x2b0a40bcU, 0x1585205eU, 0x8ac2902fU, 
     0xc5614817U, 0x33be5890U, 0x48d1d0d3U, 0x2468e869U, 0xc33a88afU, 
     0xe19d4457U, 0xa1c05eb0U, 0xd0e02f58U, 0x687017acU, 0x6536f74dU, 
     0x6395873dU, 0xb1cac39eU, 0x58e561cfU, 0xfd7c4c7cU, 0x7ebe263eU, 
     0x6e51ef84U, 0xe6260b59U, 0xa21df937U
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
     0xe71ace48U, 0xf38d6724U, 0x9edc7ddaU, 0xcf6e3eedU, 0xe7b71f76U, 
     0x73db8fbbU, 0xb9edc7ddU, 0x5cf6e3eeU, 0x2e7b71f7U, 0xf02776b3U, 
     0xf813bb59U, 0x9b1313e4U, 0x4d8989f2U, 0x41de0ab1U, 0x20ef0558U, 
     0x776d4ce4U, 0xdcac683aU, 0x6e56341dU, 0xd031d446U, 0x8f02246bU, 
     0xa09bdc7dU, 0xd04dee3eU, 0x6826f71fU, 0xd309b5c7U, 0xe9e14abU, 
     0x874f0a55U, 0xa4bd4b62U, 0x525ea5b1U, 0xce359c90U
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
     0x51ceaca7U, 0xa8e75653U, 0x5473ab29U, 0xaa39d594U, 0xd51ceacaU, 
     0xbb40d9c2U, 0xdda06ce1U, 0x3f1e9ad7U, 0xce41e1ccU, 0x6720f0e6U, 
     0x33907873U, 0x19c83c39U, 0x5d2ab2bbU, 0x2e95595dU, 0x46840009U, 
     0x23420004U, 0x91a10002U, 0x991e2ca6U, 0x1d41baf4U, 0x5f6e71ddU, 
     0x7e799449U, 0xeef26683U, 0xf7793341U, 0xfbbc99a0U, 0xfdde4cd0U, 
     0x7eef2668U, 0xbf779334U, 0x8e75653dU, 0x473ab29eU, 0xa39d594fU
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
     0x68804f00U, 0x34402780U, 0x72a05cc0U, 0x51d06160U, 0xc0687fb0U,
     0xe0343fd8U, 0x989a50ecU, 0xa4cd6776U, 0x3ae6fcbbU, 0x9d737e5dU,
     0x4eb9bf2eU, 0x275cdf97U, 0x13ae6fcbU, 0xe15778e5U, 0xf0abbc72U,
     0x7855de39U, 0xbc2aef1cU, 0xde15778eU, 0x878af4c7U, 0xab453563U,
     0xbd22d5b1U, 0xde916ad8U, 0x87c8fa6cU, 0x2b643236U, 0x7d32561bU,
     0xd619640dU, 0xeb0cb206U, 0x1d061603U, 0xe6034401U, 0x7301a200U,
     0xd1009e00U
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
     0x68808033U, 0xb4404019U, 0x5a20200cU, 0x2d101006U, 0x7e088830U,
     0x3f044418U, 0xf702a23fU, 0xfb81511fU, 0x954028bcU, 0x2220946dU,
     0x91104a36U, 0xa008a528U, 0xb884d2a7U, 0x34c2e960U, 0xf2e1f483U,
     0x91f07a72U, 0x2078bd0aU, 0xf8bcdeb6U, 0x7c5e6f5bU, 0xbe2f37adU,
     0x5f179bd6U, 0xaf8bcdebU, 0x57c5e6f5U, 0xc3627349U, 0x61b139a4U,
     0xd8581ce1U, 0xec2c0e70U, 0xf6160738U, 0xfb0b039cU, 0x950501fdU,
     0xa20200cdU, 0xd1010066U
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


unsigned int rng(int i)
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
  
  for(i = 0; i < N; i++) printf("%10.8f\n", rng(m)*(1.0/4294967296.0));

  return 0;
}