#include "communication.cpp"

//-------------------- CORE 0(0,0) ---------------------


//-------------------- CORE 1(0,1) ---------------------


//-------------------- CORE 2(0,2) ---------------------

void *main_2(void *dummy) {
  int _cond_2; int _dummy1_2; int _dummy0_2; 
  int k_0_2[32] = {14658, 63105, 24866, 14348, 59972, 53161, 19296, 48240, 32454, 10234, 12421, 7429, 53305, 39397, 31992, 22117, 8772, 65431, 9127, 41017, 22979, 52370, 62589, 24017, 32335, 59104, 17172, 4513, 32386, 62005, 53947, 54161};
  for(int i_2 = 32; i_2 < 48; ++i_2) {

    _dummy0_2 = k_0_2[i_2-32];
    write(2,_dummy0_2);
  }

  for(int i_2 = 48; i_2 < 64; ++i_2) {

    _dummy1_2 = k_0_2[i_2-32];
    write(2,_dummy1_2);
  }

  return NULL;
}


//-------------------- CORE 3(0,3) ---------------------

void sumrotate_3(int m_0_3) {
    int _cond_3; int _dummy0_3; 
  _dummy0_3 = m_0_3;
  write(3,_dummy0_3);
  write(53,read(3));
}

void *main_3(void *dummy) {
  int _cond_3; int _dummy32_3; int _dummy31_3; int _dummy30_3; int _dummy29_3; int _dummy28_3; int _dummy27_3; int _dummy26_3; int _dummy25_3; int _dummy24_3; int _dummy23_3; int _dummy22_3; int _dummy21_3; int _dummy20_3; int _dummy19_3; int _dummy18_3; int _dummy17_3; int _dummy16_3; int _dummy15_3; int _dummy14_3; int _dummy13_3; int _dummy12_3; int _dummy11_3; int _dummy10_3; int _dummy9_3; int _dummy8_3; int _dummy7_3; int _dummy6_3; int _dummy5_3; int _dummy4_3; int _dummy3_3; int _dummy2_3; int _dummy1_3; 
  int message_0_3[16] = {25185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0};
  int g_0_3;
  int inc_0_3;
  g_0_3 = 0;
  inc_0_3 = 1;
  for(int i_3 = 0; i_3 < 16; ++i_3) {

    _dummy3_3 = message_0_3[g_0_3];
    sumrotate_3(_dummy3_3);
    _dummy4_3 = g_0_3;
    _dummy5_3 = inc_0_3;
    _dummy6_3 = (_dummy4_3+_dummy5_3);
    _dummy7_3 = 15;
    g_0_3 = (_dummy6_3&_dummy7_3);
  }

  g_0_3 = 1;
  inc_0_3 = 5;
  for(int i_3 = 16; i_3 < 32; ++i_3) {

    _dummy11_3 = message_0_3[g_0_3];
    sumrotate_3(_dummy11_3);
    _dummy12_3 = g_0_3;
    _dummy13_3 = inc_0_3;
    _dummy14_3 = (_dummy12_3+_dummy13_3);
    _dummy15_3 = 15;
    g_0_3 = (_dummy14_3&_dummy15_3);
  }

  g_0_3 = 5;
  inc_0_3 = 3;
  for(int i_3 = 32; i_3 < 48; ++i_3) {

    _dummy19_3 = message_0_3[g_0_3];
    sumrotate_3(_dummy19_3);
    _dummy20_3 = g_0_3;
    _dummy21_3 = inc_0_3;
    _dummy22_3 = (_dummy20_3+_dummy21_3);
    _dummy23_3 = 15;
    g_0_3 = (_dummy22_3&_dummy23_3);
  }

  g_0_3 = 0;
  inc_0_3 = 7;
  for(int i_3 = 48; i_3 < 64; ++i_3) {

    _dummy27_3 = message_0_3[g_0_3];
    sumrotate_3(_dummy27_3);
    _dummy28_3 = g_0_3;
    _dummy29_3 = inc_0_3;
    _dummy30_3 = (_dummy28_3+_dummy29_3);
    _dummy31_3 = 15;
    g_0_3 = (_dummy30_3&_dummy31_3);
  }

  return NULL;
}


//-------------------- CORE 4(0,4) ---------------------

void leftrotate_4(int x_0_4,int x_1_4,int r_4) {
    int _cond_4; int _dummy14_4; int _dummy13_4; int _dummy12_4; int _dummy11_4; int _dummy10_4; int _dummy9_4; int _dummy8_4; int _dummy7_4; int _dummy6_4; int _dummy5_4; int _dummy4_4; int _dummy3_4; int _dummy2_4; int _dummy1_4; int _dummy0_4; 
  int swap_4;
  _dummy0_4 = 16;
  _dummy1_4 = r_4;
  _dummy2_4 = (_dummy0_4-_dummy1_4);
  if(_dummy2_4 < 0) {

    swap_4 = x_0_4;
    x_0_4 = x_1_4;
    x_1_4 = swap_4;
    _dummy6_4 = r_4;
    _dummy7_4 = 16;
    r_4 = (_dummy6_4-_dummy7_4);
  } else {

  }

  _dummy9_4 = x_0_4;
  write(4,_dummy9_4);
  _dummy10_4 = x_1_4;
  write(4,_dummy10_4);
  _dummy11_4 = x_0_4;
  write(4,_dummy11_4);
  _dummy12_4 = x_1_4;
  write(4,_dummy12_4);
  _dummy13_4 = r_4;
  write(4,_dummy13_4);
  _dummy14_4 = r_4;
  write(4,_dummy14_4);
}

void sumrotate_4() {
    int _cond_4; int _dummy17_4; int _dummy16_4; int _dummy15_4; 
  _dummy15_4 = read(53);
  _dummy16_4 = read(54);
  _dummy17_4 = read(54);
  leftrotate_4(_dummy15_4, _dummy16_4, _dummy17_4);
}

void *main_4(void *dummy) {
  int _cond_4; 
  for(int i_4 = 0; i_4 < 16; ++i_4) {

    sumrotate_4();
  }

  for(int i_4 = 16; i_4 < 32; ++i_4) {

    sumrotate_4();
  }

  for(int i_4 = 32; i_4 < 48; ++i_4) {

    sumrotate_4();
  }

  for(int i_4 = 48; i_4 < 64; ++i_4) {

    sumrotate_4();
  }

  return NULL;
}


//-------------------- CORE 5(0,5) ---------------------

void sumrotate_5(int m_1_5) {
    int _cond_5; int _dummy0_5; 
  _dummy0_5 = m_1_5;
  write(5,_dummy0_5);
  write(54,read(5));
  write(54,read(55));
}

void *main_5(void *dummy) {
  int _cond_5; int _dummy32_5; int _dummy31_5; int _dummy30_5; int _dummy29_5; int _dummy28_5; int _dummy27_5; int _dummy26_5; int _dummy25_5; int _dummy24_5; int _dummy23_5; int _dummy22_5; int _dummy21_5; int _dummy20_5; int _dummy19_5; int _dummy18_5; int _dummy17_5; int _dummy16_5; int _dummy15_5; int _dummy14_5; int _dummy13_5; int _dummy12_5; int _dummy11_5; int _dummy10_5; int _dummy9_5; int _dummy8_5; int _dummy7_5; int _dummy6_5; int _dummy5_5; int _dummy4_5; int _dummy3_5; int _dummy2_5; int _dummy1_5; 
  int message_1_5[16] = {32867, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int g_1_5;
  int inc_1_5;
  g_1_5 = 0;
  inc_1_5 = 1;
  for(int i_5 = 0; i_5 < 16; ++i_5) {

    _dummy3_5 = message_1_5[g_1_5];
    sumrotate_5(_dummy3_5);
    _dummy4_5 = g_1_5;
    _dummy5_5 = inc_1_5;
    _dummy6_5 = (_dummy4_5+_dummy5_5);
    _dummy7_5 = 15;
    g_1_5 = (_dummy6_5&_dummy7_5);
  }

  g_1_5 = 1;
  inc_1_5 = 5;
  for(int i_5 = 16; i_5 < 32; ++i_5) {

    _dummy11_5 = message_1_5[g_1_5];
    sumrotate_5(_dummy11_5);
    _dummy12_5 = g_1_5;
    _dummy13_5 = inc_1_5;
    _dummy14_5 = (_dummy12_5+_dummy13_5);
    _dummy15_5 = 15;
    g_1_5 = (_dummy14_5&_dummy15_5);
  }

  g_1_5 = 5;
  inc_1_5 = 3;
  for(int i_5 = 32; i_5 < 48; ++i_5) {

    _dummy19_5 = message_1_5[g_1_5];
    sumrotate_5(_dummy19_5);
    _dummy20_5 = g_1_5;
    _dummy21_5 = inc_1_5;
    _dummy22_5 = (_dummy20_5+_dummy21_5);
    _dummy23_5 = 15;
    g_1_5 = (_dummy22_5&_dummy23_5);
  }

  g_1_5 = 0;
  inc_1_5 = 7;
  for(int i_5 = 48; i_5 < 64; ++i_5) {

    _dummy27_5 = message_1_5[g_1_5];
    sumrotate_5(_dummy27_5);
    _dummy28_5 = g_1_5;
    _dummy29_5 = inc_1_5;
    _dummy30_5 = (_dummy28_5+_dummy29_5);
    _dummy31_5 = 15;
    g_1_5 = (_dummy30_5&_dummy31_5);
  }

  return NULL;
}


//-------------------- CORE 6(0,6) ---------------------

void sumrotate_6() {
    int _cond_6; 
  write(55,read(56));
}

void *main_6(void *dummy) {
  int _cond_6; int _dummy0_6; 
  int k_1_6[16] = {63006, 49216, 9822, 59830, 54831, 580, 55457, 59347, 8673, 49975, 62677, 17754, 43491, 64751, 26479, 36138};
  for(int i_6 = 0; i_6 < 16; ++i_6) {

    sumrotate_6();
  }

  for(int i_6 = 16; i_6 < 32; ++i_6) {

    _dummy0_6 = k_1_6[i_6-16];
    write(6,_dummy0_6);
    sumrotate_6();
  }

  for(int i_6 = 32; i_6 < 48; ++i_6) {

    sumrotate_6();
  }

  for(int i_6 = 48; i_6 < 64; ++i_6) {

    sumrotate_6();
  }

  return NULL;
}


//-------------------- CORE 7(0,7) ---------------------

void sumrotate_7() {
    int _cond_7; 
  write(56,read(57));
}

void *main_7(void *dummy) {
  int _cond_7; 
  for(int i_7 = 0; i_7 < 16; ++i_7) {

    sumrotate_7();
  }

  for(int i_7 = 16; i_7 < 32; ++i_7) {

    sumrotate_7();
  }

  for(int i_7 = 32; i_7 < 48; ++i_7) {

    sumrotate_7();
  }

  for(int i_7 = 48; i_7 < 64; ++i_7) {

    sumrotate_7();
  }

  return NULL;
}


//-------------------- CORE 8(0,8) ---------------------

void sumrotate_8() {
    int _cond_8; 
  write(57,read(8));
}

void *main_8(void *dummy) {
  int _cond_8; 
  for(int i_8 = 0; i_8 < 16; ++i_8) {

    sumrotate_8();
  }

  for(int i_8 = 16; i_8 < 32; ++i_8) {

    sumrotate_8();
  }

  for(int i_8 = 32; i_8 < 48; ++i_8) {

    sumrotate_8();
  }

  for(int i_8 = 48; i_8 < 64; ++i_8) {

    sumrotate_8();
  }

  return NULL;
}


//-------------------- CORE 9(0,9) ---------------------


//-------------------- CORE 10(1,0) ---------------------


//-------------------- CORE 11(1,1) ---------------------

void *main_11(void *dummy) {
  int _cond_11; int _dummy0_11; 
  int k_0_11[16] = {9570, 45888, 23121, 51114, 4189, 5203, 59009, 64456, 52710, 2006, 3463, 5357, 59653, 41976, 729, 19594};
  for(int i_11 = 16; i_11 < 32; ++i_11) {

    _dummy0_11 = k_0_11[i_11-16];
    write(61,_dummy0_11);
  }

  return NULL;
}


//-------------------- CORE 12(1,2) ---------------------

void sumrotate_12(int k_0_12) {
    int _cond_12; int _dummy0_12; 
  write(62,read(12));
  _dummy0_12 = k_0_12;
  write(62,_dummy0_12);
  write(62,read(12));
}

void *main_12(void *dummy) {
  int _cond_12; int _dummy4_12; int _dummy3_12; int _dummy2_12; int _dummy1_12; 
  int k_0_12[16] = {42104, 46934, 28891, 52974, 4015, 50730, 17939, 38145, 39128, 63407, 23473, 55230, 4386, 29075, 17294, 2081};
  for(int i_12 = 0; i_12 < 16; ++i_12) {

    _dummy1_12 = k_0_12[i_12];
    sumrotate_12(_dummy1_12);
  }

  for(int i_12 = 16; i_12 < 32; ++i_12) {

    _dummy2_12 = read(61);
    sumrotate_12(_dummy2_12);
  }

  for(int i_12 = 32; i_12 < 48; ++i_12) {

    _dummy3_12 = read(2);
    sumrotate_12(_dummy3_12);
  }

  for(int i_12 = 48; i_12 < 64; ++i_12) {

    _dummy4_12 = read(2);
    sumrotate_12(_dummy4_12);
  }

  return NULL;
}


//-------------------- CORE 13(1,3) ---------------------

int leftrotate_13() {
  int _return_13;
  int _cond_13; int _dummy2_13; int _dummy1_13; int _dummy0_13; 
  int out_0_13;
  out_0_13 = read(63);
  _return_13 = out_0_13;
  _dummy2_13 = _return_13;
  return _dummy2_13;
}

int csum_13(int x_0_13,int y_0_13) {
  int _return_13;
  int _cond_13; int _dummy13_13; int _dummy12_13; int _dummy11_13; int _dummy10_13; int _dummy9_13; int _dummy8_13; int _dummy7_13; int _dummy6_13; int _dummy5_13; int _dummy4_13; int _dummy3_13; 
  int z_0_13;
  _dummy3_13 = x_0_13;
  _dummy4_13 = y_0_13;
  z_0_13 = (_dummy3_13+_dummy4_13);
  _dummy6_13 = z_0_13;
  _dummy7_13 = 16;
  _dummy8_13 = (_dummy6_13>>_dummy7_13);
  write(63,_dummy8_13);
  _dummy9_13 = z_0_13;
  _dummy10_13 = 65535;
  z_0_13 = (_dummy9_13&_dummy10_13);
  _return_13 = z_0_13;
  _dummy13_13 = _return_13;
  return _dummy13_13;
}

void sumrotate_13(int a_0_13) {
    int _cond_13; int _dummy25_13; int _dummy24_13; int _dummy23_13; int _dummy22_13; int _dummy21_13; int _dummy20_13; int _dummy19_13; int _dummy18_13; int _dummy17_13; int _dummy16_13; int _dummy15_13; int _dummy14_13; 
  int _temp2_0_13;
  _dummy14_13 = a_0_13;
  _dummy15_13 = read(62);
  _dummy16_13 = (_dummy14_13+_dummy15_13);
  _dummy17_13 = read(62);
  _dummy18_13 = (_dummy16_13+_dummy17_13);
  _dummy19_13 = read(3);
  _temp2_0_13 = csum_13(_dummy18_13, _dummy19_13);
  _dummy21_13 = read(62);
  _dummy22_13 = _temp2_0_13;
  write(3,_dummy22_13);
  _dummy23_13 = leftrotate_13();
  _dummy25_13 = csum_13(_dummy21_13, _dummy23_13);
  write(13,_dummy25_13);
}

void *main_13(void *dummy) {
  int _cond_13; int _dummy29_13; int _dummy28_13; int _dummy27_13; int _dummy26_13; 
  for(int i_13 = 0; i_13 < 16; ++i_13) {

    _dummy26_13 = read(13);
    sumrotate_13(_dummy26_13);
  }

  for(int i_13 = 16; i_13 < 32; ++i_13) {

    _dummy27_13 = read(13);
    sumrotate_13(_dummy27_13);
  }

  for(int i_13 = 32; i_13 < 48; ++i_13) {

    _dummy28_13 = read(13);
    sumrotate_13(_dummy28_13);
  }

  for(int i_13 = 48; i_13 < 64; ++i_13) {

    _dummy29_13 = read(13);
    sumrotate_13(_dummy29_13);
  }

  return NULL;
}


//-------------------- CORE 14(1,4) ---------------------

void leftrotate_14() {
    int _cond_14; int _dummy16_14; int _dummy15_14; int _dummy14_14; int _dummy13_14; int _dummy12_14; int _dummy11_14; int _dummy10_14; int _dummy9_14; int _dummy8_14; int _dummy7_14; int _dummy6_14; int _dummy5_14; int _dummy4_14; int _dummy3_14; int _dummy2_14; int _dummy1_14; int _dummy0_14; 
  int r2_14;
  int x2_0_14;
  int x2_1_14;
  x2_0_14 = read(4);
  x2_1_14 = read(4);
  write(14,read(4));
  write(14,read(4));
  r2_14 = read(4);
  write(14,read(4));
  _dummy3_14 = read(14);
  _dummy4_14 = x2_0_14;
  _dummy5_14 = r2_14;
  _dummy6_14 = (_dummy4_14<<_dummy5_14);
  _dummy7_14 = (_dummy3_14|_dummy6_14);
  _dummy8_14 = 65535;
  _dummy9_14 = (_dummy7_14&_dummy8_14);
  write(63,_dummy9_14);
  _dummy10_14 = read(14);
  _dummy11_14 = x2_1_14;
  _dummy12_14 = r2_14;
  _dummy13_14 = (_dummy11_14<<_dummy12_14);
  _dummy14_14 = (_dummy10_14|_dummy13_14);
  _dummy15_14 = 65535;
  _dummy16_14 = (_dummy14_14&_dummy15_14);
  write(64,_dummy16_14);
}

void csum_14() {
    int _cond_14; 
  write(64,read(63));
}

void sumrotate_14() {
    int _cond_14; 
  csum_14();
  leftrotate_14();
  csum_14();
}

void *main_14(void *dummy) {
  int _cond_14; 
  for(int i_14 = 0; i_14 < 16; ++i_14) {

    sumrotate_14();
  }

  for(int i_14 = 16; i_14 < 32; ++i_14) {

    sumrotate_14();
  }

  for(int i_14 = 32; i_14 < 48; ++i_14) {

    sumrotate_14();
  }

  for(int i_14 = 48; i_14 < 64; ++i_14) {

    sumrotate_14();
  }

  return NULL;
}


//-------------------- CORE 15(1,5) ---------------------

int leftrotate_15() {
  int _return_15;
  int _cond_15; int _dummy2_15; int _dummy1_15; int _dummy0_15; 
  int out_1_15;
  out_1_15 = read(64);
  _return_15 = out_1_15;
  _dummy2_15 = _return_15;
  return _dummy2_15;
}

int csum_15(int x_1_15,int y_1_15) {
  int _return_15;
  int _cond_15; int _dummy14_15; int _dummy13_15; int _dummy12_15; int _dummy11_15; int _dummy10_15; int _dummy9_15; int _dummy8_15; int _dummy7_15; int _dummy6_15; int _dummy5_15; int _dummy4_15; int _dummy3_15; 
  int z_1_15;
  _dummy3_15 = x_1_15;
  _dummy4_15 = y_1_15;
  _dummy5_15 = (_dummy3_15+_dummy4_15);
  _dummy6_15 = read(64);
  _dummy7_15 = 3;
  _dummy8_15 = (_dummy6_15&_dummy7_15);
  z_1_15 = (_dummy5_15+_dummy8_15);
  _dummy10_15 = z_1_15;
  _dummy11_15 = 65535;
  z_1_15 = (_dummy10_15&_dummy11_15);
  _return_15 = z_1_15;
  _dummy14_15 = _return_15;
  return _dummy14_15;
}

void sumrotate_15(int a_1_15) {
    int _cond_15; int _dummy26_15; int _dummy25_15; int _dummy24_15; int _dummy23_15; int _dummy22_15; int _dummy21_15; int _dummy20_15; int _dummy19_15; int _dummy18_15; int _dummy17_15; int _dummy16_15; int _dummy15_15; 
  int _temp2_0_15;
  _dummy15_15 = a_1_15;
  _dummy16_15 = read(65);
  _dummy17_15 = (_dummy15_15+_dummy16_15);
  _dummy18_15 = read(65);
  _dummy19_15 = (_dummy17_15+_dummy18_15);
  _dummy20_15 = read(5);
  _temp2_0_15 = csum_15(_dummy19_15, _dummy20_15);
  _dummy22_15 = read(65);
  _dummy23_15 = _temp2_0_15;
  write(5,_dummy23_15);
  _dummy24_15 = leftrotate_15();
  _dummy26_15 = csum_15(_dummy22_15, _dummy24_15);
  write(15,_dummy26_15);
}

void *main_15(void *dummy) {
  int _cond_15; int _dummy30_15; int _dummy29_15; int _dummy28_15; int _dummy27_15; 
  for(int i_15 = 0; i_15 < 16; ++i_15) {

    _dummy27_15 = read(15);
    sumrotate_15(_dummy27_15);
  }

  for(int i_15 = 16; i_15 < 32; ++i_15) {

    _dummy28_15 = read(15);
    sumrotate_15(_dummy28_15);
  }

  for(int i_15 = 32; i_15 < 48; ++i_15) {

    _dummy29_15 = read(15);
    sumrotate_15(_dummy29_15);
  }

  for(int i_15 = 48; i_15 < 64; ++i_15) {

    _dummy30_15 = read(15);
    sumrotate_15(_dummy30_15);
  }

  return NULL;
}


//-------------------- CORE 16(1,6) ---------------------

void sumrotate_16(int k_1_16) {
    int _cond_16; int _dummy0_16; 
  write(65,read(16));
  _dummy0_16 = k_1_16;
  write(65,_dummy0_16);
  write(65,read(16));
}

void *main_16(void *dummy) {
  int _cond_16; int _dummy4_16; int _dummy3_16; int _dummy2_16; int _dummy1_16; 
  int k_1_16[16] = {55146, 59591, 9248, 49597, 62844, 18311, 43056, 64838, 27008, 35652, 65535, 35164, 27536, 64920, 42617, 18868};
  for(int i_16 = 0; i_16 < 16; ++i_16) {

    _dummy1_16 = k_1_16[i_16];
    sumrotate_16(_dummy1_16);
  }

  for(int i_16 = 16; i_16 < 32; ++i_16) {

    _dummy2_16 = read(6);
    sumrotate_16(_dummy2_16);
  }

  for(int i_16 = 32; i_16 < 48; ++i_16) {

    _dummy3_16 = read(66);
    sumrotate_16(_dummy3_16);
  }

  for(int i_16 = 48; i_16 < 64; ++i_16) {

    _dummy4_16 = read(66);
    sumrotate_16(_dummy4_16);
  }

  return NULL;
}


//-------------------- CORE 17(1,7) ---------------------

void *main_17(void *dummy) {
  int _cond_17; int _dummy1_17; int _dummy0_17; 
  int k_1_17[32] = {65530, 34673, 28061, 64997, 42174, 19422, 63163, 48831, 10395, 60065, 54511, 1160, 55764, 59099, 8098, 50348, 62505, 17194, 43924, 64659, 25947, 36620, 65519, 34180, 28584, 65068, 41729, 19976, 63315, 48442, 10967, 60294};
  for(int i_17 = 32; i_17 < 48; ++i_17) {

    _dummy0_17 = k_1_17[i_17-32];
    write(66,_dummy0_17);
  }

  for(int i_17 = 48; i_17 < 64; ++i_17) {

    _dummy1_17 = k_1_17[i_17-32];
    write(66,_dummy1_17);
  }

  return NULL;
}


//-------------------- CORE 18(1,8) ---------------------

void sumrotate_18() {
    int _cond_18; 
  write(8,read(18));
}

void *main_18(void *dummy) {
  int _cond_18; 
  for(int i_18 = 0; i_18 < 16; ++i_18) {

    sumrotate_18();
  }

  for(int i_18 = 16; i_18 < 32; ++i_18) {

    sumrotate_18();
  }

  for(int i_18 = 32; i_18 < 48; ++i_18) {

    sumrotate_18();
  }

  for(int i_18 = 48; i_18 < 64; ++i_18) {

    sumrotate_18();
  }

  return NULL;
}


//-------------------- CORE 19(1,9) ---------------------


//-------------------- CORE 20(2,0) ---------------------


//-------------------- CORE 21(2,1) ---------------------


//-------------------- CORE 22(2,2) ---------------------

void sumrotate_22(int f_0_22) {
    int _cond_22; int _dummy0_22; 
  _dummy0_22 = f_0_22;
  write(12,_dummy0_22);
  write(12,read(22));
}

void *main_22(void *dummy) {
  int _cond_22; int _dummy34_22; int _dummy33_22; int _dummy32_22; int _dummy31_22; int _dummy30_22; int _dummy29_22; int _dummy28_22; int _dummy27_22; int _dummy26_22; int _dummy25_22; int _dummy24_22; int _dummy23_22; int _dummy22_22; int _dummy21_22; int _dummy20_22; int _dummy19_22; int _dummy18_22; int _dummy17_22; int _dummy16_22; int _dummy15_22; int _dummy14_22; int _dummy13_22; int _dummy12_22; int _dummy11_22; int _dummy10_22; int _dummy9_22; int _dummy8_22; int _dummy7_22; int _dummy6_22; int _dummy5_22; int _dummy4_22; int _dummy3_22; int _dummy2_22; int _dummy1_22; 
  int f1_0_22;
  for(int i_22 = 0; i_22 < 16; ++i_22) {

    _dummy1_22 = read(22);
    _dummy2_22 = read(22);
    _dummy3_22 = (_dummy1_22&_dummy2_22);
    _dummy4_22 = read(22);
    _dummy5_22 = 65535;
    _dummy6_22 = (_dummy4_22^_dummy5_22);
    _dummy7_22 = read(72);
    _dummy8_22 = (_dummy6_22&_dummy7_22);
    f1_0_22 = (_dummy3_22|_dummy8_22);
    _dummy10_22 = f1_0_22;
    sumrotate_22(_dummy10_22);
    write(72,read(22));
  }

  for(int i_22 = 16; i_22 < 32; ++i_22) {

    _dummy11_22 = read(72);
    _dummy12_22 = read(22);
    _dummy13_22 = (_dummy11_22&_dummy12_22);
    _dummy14_22 = read(72);
    _dummy15_22 = 65535;
    _dummy16_22 = (_dummy14_22^_dummy15_22);
    _dummy17_22 = read(22);
    _dummy18_22 = (_dummy16_22&_dummy17_22);
    f1_0_22 = (_dummy13_22|_dummy18_22);
    _dummy20_22 = f1_0_22;
    sumrotate_22(_dummy20_22);
    write(72,read(22));
  }

  for(int i_22 = 32; i_22 < 48; ++i_22) {

    _dummy21_22 = read(22);
    _dummy22_22 = read(22);
    _dummy23_22 = (_dummy21_22^_dummy22_22);
    _dummy24_22 = read(72);
    f1_0_22 = (_dummy23_22^_dummy24_22);
    _dummy26_22 = f1_0_22;
    sumrotate_22(_dummy26_22);
    write(72,read(22));
  }

  for(int i_22 = 48; i_22 < 64; ++i_22) {

    _dummy27_22 = read(22);
    _dummy28_22 = read(22);
    _dummy29_22 = read(72);
    _dummy30_22 = 65535;
    _dummy31_22 = (_dummy29_22^_dummy30_22);
    _dummy32_22 = (_dummy28_22|_dummy31_22);
    f1_0_22 = (_dummy27_22^_dummy32_22);
    _dummy34_22 = f1_0_22;
    sumrotate_22(_dummy34_22);
    write(72,read(22));
  }

  return NULL;
}


//-------------------- CORE 23(2,3) ---------------------

void sumrotate_23() {
    int _cond_23; 
  write(23,read(13));
}

void *main_23(void *dummy) {
  int _cond_23; int _dummy20_23; int _dummy19_23; int _dummy18_23; int _dummy17_23; int _dummy16_23; int _dummy15_23; int _dummy14_23; int _dummy13_23; int _dummy12_23; int _dummy11_23; int _dummy10_23; int _dummy9_23; int _dummy8_23; int _dummy7_23; int _dummy6_23; int _dummy5_23; int _dummy4_23; int _dummy3_23; int _dummy2_23; int _dummy1_23; int _dummy0_23; 
  int a_0_23;
  int d_0_23;
  a_0_23 = read(23);
  d_0_23 = read(23);
  for(int i_23 = 0; i_23 < 16; ++i_23) {

    _dummy2_23 = d_0_23;
    write(72,_dummy2_23);
    _dummy3_23 = a_0_23;
    write(13,_dummy3_23);
    sumrotate_23();
    a_0_23 = d_0_23;
    d_0_23 = read(72);
  }

  for(int i_23 = 16; i_23 < 32; ++i_23) {

    _dummy6_23 = d_0_23;
    write(72,_dummy6_23);
    _dummy7_23 = d_0_23;
    write(72,_dummy7_23);
    _dummy8_23 = a_0_23;
    write(13,_dummy8_23);
    sumrotate_23();
    a_0_23 = d_0_23;
    d_0_23 = read(72);
  }

  for(int i_23 = 32; i_23 < 48; ++i_23) {

    _dummy11_23 = d_0_23;
    write(72,_dummy11_23);
    _dummy12_23 = a_0_23;
    write(13,_dummy12_23);
    sumrotate_23();
    a_0_23 = d_0_23;
    d_0_23 = read(72);
  }

  for(int i_23 = 48; i_23 < 64; ++i_23) {

    _dummy15_23 = d_0_23;
    write(72,_dummy15_23);
    _dummy16_23 = a_0_23;
    write(13,_dummy16_23);
    sumrotate_23();
    a_0_23 = d_0_23;
    d_0_23 = read(72);
  }

  _dummy19_23 = a_0_23;
  write(23,_dummy19_23);
  _dummy20_23 = d_0_23;
  write(23,_dummy20_23);
  return NULL;
}


//-------------------- CORE 24(2,4) ---------------------

void leftrotate_24() {
    int _cond_24; int _dummy12_24; int _dummy11_24; int _dummy10_24; int _dummy9_24; int _dummy8_24; int _dummy7_24; int _dummy6_24; int _dummy5_24; int _dummy4_24; int _dummy3_24; int _dummy2_24; int _dummy1_24; int _dummy0_24; 
  int r3_24;
  int x3_0_24;
  int x3_1_24;
  x3_0_24 = read(14);
  x3_1_24 = read(14);
  r3_24 = read(14);
  _dummy3_24 = x3_1_24;
  _dummy4_24 = 16;
  _dummy5_24 = r3_24;
  _dummy6_24 = (_dummy4_24-_dummy5_24);
  _dummy7_24 = (_dummy3_24>>_dummy6_24);
  write(14,_dummy7_24);
  _dummy8_24 = x3_0_24;
  _dummy9_24 = 16;
  _dummy10_24 = r3_24;
  _dummy11_24 = (_dummy9_24-_dummy10_24);
  _dummy12_24 = (_dummy8_24>>_dummy11_24);
  write(14,_dummy12_24);
}

void sumrotate_24() {
    int _cond_24; 
  leftrotate_24();
}

void *main_24(void *dummy) {
  int _cond_24; 
  for(int i_24 = 0; i_24 < 16; ++i_24) {

    sumrotate_24();
  }

  for(int i_24 = 16; i_24 < 32; ++i_24) {

    sumrotate_24();
  }

  for(int i_24 = 32; i_24 < 48; ++i_24) {

    sumrotate_24();
  }

  for(int i_24 = 48; i_24 < 64; ++i_24) {

    sumrotate_24();
  }

  return NULL;
}


//-------------------- CORE 25(2,5) ---------------------

void sumrotate_25() {
    int _cond_25; 
  write(25,read(15));
}

void *main_25(void *dummy) {
  int _cond_25; int _dummy20_25; int _dummy19_25; int _dummy18_25; int _dummy17_25; int _dummy16_25; int _dummy15_25; int _dummy14_25; int _dummy13_25; int _dummy12_25; int _dummy11_25; int _dummy10_25; int _dummy9_25; int _dummy8_25; int _dummy7_25; int _dummy6_25; int _dummy5_25; int _dummy4_25; int _dummy3_25; int _dummy2_25; int _dummy1_25; int _dummy0_25; 
  int a_1_25;
  int d_1_25;
  a_1_25 = read(25);
  d_1_25 = read(25);
  for(int i_25 = 0; i_25 < 16; ++i_25) {

    _dummy2_25 = d_1_25;
    write(75,_dummy2_25);
    _dummy3_25 = a_1_25;
    write(15,_dummy3_25);
    sumrotate_25();
    a_1_25 = d_1_25;
    d_1_25 = read(75);
  }

  for(int i_25 = 16; i_25 < 32; ++i_25) {

    _dummy6_25 = d_1_25;
    write(75,_dummy6_25);
    _dummy7_25 = d_1_25;
    write(75,_dummy7_25);
    _dummy8_25 = a_1_25;
    write(15,_dummy8_25);
    sumrotate_25();
    a_1_25 = d_1_25;
    d_1_25 = read(75);
  }

  for(int i_25 = 32; i_25 < 48; ++i_25) {

    _dummy11_25 = d_1_25;
    write(75,_dummy11_25);
    _dummy12_25 = a_1_25;
    write(15,_dummy12_25);
    sumrotate_25();
    a_1_25 = d_1_25;
    d_1_25 = read(75);
  }

  for(int i_25 = 48; i_25 < 64; ++i_25) {

    _dummy15_25 = d_1_25;
    write(75,_dummy15_25);
    _dummy16_25 = a_1_25;
    write(15,_dummy16_25);
    sumrotate_25();
    a_1_25 = d_1_25;
    d_1_25 = read(75);
  }

  _dummy19_25 = a_1_25;
  write(25,_dummy19_25);
  _dummy20_25 = d_1_25;
  write(25,_dummy20_25);
  return NULL;
}


//-------------------- CORE 26(2,6) ---------------------

void sumrotate_26(int f_1_26) {
    int _cond_26; int _dummy0_26; 
  _dummy0_26 = f_1_26;
  write(16,_dummy0_26);
  write(16,read(26));
}

void *main_26(void *dummy) {
  int _cond_26; int _dummy34_26; int _dummy33_26; int _dummy32_26; int _dummy31_26; int _dummy30_26; int _dummy29_26; int _dummy28_26; int _dummy27_26; int _dummy26_26; int _dummy25_26; int _dummy24_26; int _dummy23_26; int _dummy22_26; int _dummy21_26; int _dummy20_26; int _dummy19_26; int _dummy18_26; int _dummy17_26; int _dummy16_26; int _dummy15_26; int _dummy14_26; int _dummy13_26; int _dummy12_26; int _dummy11_26; int _dummy10_26; int _dummy9_26; int _dummy8_26; int _dummy7_26; int _dummy6_26; int _dummy5_26; int _dummy4_26; int _dummy3_26; int _dummy2_26; int _dummy1_26; 
  int f1_1_26;
  for(int i_26 = 0; i_26 < 16; ++i_26) {

    _dummy1_26 = read(26);
    _dummy2_26 = read(26);
    _dummy3_26 = (_dummy1_26&_dummy2_26);
    _dummy4_26 = read(26);
    _dummy5_26 = 65535;
    _dummy6_26 = (_dummy4_26^_dummy5_26);
    _dummy7_26 = read(75);
    _dummy8_26 = (_dummy6_26&_dummy7_26);
    f1_1_26 = (_dummy3_26|_dummy8_26);
    _dummy10_26 = f1_1_26;
    sumrotate_26(_dummy10_26);
    write(75,read(26));
  }

  for(int i_26 = 16; i_26 < 32; ++i_26) {

    _dummy11_26 = read(75);
    _dummy12_26 = read(26);
    _dummy13_26 = (_dummy11_26&_dummy12_26);
    _dummy14_26 = read(75);
    _dummy15_26 = 65535;
    _dummy16_26 = (_dummy14_26^_dummy15_26);
    _dummy17_26 = read(26);
    _dummy18_26 = (_dummy16_26&_dummy17_26);
    f1_1_26 = (_dummy13_26|_dummy18_26);
    _dummy20_26 = f1_1_26;
    sumrotate_26(_dummy20_26);
    write(75,read(26));
  }

  for(int i_26 = 32; i_26 < 48; ++i_26) {

    _dummy21_26 = read(26);
    _dummy22_26 = read(26);
    _dummy23_26 = (_dummy21_26^_dummy22_26);
    _dummy24_26 = read(75);
    f1_1_26 = (_dummy23_26^_dummy24_26);
    _dummy26_26 = f1_1_26;
    sumrotate_26(_dummy26_26);
    write(75,read(26));
  }

  for(int i_26 = 48; i_26 < 64; ++i_26) {

    _dummy27_26 = read(26);
    _dummy28_26 = read(26);
    _dummy29_26 = read(75);
    _dummy30_26 = 65535;
    _dummy31_26 = (_dummy29_26^_dummy30_26);
    _dummy32_26 = (_dummy28_26|_dummy31_26);
    f1_1_26 = (_dummy27_26^_dummy32_26);
    _dummy34_26 = f1_1_26;
    sumrotate_26(_dummy34_26);
    write(75,read(26));
  }

  return NULL;
}


//-------------------- CORE 27(2,7) ---------------------


//-------------------- CORE 28(2,8) ---------------------

void sumrotate_28() {
    int _cond_28; 
  write(18,read(28));
}

void *main_28(void *dummy) {
  int _cond_28; int _dummy0_28; 
  int r_28[16] = {5, 9, 14, 20, 5, 9, 14, 20, 5, 9, 14, 20, 5, 9, 14, 20};
  for(int i_28 = 0; i_28 < 16; ++i_28) {

    sumrotate_28();
  }

  for(int i_28 = 16; i_28 < 32; ++i_28) {

    _dummy0_28 = r_28[i_28-16];
    write(28,_dummy0_28);
    sumrotate_28();
  }

  for(int i_28 = 32; i_28 < 48; ++i_28) {

    sumrotate_28();
  }

  for(int i_28 = 48; i_28 < 64; ++i_28) {

    sumrotate_28();
  }

  return NULL;
}


//-------------------- CORE 29(2,9) ---------------------


//-------------------- CORE 30(3,0) ---------------------


//-------------------- CORE 31(3,1) ---------------------


//-------------------- CORE 32(3,2) ---------------------

int sumrotate_32(int b_0_32) {
  int _return_32;
  int _cond_32; int _dummy2_32; int _dummy1_32; int _dummy0_32; 
  _dummy0_32 = b_0_32;
  write(22,_dummy0_32);
  _return_32 = read(82);
  _dummy2_32 = _return_32;
  return _dummy2_32;
}

void *main_32(void *dummy) {
  int _cond_32; int _dummy39_32; int _dummy38_32; int _dummy37_32; int _dummy36_32; int _dummy35_32; int _dummy34_32; int _dummy33_32; int _dummy32_32; int _dummy31_32; int _dummy30_32; int _dummy29_32; int _dummy28_32; int _dummy27_32; int _dummy26_32; int _dummy25_32; int _dummy24_32; int _dummy23_32; int _dummy22_32; int _dummy21_32; int _dummy20_32; int _dummy19_32; int _dummy18_32; int _dummy17_32; int _dummy16_32; int _dummy15_32; int _dummy14_32; int _dummy13_32; int _dummy12_32; int _dummy11_32; int _dummy10_32; int _dummy9_32; int _dummy8_32; int _dummy7_32; int _dummy6_32; int _dummy5_32; int _dummy4_32; int _dummy3_32; 
  int b_0_32;
  int c_0_32;
  int temp_0_32;
  b_0_32 = read(82);
  c_0_32 = read(82);
  for(int i_32 = 0; i_32 < 16; ++i_32) {

    _dummy5_32 = b_0_32;
    write(22,_dummy5_32);
    _dummy6_32 = c_0_32;
    write(22,_dummy6_32);
    _dummy7_32 = b_0_32;
    write(22,_dummy7_32);
    _dummy8_32 = b_0_32;
    temp_0_32 = sumrotate_32(_dummy8_32);
    _dummy11_32 = c_0_32;
    write(22,_dummy11_32);
    c_0_32 = b_0_32;
    b_0_32 = temp_0_32;
  }

  for(int i_32 = 16; i_32 < 32; ++i_32) {

    _dummy14_32 = b_0_32;
    write(22,_dummy14_32);
    _dummy15_32 = c_0_32;
    write(22,_dummy15_32);
    _dummy16_32 = b_0_32;
    temp_0_32 = sumrotate_32(_dummy16_32);
    _dummy19_32 = c_0_32;
    write(22,_dummy19_32);
    c_0_32 = b_0_32;
    b_0_32 = temp_0_32;
  }

  for(int i_32 = 32; i_32 < 48; ++i_32) {

    _dummy22_32 = b_0_32;
    write(22,_dummy22_32);
    _dummy23_32 = c_0_32;
    write(22,_dummy23_32);
    _dummy24_32 = b_0_32;
    temp_0_32 = sumrotate_32(_dummy24_32);
    _dummy27_32 = c_0_32;
    write(22,_dummy27_32);
    c_0_32 = b_0_32;
    b_0_32 = temp_0_32;
  }

  for(int i_32 = 48; i_32 < 64; ++i_32) {

    _dummy30_32 = c_0_32;
    write(22,_dummy30_32);
    _dummy31_32 = b_0_32;
    write(22,_dummy31_32);
    _dummy32_32 = b_0_32;
    temp_0_32 = sumrotate_32(_dummy32_32);
    _dummy35_32 = c_0_32;
    write(22,_dummy35_32);
    c_0_32 = b_0_32;
    b_0_32 = temp_0_32;
  }

  _dummy38_32 = b_0_32;
  write(82,_dummy38_32);
  _dummy39_32 = c_0_32;
  write(82,_dummy39_32);
  return NULL;
}


//-------------------- CORE 33(3,3) ---------------------

void sumrotate_33() {
    int _cond_33; 
  write(82,read(23));
}

void *main_33(void *dummy) {
  int _cond_33; int _dummy23_33; int _dummy22_33; int _dummy21_33; int _dummy20_33; int _dummy19_33; int _dummy18_33; int _dummy17_33; int _dummy16_33; int _dummy15_33; int _dummy14_33; int _dummy13_33; int _dummy12_33; int _dummy11_33; int _dummy10_33; int _dummy9_33; int _dummy8_33; int _dummy7_33; int _dummy6_33; int _dummy5_33; int _dummy4_33; int _dummy3_33; int _dummy2_33; int _dummy1_33; int _dummy0_33; 
  int hash_0_33[4] = {8961, 43913, 56574, 21622};
  _dummy0_33 = 0;
  _dummy1_33 = hash_0_33[_dummy0_33];
  write(23,_dummy1_33);
  _dummy2_33 = 1;
  _dummy3_33 = hash_0_33[_dummy2_33];
  write(82,_dummy3_33);
  _dummy4_33 = 2;
  _dummy5_33 = hash_0_33[_dummy4_33];
  write(82,_dummy5_33);
  _dummy6_33 = 3;
  _dummy7_33 = hash_0_33[_dummy6_33];
  write(23,_dummy7_33);
  for(int i_33 = 0; i_33 < 16; ++i_33) {

    sumrotate_33();
  }

  for(int i_33 = 16; i_33 < 32; ++i_33) {

    sumrotate_33();
  }

  for(int i_33 = 32; i_33 < 48; ++i_33) {

    sumrotate_33();
  }

  for(int i_33 = 48; i_33 < 64; ++i_33) {

    sumrotate_33();
  }

  _dummy8_33 = 0;
  _dummy9_33 = hash_0_33[_dummy8_33];
  write(83,_dummy9_33);
  write(83,read(23));
  _dummy10_33 = read(83);
  _dummy11_33 = 0;
  hash_0_33[_dummy11_33] = _dummy10_33;
  _dummy12_33 = 1;
  _dummy13_33 = hash_0_33[_dummy12_33];
  write(83,_dummy13_33);
  write(83,read(82));
  _dummy14_33 = read(83);
  _dummy15_33 = 1;
  hash_0_33[_dummy15_33] = _dummy14_33;
  _dummy16_33 = 2;
  _dummy17_33 = hash_0_33[_dummy16_33];
  write(83,_dummy17_33);
  write(83,read(82));
  _dummy18_33 = read(83);
  _dummy19_33 = 2;
  hash_0_33[_dummy19_33] = _dummy18_33;
  _dummy20_33 = 3;
  _dummy21_33 = hash_0_33[_dummy20_33];
  write(83,_dummy21_33);
  write(83,read(23));
  _dummy22_33 = read(83);
  _dummy23_33 = 3;
  hash_0_33[_dummy23_33] = _dummy22_33;
  return NULL;
}


//-------------------- CORE 34(3,4) ---------------------

int2 cadd_34(int x_0_34,int x_1_34,int y_0_34,int y_1_34) {
  int2 _return_34;
  int _cond_34; int _dummy21_34; int _dummy20_34; int _dummy19_34; int _dummy18_34; int _dummy17_34; int _dummy16_34; int _dummy15_34; int _dummy14_34; int _dummy13_34; int _dummy12_34; int _dummy11_34; int _dummy10_34; int _dummy9_34; int _dummy8_34; int _dummy7_34; int _dummy6_34; int _dummy5_34; int _dummy4_34; int _dummy3_34; int _dummy2_34; int _dummy1_34; int _dummy0_34; 
  int z_0_34;
  int z_1_34;
  _dummy0_34 = x_0_34;
  _dummy1_34 = y_0_34;
  z_0_34 = (_dummy0_34+_dummy1_34);
  _dummy3_34 = x_1_34;
  _dummy4_34 = y_1_34;
  _dummy5_34 = (_dummy3_34+_dummy4_34);
  _dummy6_34 = z_0_34;
  _dummy7_34 = 16;
  _dummy8_34 = (_dummy6_34>>_dummy7_34);
  _dummy9_34 = 3;
  _dummy10_34 = (_dummy8_34&_dummy9_34);
  z_1_34 = (_dummy5_34+_dummy10_34);
  _dummy12_34 = z_0_34;
  _dummy13_34 = 65535;
  z_0_34 = (_dummy12_34&_dummy13_34);
  _dummy15_34 = z_1_34;
  _dummy16_34 = 65535;
  z_1_34 = (_dummy15_34&_dummy16_34);
  _return_34.fst = z_0_34;
  _return_34.snd = z_1_34;
  _dummy20_34 = _return_34.fst;
  _dummy21_34 = _return_34.snd;
  return int2(_dummy20_34, _dummy21_34);
}

void *main_34(void *dummy) {
  int _cond_34; int _dummy49_34; int _dummy48_34; int2 _dummy47_34; int _dummy46_34; int _dummy45_34; int _dummy44_34; int _dummy43_34; int _dummy42_34; int _dummy41_34; int2 _dummy40_34; int _dummy39_34; int _dummy38_34; int _dummy37_34; int _dummy36_34; int _dummy35_34; int _dummy34_34; int2 _dummy33_34; int _dummy32_34; int _dummy31_34; int _dummy30_34; int _dummy29_34; int _dummy28_34; int _dummy27_34; int2 _dummy26_34; int _dummy25_34; int _dummy24_34; int _dummy23_34; int _dummy22_34; 
  int2 _temp1_8_34;
  int2 _temp1_7_34;
  int2 _temp1_6_34;
  int2 _temp1_5_34;
  _dummy22_34 = read(83);
  _dummy23_34 = read(84);
  _dummy24_34 = read(83);
  _dummy25_34 = read(84);
  _dummy26_34 = cadd_34(_dummy22_34, _dummy23_34, _dummy24_34, _dummy25_34);
  _temp1_5_34.snd = _dummy26_34.snd;
  _dummy27_34 = _dummy26_34.fst;
  write(83,_dummy27_34);
  _dummy28_34 = _temp1_5_34.snd;
  write(84,_dummy28_34);
  _dummy29_34 = read(83);
  _dummy30_34 = read(84);
  _dummy31_34 = read(83);
  _dummy32_34 = read(84);
  _dummy33_34 = cadd_34(_dummy29_34, _dummy30_34, _dummy31_34, _dummy32_34);
  _temp1_6_34.snd = _dummy33_34.snd;
  _dummy34_34 = _dummy33_34.fst;
  write(83,_dummy34_34);
  _dummy35_34 = _temp1_6_34.snd;
  write(84,_dummy35_34);
  _dummy36_34 = read(83);
  _dummy37_34 = read(84);
  _dummy38_34 = read(83);
  _dummy39_34 = read(84);
  _dummy40_34 = cadd_34(_dummy36_34, _dummy37_34, _dummy38_34, _dummy39_34);
  _temp1_7_34.snd = _dummy40_34.snd;
  _dummy41_34 = _dummy40_34.fst;
  write(83,_dummy41_34);
  _dummy42_34 = _temp1_7_34.snd;
  write(84,_dummy42_34);
  _dummy43_34 = read(83);
  _dummy44_34 = read(84);
  _dummy45_34 = read(83);
  _dummy46_34 = read(84);
  _dummy47_34 = cadd_34(_dummy43_34, _dummy44_34, _dummy45_34, _dummy46_34);
  _temp1_8_34.snd = _dummy47_34.snd;
  _dummy48_34 = _dummy47_34.fst;
  write(83,_dummy48_34);
  _dummy49_34 = _temp1_8_34.snd;
  write(84,_dummy49_34);
  return NULL;
}


//-------------------- CORE 35(3,5) ---------------------

void sumrotate_35() {
    int _cond_35; 
  write(85,read(25));
}

void *main_35(void *dummy) {
  int _cond_35; int _dummy23_35; int _dummy22_35; int _dummy21_35; int _dummy20_35; int _dummy19_35; int _dummy18_35; int _dummy17_35; int _dummy16_35; int _dummy15_35; int _dummy14_35; int _dummy13_35; int _dummy12_35; int _dummy11_35; int _dummy10_35; int _dummy9_35; int _dummy8_35; int _dummy7_35; int _dummy6_35; int _dummy5_35; int _dummy4_35; int _dummy3_35; int _dummy2_35; int _dummy1_35; int _dummy0_35; 
  int hash_1_35[4] = {26437, 61389, 39098, 4146};
  _dummy0_35 = 0;
  _dummy1_35 = hash_1_35[_dummy0_35];
  write(25,_dummy1_35);
  _dummy2_35 = 1;
  _dummy3_35 = hash_1_35[_dummy2_35];
  write(85,_dummy3_35);
  _dummy4_35 = 2;
  _dummy5_35 = hash_1_35[_dummy4_35];
  write(85,_dummy5_35);
  _dummy6_35 = 3;
  _dummy7_35 = hash_1_35[_dummy6_35];
  write(25,_dummy7_35);
  for(int i_35 = 0; i_35 < 16; ++i_35) {

    sumrotate_35();
  }

  for(int i_35 = 16; i_35 < 32; ++i_35) {

    sumrotate_35();
  }

  for(int i_35 = 32; i_35 < 48; ++i_35) {

    sumrotate_35();
  }

  for(int i_35 = 48; i_35 < 64; ++i_35) {

    sumrotate_35();
  }

  _dummy8_35 = 0;
  _dummy9_35 = hash_1_35[_dummy8_35];
  write(84,_dummy9_35);
  write(84,read(25));
  _dummy10_35 = read(84);
  _dummy11_35 = 0;
  hash_1_35[_dummy11_35] = _dummy10_35;
  _dummy12_35 = 1;
  _dummy13_35 = hash_1_35[_dummy12_35];
  write(84,_dummy13_35);
  write(84,read(85));
  _dummy14_35 = read(84);
  _dummy15_35 = 1;
  hash_1_35[_dummy15_35] = _dummy14_35;
  _dummy16_35 = 2;
  _dummy17_35 = hash_1_35[_dummy16_35];
  write(84,_dummy17_35);
  write(84,read(85));
  _dummy18_35 = read(84);
  _dummy19_35 = 2;
  hash_1_35[_dummy19_35] = _dummy18_35;
  _dummy20_35 = 3;
  _dummy21_35 = hash_1_35[_dummy20_35];
  write(84,_dummy21_35);
  write(84,read(25));
  _dummy22_35 = read(84);
  _dummy23_35 = 3;
  hash_1_35[_dummy23_35] = _dummy22_35;
  return NULL;
}


//-------------------- CORE 36(3,6) ---------------------

int sumrotate_36(int b_1_36) {
  int _return_36;
  int _cond_36; int _dummy2_36; int _dummy1_36; int _dummy0_36; 
  _dummy0_36 = b_1_36;
  write(26,_dummy0_36);
  _return_36 = read(85);
  _dummy2_36 = _return_36;
  return _dummy2_36;
}

void *main_36(void *dummy) {
  int _cond_36; int _dummy39_36; int _dummy38_36; int _dummy37_36; int _dummy36_36; int _dummy35_36; int _dummy34_36; int _dummy33_36; int _dummy32_36; int _dummy31_36; int _dummy30_36; int _dummy29_36; int _dummy28_36; int _dummy27_36; int _dummy26_36; int _dummy25_36; int _dummy24_36; int _dummy23_36; int _dummy22_36; int _dummy21_36; int _dummy20_36; int _dummy19_36; int _dummy18_36; int _dummy17_36; int _dummy16_36; int _dummy15_36; int _dummy14_36; int _dummy13_36; int _dummy12_36; int _dummy11_36; int _dummy10_36; int _dummy9_36; int _dummy8_36; int _dummy7_36; int _dummy6_36; int _dummy5_36; int _dummy4_36; int _dummy3_36; 
  int b_1_36;
  int c_1_36;
  int temp_1_36;
  b_1_36 = read(85);
  c_1_36 = read(85);
  for(int i_36 = 0; i_36 < 16; ++i_36) {

    _dummy5_36 = b_1_36;
    write(26,_dummy5_36);
    _dummy6_36 = c_1_36;
    write(26,_dummy6_36);
    _dummy7_36 = b_1_36;
    write(26,_dummy7_36);
    _dummy8_36 = b_1_36;
    temp_1_36 = sumrotate_36(_dummy8_36);
    _dummy11_36 = c_1_36;
    write(26,_dummy11_36);
    c_1_36 = b_1_36;
    b_1_36 = temp_1_36;
  }

  for(int i_36 = 16; i_36 < 32; ++i_36) {

    _dummy14_36 = b_1_36;
    write(26,_dummy14_36);
    _dummy15_36 = c_1_36;
    write(26,_dummy15_36);
    _dummy16_36 = b_1_36;
    temp_1_36 = sumrotate_36(_dummy16_36);
    _dummy19_36 = c_1_36;
    write(26,_dummy19_36);
    c_1_36 = b_1_36;
    b_1_36 = temp_1_36;
  }

  for(int i_36 = 32; i_36 < 48; ++i_36) {

    _dummy22_36 = b_1_36;
    write(26,_dummy22_36);
    _dummy23_36 = c_1_36;
    write(26,_dummy23_36);
    _dummy24_36 = b_1_36;
    temp_1_36 = sumrotate_36(_dummy24_36);
    _dummy27_36 = c_1_36;
    write(26,_dummy27_36);
    c_1_36 = b_1_36;
    b_1_36 = temp_1_36;
  }

  for(int i_36 = 48; i_36 < 64; ++i_36) {

    _dummy30_36 = c_1_36;
    write(26,_dummy30_36);
    _dummy31_36 = b_1_36;
    write(26,_dummy31_36);
    _dummy32_36 = b_1_36;
    temp_1_36 = sumrotate_36(_dummy32_36);
    _dummy35_36 = c_1_36;
    write(26,_dummy35_36);
    c_1_36 = b_1_36;
    b_1_36 = temp_1_36;
  }

  _dummy38_36 = b_1_36;
  write(85,_dummy38_36);
  _dummy39_36 = c_1_36;
  write(85,_dummy39_36);
  return NULL;
}


//-------------------- CORE 37(3,7) ---------------------

void *main_37(void *dummy) {
  int _cond_37; int _dummy0_37; 
  int r_37[16] = {6, 10, 15, 21, 6, 10, 15, 21, 6, 10, 15, 21, 6, 10, 15, 21};
  for(int i_37 = 48; i_37 < 64; ++i_37) {

    _dummy0_37 = r_37[i_37-48];
    write(87,_dummy0_37);
  }

  return NULL;
}


//-------------------- CORE 38(3,8) ---------------------

void sumrotate_38(int r_38) {
    int _cond_38; int _dummy0_38; 
  _dummy0_38 = r_38;
  write(28,_dummy0_38);
}

void *main_38(void *dummy) {
  int _cond_38; int _dummy4_38; int _dummy3_38; int _dummy2_38; int _dummy1_38; 
  int r_38[16] = {7, 12, 17, 22, 7, 12, 17, 22, 7, 12, 17, 22, 7, 12, 17, 22};
  for(int i_38 = 0; i_38 < 16; ++i_38) {

    _dummy1_38 = r_38[i_38];
    sumrotate_38(_dummy1_38);
  }

  for(int i_38 = 16; i_38 < 32; ++i_38) {

    _dummy2_38 = read(28);
    sumrotate_38(_dummy2_38);
  }

  for(int i_38 = 32; i_38 < 48; ++i_38) {

    _dummy3_38 = read(88);
    sumrotate_38(_dummy3_38);
  }

  for(int i_38 = 48; i_38 < 64; ++i_38) {

    _dummy4_38 = read(87);
    sumrotate_38(_dummy4_38);
  }

  return NULL;
}


//-------------------- CORE 39(3,9) ---------------------

void *main_39(void *dummy) {
  int _cond_39; int _dummy0_39; 
  int r_39[16] = {4, 11, 16, 23, 4, 11, 16, 23, 4, 11, 16, 23, 4, 11, 16, 23};
  for(int i_39 = 32; i_39 < 48; ++i_39) {

    _dummy0_39 = r_39[i_39-32];
    write(88,_dummy0_39);
  }

  return NULL;
}


//-------------------- CORE 40(4,0) ---------------------


//-------------------- CORE 41(4,1) ---------------------


//-------------------- CORE 42(4,2) ---------------------


//-------------------- CORE 43(4,3) ---------------------


//-------------------- CORE 44(4,4) ---------------------


//-------------------- CORE 45(4,5) ---------------------


//-------------------- CORE 46(4,6) ---------------------


//-------------------- CORE 47(4,7) ---------------------


//-------------------- CORE 48(4,8) ---------------------


//-------------------- CORE 49(4,9) ---------------------


//-------------------- CORE 50(5,0) ---------------------


int main() {
  pthread_t t_2, t_3, t_4, t_5, t_6, t_7, t_8, t_11, t_12, t_13, t_14, t_15, t_16, t_17, t_18, t_22, t_23, t_24, t_25, t_26, t_28, t_32, t_33, t_34, t_35, t_36, t_37, t_38, t_39;
  setup();
  pthread_create(&t_2, NULL, main_2, NULL);
  pthread_create(&t_3, NULL, main_3, NULL);
  pthread_create(&t_4, NULL, main_4, NULL);
  pthread_create(&t_5, NULL, main_5, NULL);
  pthread_create(&t_6, NULL, main_6, NULL);
  pthread_create(&t_7, NULL, main_7, NULL);
  pthread_create(&t_8, NULL, main_8, NULL);
  pthread_create(&t_11, NULL, main_11, NULL);
  pthread_create(&t_12, NULL, main_12, NULL);
  pthread_create(&t_13, NULL, main_13, NULL);
  pthread_create(&t_14, NULL, main_14, NULL);
  pthread_create(&t_15, NULL, main_15, NULL);
  pthread_create(&t_16, NULL, main_16, NULL);
  pthread_create(&t_17, NULL, main_17, NULL);
  pthread_create(&t_18, NULL, main_18, NULL);
  pthread_create(&t_22, NULL, main_22, NULL);
  pthread_create(&t_23, NULL, main_23, NULL);
  pthread_create(&t_24, NULL, main_24, NULL);
  pthread_create(&t_25, NULL, main_25, NULL);
  pthread_create(&t_26, NULL, main_26, NULL);
  pthread_create(&t_28, NULL, main_28, NULL);
  pthread_create(&t_32, NULL, main_32, NULL);
  pthread_create(&t_33, NULL, main_33, NULL);
  pthread_create(&t_34, NULL, main_34, NULL);
  pthread_create(&t_35, NULL, main_35, NULL);
  pthread_create(&t_36, NULL, main_36, NULL);
  pthread_create(&t_37, NULL, main_37, NULL);
  pthread_create(&t_38, NULL, main_38, NULL);
  pthread_create(&t_39, NULL, main_39, NULL);
  pthread_join(t_2, NULL);
  pthread_join(t_3, NULL);
  pthread_join(t_4, NULL);
  pthread_join(t_5, NULL);
  pthread_join(t_6, NULL);
  pthread_join(t_7, NULL);
  pthread_join(t_8, NULL);
  pthread_join(t_11, NULL);
  pthread_join(t_12, NULL);
  pthread_join(t_13, NULL);
  pthread_join(t_14, NULL);
  pthread_join(t_15, NULL);
  pthread_join(t_16, NULL);
  pthread_join(t_17, NULL);
  pthread_join(t_18, NULL);
  pthread_join(t_22, NULL);
  pthread_join(t_23, NULL);
  pthread_join(t_24, NULL);
  pthread_join(t_25, NULL);
  pthread_join(t_26, NULL);
  pthread_join(t_28, NULL);
  pthread_join(t_32, NULL);
  pthread_join(t_33, NULL);
  pthread_join(t_34, NULL);
  pthread_join(t_35, NULL);
  pthread_join(t_36, NULL);
  pthread_join(t_37, NULL);
  pthread_join(t_38, NULL);
  pthread_join(t_39, NULL);
  return 0;
}
