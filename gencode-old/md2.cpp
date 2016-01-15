#include "communication.cpp"

//-------------------- CORE 0(0,0) ---------------------


//-------------------- CORE 1(0,1) ---------------------


//-------------------- CORE 2(0,2) ---------------------

void *main_2(void *dummy) {
  int _cond_2; 
  write(52,read(2));
  write(52,read(2));
  return NULL;
}


//-------------------- CORE 3(0,3) ---------------------

int cadd_3(int x_0_3,int y_0_3) {
  int _return_3;
  int _cond_3; int _dummy10_3; int _dummy9_3; int _dummy8_3; int _dummy7_3; int _dummy6_3; int _dummy5_3; int _dummy4_3; int _dummy3_3; int _dummy2_3; int _dummy1_3; int _dummy0_3; 
  int z_0_3;
  _dummy0_3 = x_0_3;
  _dummy1_3 = y_0_3;
  z_0_3 = (_dummy0_3+_dummy1_3);
  _dummy3_3 = z_0_3;
  _dummy4_3 = 16;
  _dummy5_3 = (_dummy3_3>>_dummy4_3);
  write(53,_dummy5_3);
  _dummy6_3 = z_0_3;
  _dummy7_3 = 65535;
  z_0_3 = (_dummy6_3&_dummy7_3);
  _return_3 = z_0_3;
  _dummy10_3 = _return_3;
  return _dummy10_3;
}

void *main_3(void *dummy) {
  int _cond_3; int _dummy26_3; int _dummy25_3; int _dummy24_3; int _dummy23_3; int _dummy22_3; int _dummy21_3; int _dummy20_3; int _dummy19_3; int _dummy18_3; int _dummy17_3; int _dummy16_3; int _dummy15_3; int _dummy14_3; int _dummy13_3; int _dummy12_3; int _dummy11_3; 
  _dummy11_3 = read(3);
  _dummy12_3 = read(3);
  _dummy14_3 = cadd_3(_dummy11_3, _dummy12_3);
  write(3,_dummy14_3);
  _dummy15_3 = read(3);
  _dummy16_3 = read(52);
  _dummy18_3 = cadd_3(_dummy15_3, _dummy16_3);
  write(3,_dummy18_3);
  _dummy19_3 = read(3);
  _dummy20_3 = read(52);
  _dummy22_3 = cadd_3(_dummy19_3, _dummy20_3);
  write(3,_dummy22_3);
  _dummy23_3 = read(3);
  _dummy24_3 = read(3);
  _dummy26_3 = cadd_3(_dummy23_3, _dummy24_3);
  write(3,_dummy26_3);
  return NULL;
}


//-------------------- CORE 4(0,4) ---------------------

int cadd_4(int x_1_4,int y_1_4) {
  int _return_4;
  int _cond_4; int _dummy11_4; int _dummy10_4; int _dummy9_4; int _dummy8_4; int _dummy7_4; int _dummy6_4; int _dummy5_4; int _dummy4_4; int _dummy3_4; int _dummy2_4; int _dummy1_4; int _dummy0_4; 
  int z_1_4;
  _dummy0_4 = x_1_4;
  _dummy1_4 = y_1_4;
  _dummy2_4 = (_dummy0_4+_dummy1_4);
  _dummy3_4 = read(53);
  _dummy4_4 = 3;
  _dummy5_4 = (_dummy3_4&_dummy4_4);
  z_1_4 = (_dummy2_4+_dummy5_4);
  _dummy7_4 = z_1_4;
  _dummy8_4 = 65535;
  z_1_4 = (_dummy7_4&_dummy8_4);
  _return_4 = z_1_4;
  _dummy11_4 = _return_4;
  return _dummy11_4;
}

void *main_4(void *dummy) {
  int _cond_4; int _dummy27_4; int _dummy26_4; int _dummy25_4; int _dummy24_4; int _dummy23_4; int _dummy22_4; int _dummy21_4; int _dummy20_4; int _dummy19_4; int _dummy18_4; int _dummy17_4; int _dummy16_4; int _dummy15_4; int _dummy14_4; int _dummy13_4; int _dummy12_4; 
  _dummy12_4 = read(54);
  _dummy13_4 = read(54);
  _dummy15_4 = cadd_4(_dummy12_4, _dummy13_4);
  write(54,_dummy15_4);
  _dummy16_4 = read(54);
  _dummy17_4 = read(54);
  _dummy19_4 = cadd_4(_dummy16_4, _dummy17_4);
  write(54,_dummy19_4);
  _dummy20_4 = read(54);
  _dummy21_4 = read(54);
  _dummy23_4 = cadd_4(_dummy20_4, _dummy21_4);
  write(54,_dummy23_4);
  _dummy24_4 = read(54);
  _dummy25_4 = read(54);
  _dummy27_4 = cadd_4(_dummy24_4, _dummy25_4);
  write(54,_dummy27_4);
  return NULL;
}


//-------------------- CORE 5(0,5) ---------------------

void sumrotate_5() {
    int _cond_5; 
  write(55,read(5));
}

void *main_5(void *dummy) {
  int _cond_5; int _dummy23_5; int _dummy22_5; int _dummy21_5; int _dummy20_5; int _dummy19_5; int _dummy18_5; int _dummy17_5; int _dummy16_5; int _dummy15_5; int _dummy14_5; int _dummy13_5; int _dummy12_5; int _dummy11_5; int _dummy10_5; int _dummy9_5; int _dummy8_5; int _dummy7_5; int _dummy6_5; int _dummy5_5; int _dummy4_5; int _dummy3_5; int _dummy2_5; int _dummy1_5; int _dummy0_5; 
  int hash_1_5[4] = {26437, 61389, 39098, 4146};
  _dummy0_5 = 0;
  _dummy1_5 = hash_1_5[_dummy0_5];
  write(5,_dummy1_5);
  _dummy2_5 = 1;
  _dummy3_5 = hash_1_5[_dummy2_5];
  write(55,_dummy3_5);
  _dummy4_5 = 2;
  _dummy5_5 = hash_1_5[_dummy4_5];
  write(55,_dummy5_5);
  _dummy6_5 = 3;
  _dummy7_5 = hash_1_5[_dummy6_5];
  write(5,_dummy7_5);
  for(int i_5 = 0; i_5 < 16; ++i_5) {

    sumrotate_5();
  }

  for(int i_5 = 16; i_5 < 32; ++i_5) {

    sumrotate_5();
  }

  for(int i_5 = 32; i_5 < 48; ++i_5) {

    sumrotate_5();
  }

  for(int i_5 = 48; i_5 < 64; ++i_5) {

    sumrotate_5();
  }

  _dummy8_5 = 0;
  _dummy9_5 = hash_1_5[_dummy8_5];
  write(54,_dummy9_5);
  write(54,read(5));
  _dummy10_5 = read(54);
  _dummy11_5 = 0;
  hash_1_5[_dummy11_5] = _dummy10_5;
  _dummy12_5 = 1;
  _dummy13_5 = hash_1_5[_dummy12_5];
  write(54,_dummy13_5);
  write(54,read(55));
  _dummy14_5 = read(54);
  _dummy15_5 = 1;
  hash_1_5[_dummy15_5] = _dummy14_5;
  _dummy16_5 = 2;
  _dummy17_5 = hash_1_5[_dummy16_5];
  write(54,_dummy17_5);
  write(54,read(55));
  _dummy18_5 = read(54);
  _dummy19_5 = 2;
  hash_1_5[_dummy19_5] = _dummy18_5;
  _dummy20_5 = 3;
  _dummy21_5 = hash_1_5[_dummy20_5];
  write(54,_dummy21_5);
  write(54,read(5));
  _dummy22_5 = read(54);
  _dummy23_5 = 3;
  hash_1_5[_dummy23_5] = _dummy22_5;
  return NULL;
}


//-------------------- CORE 6(0,6) ---------------------

int sumrotate_6(int b_1_6) {
  int _return_6;
  int _cond_6; int _dummy2_6; int _dummy1_6; int _dummy0_6; 
  _dummy0_6 = b_1_6;
  write(6,_dummy0_6);
  _return_6 = read(55);
  _dummy2_6 = _return_6;
  return _dummy2_6;
}

void *main_6(void *dummy) {
  int _cond_6; int _dummy39_6; int _dummy38_6; int _dummy37_6; int _dummy36_6; int _dummy35_6; int _dummy34_6; int _dummy33_6; int _dummy32_6; int _dummy31_6; int _dummy30_6; int _dummy29_6; int _dummy28_6; int _dummy27_6; int _dummy26_6; int _dummy25_6; int _dummy24_6; int _dummy23_6; int _dummy22_6; int _dummy21_6; int _dummy20_6; int _dummy19_6; int _dummy18_6; int _dummy17_6; int _dummy16_6; int _dummy15_6; int _dummy14_6; int _dummy13_6; int _dummy12_6; int _dummy11_6; int _dummy10_6; int _dummy9_6; int _dummy8_6; int _dummy7_6; int _dummy6_6; int _dummy5_6; int _dummy4_6; int _dummy3_6; 
  int b_1_6;
  int c_1_6;
  int temp_1_6;
  b_1_6 = read(55);
  c_1_6 = read(55);
  for(int i_6 = 0; i_6 < 16; ++i_6) {

    _dummy5_6 = b_1_6;
    write(6,_dummy5_6);
    _dummy6_6 = c_1_6;
    write(6,_dummy6_6);
    _dummy7_6 = b_1_6;
    write(6,_dummy7_6);
    _dummy8_6 = b_1_6;
    temp_1_6 = sumrotate_6(_dummy8_6);
    _dummy11_6 = c_1_6;
    write(6,_dummy11_6);
    c_1_6 = b_1_6;
    b_1_6 = temp_1_6;
  }

  for(int i_6 = 16; i_6 < 32; ++i_6) {

    _dummy14_6 = b_1_6;
    write(6,_dummy14_6);
    _dummy15_6 = c_1_6;
    write(6,_dummy15_6);
    _dummy16_6 = b_1_6;
    temp_1_6 = sumrotate_6(_dummy16_6);
    _dummy19_6 = c_1_6;
    write(6,_dummy19_6);
    c_1_6 = b_1_6;
    b_1_6 = temp_1_6;
  }

  for(int i_6 = 32; i_6 < 48; ++i_6) {

    _dummy22_6 = b_1_6;
    write(6,_dummy22_6);
    _dummy23_6 = c_1_6;
    write(6,_dummy23_6);
    _dummy24_6 = b_1_6;
    temp_1_6 = sumrotate_6(_dummy24_6);
    _dummy27_6 = c_1_6;
    write(6,_dummy27_6);
    c_1_6 = b_1_6;
    b_1_6 = temp_1_6;
  }

  for(int i_6 = 48; i_6 < 64; ++i_6) {

    _dummy30_6 = c_1_6;
    write(6,_dummy30_6);
    _dummy31_6 = b_1_6;
    write(6,_dummy31_6);
    _dummy32_6 = b_1_6;
    temp_1_6 = sumrotate_6(_dummy32_6);
    _dummy35_6 = c_1_6;
    write(6,_dummy35_6);
    c_1_6 = b_1_6;
    b_1_6 = temp_1_6;
  }

  _dummy38_6 = b_1_6;
  write(55,_dummy38_6);
  _dummy39_6 = c_1_6;
  write(55,_dummy39_6);
  return NULL;
}


//-------------------- CORE 7(0,7) ---------------------


//-------------------- CORE 8(0,8) ---------------------


//-------------------- CORE 9(0,9) ---------------------


//-------------------- CORE 10(1,0) ---------------------


//-------------------- CORE 11(1,1) ---------------------


//-------------------- CORE 12(1,2) ---------------------

int sumrotate_12(int b_0_12) {
  int _return_12;
  int _cond_12; int _dummy2_12; int _dummy1_12; int _dummy0_12; 
  _dummy0_12 = b_0_12;
  write(12,_dummy0_12);
  _return_12 = read(62);
  _dummy2_12 = _return_12;
  return _dummy2_12;
}

void *main_12(void *dummy) {
  int _cond_12; int _dummy39_12; int _dummy38_12; int _dummy37_12; int _dummy36_12; int _dummy35_12; int _dummy34_12; int _dummy33_12; int _dummy32_12; int _dummy31_12; int _dummy30_12; int _dummy29_12; int _dummy28_12; int _dummy27_12; int _dummy26_12; int _dummy25_12; int _dummy24_12; int _dummy23_12; int _dummy22_12; int _dummy21_12; int _dummy20_12; int _dummy19_12; int _dummy18_12; int _dummy17_12; int _dummy16_12; int _dummy15_12; int _dummy14_12; int _dummy13_12; int _dummy12_12; int _dummy11_12; int _dummy10_12; int _dummy9_12; int _dummy8_12; int _dummy7_12; int _dummy6_12; int _dummy5_12; int _dummy4_12; int _dummy3_12; 
  int b_0_12;
  int c_0_12;
  int temp_0_12;
  b_0_12 = read(62);
  c_0_12 = read(62);
  for(int i_12 = 0; i_12 < 16; ++i_12) {

    _dummy5_12 = b_0_12;
    write(12,_dummy5_12);
    _dummy6_12 = c_0_12;
    write(12,_dummy6_12);
    _dummy7_12 = b_0_12;
    write(12,_dummy7_12);
    _dummy8_12 = b_0_12;
    temp_0_12 = sumrotate_12(_dummy8_12);
    _dummy11_12 = c_0_12;
    write(12,_dummy11_12);
    c_0_12 = b_0_12;
    b_0_12 = temp_0_12;
  }

  for(int i_12 = 16; i_12 < 32; ++i_12) {

    _dummy14_12 = b_0_12;
    write(12,_dummy14_12);
    _dummy15_12 = c_0_12;
    write(12,_dummy15_12);
    _dummy16_12 = b_0_12;
    temp_0_12 = sumrotate_12(_dummy16_12);
    _dummy19_12 = c_0_12;
    write(12,_dummy19_12);
    c_0_12 = b_0_12;
    b_0_12 = temp_0_12;
  }

  for(int i_12 = 32; i_12 < 48; ++i_12) {

    _dummy22_12 = b_0_12;
    write(12,_dummy22_12);
    _dummy23_12 = c_0_12;
    write(12,_dummy23_12);
    _dummy24_12 = b_0_12;
    temp_0_12 = sumrotate_12(_dummy24_12);
    _dummy27_12 = c_0_12;
    write(12,_dummy27_12);
    c_0_12 = b_0_12;
    b_0_12 = temp_0_12;
  }

  for(int i_12 = 48; i_12 < 64; ++i_12) {

    _dummy30_12 = c_0_12;
    write(12,_dummy30_12);
    _dummy31_12 = b_0_12;
    write(12,_dummy31_12);
    _dummy32_12 = b_0_12;
    temp_0_12 = sumrotate_12(_dummy32_12);
    _dummy35_12 = c_0_12;
    write(12,_dummy35_12);
    c_0_12 = b_0_12;
    b_0_12 = temp_0_12;
  }

  _dummy38_12 = b_0_12;
  write(2,_dummy38_12);
  _dummy39_12 = c_0_12;
  write(2,_dummy39_12);
  return NULL;
}


//-------------------- CORE 13(1,3) ---------------------

void sumrotate_13() {
    int _cond_13; 
  write(62,read(63));
}

void *main_13(void *dummy) {
  int _cond_13; int _dummy23_13; int _dummy22_13; int _dummy21_13; int _dummy20_13; int _dummy19_13; int _dummy18_13; int _dummy17_13; int _dummy16_13; int _dummy15_13; int _dummy14_13; int _dummy13_13; int _dummy12_13; int _dummy11_13; int _dummy10_13; int _dummy9_13; int _dummy8_13; int _dummy7_13; int _dummy6_13; int _dummy5_13; int _dummy4_13; int _dummy3_13; int _dummy2_13; int _dummy1_13; int _dummy0_13; 
  int hash_0_13[4] = {8961, 43913, 56574, 21622};
  _dummy0_13 = 0;
  _dummy1_13 = hash_0_13[_dummy0_13];
  write(13,_dummy1_13);
  _dummy2_13 = 1;
  _dummy3_13 = hash_0_13[_dummy2_13];
  write(62,_dummy3_13);
  _dummy4_13 = 2;
  _dummy5_13 = hash_0_13[_dummy4_13];
  write(62,_dummy5_13);
  _dummy6_13 = 3;
  _dummy7_13 = hash_0_13[_dummy6_13];
  write(13,_dummy7_13);
  for(int i_13 = 0; i_13 < 16; ++i_13) {

    sumrotate_13();
  }

  for(int i_13 = 16; i_13 < 32; ++i_13) {

    sumrotate_13();
  }

  for(int i_13 = 32; i_13 < 48; ++i_13) {

    sumrotate_13();
  }

  for(int i_13 = 48; i_13 < 64; ++i_13) {

    sumrotate_13();
  }

  _dummy8_13 = 0;
  _dummy9_13 = hash_0_13[_dummy8_13];
  write(3,_dummy9_13);
  write(3,read(13));
  _dummy10_13 = read(3);
  _dummy11_13 = 0;
  hash_0_13[_dummy11_13] = _dummy10_13;
  _dummy12_13 = 1;
  _dummy13_13 = hash_0_13[_dummy12_13];
  write(3,_dummy13_13);
  _dummy14_13 = read(3);
  _dummy15_13 = 1;
  hash_0_13[_dummy15_13] = _dummy14_13;
  _dummy16_13 = 2;
  _dummy17_13 = hash_0_13[_dummy16_13];
  write(3,_dummy17_13);
  _dummy18_13 = read(3);
  _dummy19_13 = 2;
  hash_0_13[_dummy19_13] = _dummy18_13;
  _dummy20_13 = 3;
  _dummy21_13 = hash_0_13[_dummy20_13];
  write(3,_dummy21_13);
  write(3,read(13));
  _dummy22_13 = read(3);
  _dummy23_13 = 3;
  hash_0_13[_dummy23_13] = _dummy22_13;
  return NULL;
}


//-------------------- CORE 14(1,4) ---------------------

void sumrotate_14(int m_0_14) {
    int _cond_14; int _dummy0_14; 
  _dummy0_14 = m_0_14;
  write(14,_dummy0_14);
  write(63,read(14));
}

void *main_14(void *dummy) {
  int _cond_14; int _dummy32_14; int _dummy31_14; int _dummy30_14; int _dummy29_14; int _dummy28_14; int _dummy27_14; int _dummy26_14; int _dummy25_14; int _dummy24_14; int _dummy23_14; int _dummy22_14; int _dummy21_14; int _dummy20_14; int _dummy19_14; int _dummy18_14; int _dummy17_14; int _dummy16_14; int _dummy15_14; int _dummy14_14; int _dummy13_14; int _dummy12_14; int _dummy11_14; int _dummy10_14; int _dummy9_14; int _dummy8_14; int _dummy7_14; int _dummy6_14; int _dummy5_14; int _dummy4_14; int _dummy3_14; int _dummy2_14; int _dummy1_14; 
  int message_0_14[16] = {25185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0};
  int g_0_14;
  int inc_0_14;
  g_0_14 = 0;
  inc_0_14 = 1;
  for(int i_14 = 0; i_14 < 16; ++i_14) {

    _dummy3_14 = message_0_14[g_0_14];
    sumrotate_14(_dummy3_14);
    _dummy4_14 = g_0_14;
    _dummy5_14 = inc_0_14;
    _dummy6_14 = (_dummy4_14+_dummy5_14);
    _dummy7_14 = 15;
    g_0_14 = (_dummy6_14&_dummy7_14);
  }

  g_0_14 = 1;
  inc_0_14 = 5;
  for(int i_14 = 16; i_14 < 32; ++i_14) {

    _dummy11_14 = message_0_14[g_0_14];
    sumrotate_14(_dummy11_14);
    _dummy12_14 = g_0_14;
    _dummy13_14 = inc_0_14;
    _dummy14_14 = (_dummy12_14+_dummy13_14);
    _dummy15_14 = 15;
    g_0_14 = (_dummy14_14&_dummy15_14);
  }

  g_0_14 = 5;
  inc_0_14 = 3;
  for(int i_14 = 32; i_14 < 48; ++i_14) {

    _dummy19_14 = message_0_14[g_0_14];
    sumrotate_14(_dummy19_14);
    _dummy20_14 = g_0_14;
    _dummy21_14 = inc_0_14;
    _dummy22_14 = (_dummy20_14+_dummy21_14);
    _dummy23_14 = 15;
    g_0_14 = (_dummy22_14&_dummy23_14);
  }

  g_0_14 = 0;
  inc_0_14 = 7;
  for(int i_14 = 48; i_14 < 64; ++i_14) {

    _dummy27_14 = message_0_14[g_0_14];
    sumrotate_14(_dummy27_14);
    _dummy28_14 = g_0_14;
    _dummy29_14 = inc_0_14;
    _dummy30_14 = (_dummy28_14+_dummy29_14);
    _dummy31_14 = 15;
    g_0_14 = (_dummy30_14&_dummy31_14);
  }

  return NULL;
}


//-------------------- CORE 15(1,5) ---------------------

void sumrotate_15() {
    int _cond_15; 
  write(5,read(15));
}

void *main_15(void *dummy) {
  int _cond_15; int _dummy20_15; int _dummy19_15; int _dummy18_15; int _dummy17_15; int _dummy16_15; int _dummy15_15; int _dummy14_15; int _dummy13_15; int _dummy12_15; int _dummy11_15; int _dummy10_15; int _dummy9_15; int _dummy8_15; int _dummy7_15; int _dummy6_15; int _dummy5_15; int _dummy4_15; int _dummy3_15; int _dummy2_15; int _dummy1_15; int _dummy0_15; 
  int a_1_15;
  int d_1_15;
  a_1_15 = read(5);
  d_1_15 = read(5);
  for(int i_15 = 0; i_15 < 16; ++i_15) {

    _dummy2_15 = d_1_15;
    write(65,_dummy2_15);
    _dummy3_15 = a_1_15;
    write(15,_dummy3_15);
    sumrotate_15();
    a_1_15 = d_1_15;
    d_1_15 = read(65);
  }

  for(int i_15 = 16; i_15 < 32; ++i_15) {

    _dummy6_15 = d_1_15;
    write(65,_dummy6_15);
    _dummy7_15 = d_1_15;
    write(65,_dummy7_15);
    _dummy8_15 = a_1_15;
    write(15,_dummy8_15);
    sumrotate_15();
    a_1_15 = d_1_15;
    d_1_15 = read(65);
  }

  for(int i_15 = 32; i_15 < 48; ++i_15) {

    _dummy11_15 = d_1_15;
    write(65,_dummy11_15);
    _dummy12_15 = a_1_15;
    write(15,_dummy12_15);
    sumrotate_15();
    a_1_15 = d_1_15;
    d_1_15 = read(65);
  }

  for(int i_15 = 48; i_15 < 64; ++i_15) {

    _dummy15_15 = d_1_15;
    write(65,_dummy15_15);
    _dummy16_15 = a_1_15;
    write(15,_dummy16_15);
    sumrotate_15();
    a_1_15 = d_1_15;
    d_1_15 = read(65);
  }

  _dummy19_15 = a_1_15;
  write(5,_dummy19_15);
  _dummy20_15 = d_1_15;
  write(5,_dummy20_15);
  return NULL;
}


//-------------------- CORE 16(1,6) ---------------------

void sumrotate_16(int f_1_16) {
    int _cond_16; int _dummy0_16; 
  _dummy0_16 = f_1_16;
  write(16,_dummy0_16);
  write(16,read(6));
}

void *main_16(void *dummy) {
  int _cond_16; int _dummy34_16; int _dummy33_16; int _dummy32_16; int _dummy31_16; int _dummy30_16; int _dummy29_16; int _dummy28_16; int _dummy27_16; int _dummy26_16; int _dummy25_16; int _dummy24_16; int _dummy23_16; int _dummy22_16; int _dummy21_16; int _dummy20_16; int _dummy19_16; int _dummy18_16; int _dummy17_16; int _dummy16_16; int _dummy15_16; int _dummy14_16; int _dummy13_16; int _dummy12_16; int _dummy11_16; int _dummy10_16; int _dummy9_16; int _dummy8_16; int _dummy7_16; int _dummy6_16; int _dummy5_16; int _dummy4_16; int _dummy3_16; int _dummy2_16; int _dummy1_16; 
  int f1_1_16;
  for(int i_16 = 0; i_16 < 16; ++i_16) {

    _dummy1_16 = read(6);
    _dummy2_16 = read(6);
    _dummy3_16 = (_dummy1_16&_dummy2_16);
    _dummy4_16 = read(6);
    _dummy5_16 = 65535;
    _dummy6_16 = (_dummy4_16^_dummy5_16);
    _dummy7_16 = read(65);
    _dummy8_16 = (_dummy6_16&_dummy7_16);
    f1_1_16 = (_dummy3_16|_dummy8_16);
    _dummy10_16 = f1_1_16;
    sumrotate_16(_dummy10_16);
    write(65,read(6));
  }

  for(int i_16 = 16; i_16 < 32; ++i_16) {

    _dummy11_16 = read(65);
    _dummy12_16 = read(6);
    _dummy13_16 = (_dummy11_16&_dummy12_16);
    _dummy14_16 = read(65);
    _dummy15_16 = 65535;
    _dummy16_16 = (_dummy14_16^_dummy15_16);
    _dummy17_16 = read(6);
    _dummy18_16 = (_dummy16_16&_dummy17_16);
    f1_1_16 = (_dummy13_16|_dummy18_16);
    _dummy20_16 = f1_1_16;
    sumrotate_16(_dummy20_16);
    write(65,read(6));
  }

  for(int i_16 = 32; i_16 < 48; ++i_16) {

    _dummy21_16 = read(6);
    _dummy22_16 = read(6);
    _dummy23_16 = (_dummy21_16^_dummy22_16);
    _dummy24_16 = read(65);
    f1_1_16 = (_dummy23_16^_dummy24_16);
    _dummy26_16 = f1_1_16;
    sumrotate_16(_dummy26_16);
    write(65,read(6));
  }

  for(int i_16 = 48; i_16 < 64; ++i_16) {

    _dummy27_16 = read(6);
    _dummy28_16 = read(6);
    _dummy29_16 = read(65);
    _dummy30_16 = 65535;
    _dummy31_16 = (_dummy29_16^_dummy30_16);
    _dummy32_16 = (_dummy28_16|_dummy31_16);
    f1_1_16 = (_dummy27_16^_dummy32_16);
    _dummy34_16 = f1_1_16;
    sumrotate_16(_dummy34_16);
    write(65,read(6));
  }

  return NULL;
}


//-------------------- CORE 17(1,7) ---------------------


//-------------------- CORE 18(1,8) ---------------------


//-------------------- CORE 19(1,9) ---------------------


//-------------------- CORE 20(2,0) ---------------------


//-------------------- CORE 21(2,1) ---------------------

void sumrotate_21(int k_0_21) {
    int _cond_21; int _dummy0_21; 
  _dummy0_21 = k_0_21;
  write(71,_dummy0_21);
}

void *main_21(void *dummy) {
  int _cond_21; int _dummy4_21; int _dummy3_21; int _dummy2_21; int _dummy1_21; 
  int k_0_21[32] = {42104, 46934, 28891, 52974, 4015, 50730, 17939, 38145, 39128, 63407, 23473, 55230, 4386, 29075, 17294, 2081, 9570, 45888, 23121, 51114, 4189, 5203, 59009, 64456, 52710, 2006, 3463, 5357, 59653, 41976, 729, 19594};
  for(int i_21 = 0; i_21 < 16; ++i_21) {

    _dummy1_21 = k_0_21[i_21];
    sumrotate_21(_dummy1_21);
  }

  for(int i_21 = 16; i_21 < 32; ++i_21) {

    _dummy2_21 = k_0_21[i_21];
    sumrotate_21(_dummy2_21);
  }

  for(int i_21 = 32; i_21 < 48; ++i_21) {

    _dummy3_21 = read(21);
    sumrotate_21(_dummy3_21);
  }

  for(int i_21 = 48; i_21 < 64; ++i_21) {

    _dummy4_21 = read(21);
    sumrotate_21(_dummy4_21);
  }

  return NULL;
}


//-------------------- CORE 22(2,2) ---------------------

void sumrotate_22(int f_0_22) {
    int _cond_22; int _dummy0_22; 
  _dummy0_22 = f_0_22;
  write(72,_dummy0_22);
  write(72,read(71));
  write(72,read(12));
}

void *main_22(void *dummy) {
  int _cond_22; int _dummy34_22; int _dummy33_22; int _dummy32_22; int _dummy31_22; int _dummy30_22; int _dummy29_22; int _dummy28_22; int _dummy27_22; int _dummy26_22; int _dummy25_22; int _dummy24_22; int _dummy23_22; int _dummy22_22; int _dummy21_22; int _dummy20_22; int _dummy19_22; int _dummy18_22; int _dummy17_22; int _dummy16_22; int _dummy15_22; int _dummy14_22; int _dummy13_22; int _dummy12_22; int _dummy11_22; int _dummy10_22; int _dummy9_22; int _dummy8_22; int _dummy7_22; int _dummy6_22; int _dummy5_22; int _dummy4_22; int _dummy3_22; int _dummy2_22; int _dummy1_22; 
  int f1_0_22;
  for(int i_22 = 0; i_22 < 16; ++i_22) {

    _dummy1_22 = read(12);
    _dummy2_22 = read(12);
    _dummy3_22 = (_dummy1_22&_dummy2_22);
    _dummy4_22 = read(12);
    _dummy5_22 = 65535;
    _dummy6_22 = (_dummy4_22^_dummy5_22);
    _dummy7_22 = read(72);
    _dummy8_22 = (_dummy6_22&_dummy7_22);
    f1_0_22 = (_dummy3_22|_dummy8_22);
    _dummy10_22 = f1_0_22;
    sumrotate_22(_dummy10_22);
    write(72,read(12));
  }

  for(int i_22 = 16; i_22 < 32; ++i_22) {

    _dummy11_22 = read(72);
    _dummy12_22 = read(12);
    _dummy13_22 = (_dummy11_22&_dummy12_22);
    _dummy14_22 = read(72);
    _dummy15_22 = 65535;
    _dummy16_22 = (_dummy14_22^_dummy15_22);
    _dummy17_22 = read(12);
    _dummy18_22 = (_dummy16_22&_dummy17_22);
    f1_0_22 = (_dummy13_22|_dummy18_22);
    _dummy20_22 = f1_0_22;
    sumrotate_22(_dummy20_22);
    write(72,read(12));
  }

  for(int i_22 = 32; i_22 < 48; ++i_22) {

    _dummy21_22 = read(12);
    _dummy22_22 = read(12);
    _dummy23_22 = (_dummy21_22^_dummy22_22);
    _dummy24_22 = read(72);
    f1_0_22 = (_dummy23_22^_dummy24_22);
    _dummy26_22 = f1_0_22;
    sumrotate_22(_dummy26_22);
    write(72,read(12));
  }

  for(int i_22 = 48; i_22 < 64; ++i_22) {

    _dummy27_22 = read(12);
    _dummy28_22 = read(12);
    _dummy29_22 = read(72);
    _dummy30_22 = 65535;
    _dummy31_22 = (_dummy29_22^_dummy30_22);
    _dummy32_22 = (_dummy28_22|_dummy31_22);
    f1_0_22 = (_dummy27_22^_dummy32_22);
    _dummy34_22 = f1_0_22;
    sumrotate_22(_dummy34_22);
    write(72,read(12));
  }

  return NULL;
}


//-------------------- CORE 23(2,3) ---------------------

void sumrotate_23() {
    int _cond_23; 
  write(73,read(72));
  write(73,read(72));
  write(73,read(72));
}

void *main_23(void *dummy) {
  int _cond_23; int _dummy20_23; int _dummy19_23; int _dummy18_23; int _dummy17_23; int _dummy16_23; int _dummy15_23; int _dummy14_23; int _dummy13_23; int _dummy12_23; int _dummy11_23; int _dummy10_23; int _dummy9_23; int _dummy8_23; int _dummy7_23; int _dummy6_23; int _dummy5_23; int _dummy4_23; int _dummy3_23; int _dummy2_23; int _dummy1_23; int _dummy0_23; 
  int a_0_23;
  int d_0_23;
  a_0_23 = read(13);
  d_0_23 = read(13);
  for(int i_23 = 0; i_23 < 16; ++i_23) {

    _dummy2_23 = d_0_23;
    write(72,_dummy2_23);
    _dummy3_23 = a_0_23;
    write(73,_dummy3_23);
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
    write(73,_dummy8_23);
    sumrotate_23();
    a_0_23 = d_0_23;
    d_0_23 = read(72);
  }

  for(int i_23 = 32; i_23 < 48; ++i_23) {

    _dummy11_23 = d_0_23;
    write(72,_dummy11_23);
    _dummy12_23 = a_0_23;
    write(73,_dummy12_23);
    sumrotate_23();
    a_0_23 = d_0_23;
    d_0_23 = read(72);
  }

  for(int i_23 = 48; i_23 < 64; ++i_23) {

    _dummy15_23 = d_0_23;
    write(72,_dummy15_23);
    _dummy16_23 = a_0_23;
    write(73,_dummy16_23);
    sumrotate_23();
    a_0_23 = d_0_23;
    d_0_23 = read(72);
  }

  _dummy19_23 = a_0_23;
  write(13,_dummy19_23);
  _dummy20_23 = d_0_23;
  write(13,_dummy20_23);
  return NULL;
}


//-------------------- CORE 24(2,4) ---------------------

int csum_24(int x_0_24,int y_0_24) {
  int _return_24;
  int _cond_24; int _dummy10_24; int _dummy9_24; int _dummy8_24; int _dummy7_24; int _dummy6_24; int _dummy5_24; int _dummy4_24; int _dummy3_24; int _dummy2_24; int _dummy1_24; int _dummy0_24; 
  int z_0_24;
  _dummy0_24 = x_0_24;
  _dummy1_24 = y_0_24;
  z_0_24 = (_dummy0_24+_dummy1_24);
  _dummy3_24 = z_0_24;
  _dummy4_24 = 16;
  _dummy5_24 = (_dummy3_24>>_dummy4_24);
  write(74,_dummy5_24);
  _dummy6_24 = z_0_24;
  _dummy7_24 = 65535;
  z_0_24 = (_dummy6_24&_dummy7_24);
  _return_24 = z_0_24;
  _dummy10_24 = _return_24;
  return _dummy10_24;
}

void sumrotate_24(int a_0_24) {
    int _cond_24; int _dummy22_24; int _dummy21_24; int _dummy20_24; int _dummy19_24; int _dummy18_24; int _dummy17_24; int _dummy16_24; int _dummy15_24; int _dummy14_24; int _dummy13_24; int _dummy12_24; int _dummy11_24; 
  _dummy11_24 = a_0_24;
  _dummy12_24 = read(73);
  _dummy13_24 = (_dummy11_24+_dummy12_24);
  _dummy14_24 = read(73);
  _dummy15_24 = (_dummy13_24+_dummy14_24);
  _dummy16_24 = read(14);
  _dummy18_24 = csum_24(_dummy15_24, _dummy16_24);
  write(24,_dummy18_24);
  _dummy19_24 = read(73);
  _dummy20_24 = read(24);
  _dummy22_24 = csum_24(_dummy19_24, _dummy20_24);
  write(14,_dummy22_24);
}

void *main_24(void *dummy) {
  int _cond_24; int _dummy26_24; int _dummy25_24; int _dummy24_24; int _dummy23_24; 
  for(int i_24 = 0; i_24 < 16; ++i_24) {

    _dummy23_24 = read(73);
    sumrotate_24(_dummy23_24);
  }

  for(int i_24 = 16; i_24 < 32; ++i_24) {

    _dummy24_24 = read(73);
    sumrotate_24(_dummy24_24);
  }

  for(int i_24 = 32; i_24 < 48; ++i_24) {

    _dummy25_24 = read(73);
    sumrotate_24(_dummy25_24);
  }

  for(int i_24 = 48; i_24 < 64; ++i_24) {

    _dummy26_24 = read(73);
    sumrotate_24(_dummy26_24);
  }

  return NULL;
}


//-------------------- CORE 25(2,5) ---------------------

int csum_25(int x_1_25,int y_1_25) {
  int _return_25;
  int _cond_25; int _dummy11_25; int _dummy10_25; int _dummy9_25; int _dummy8_25; int _dummy7_25; int _dummy6_25; int _dummy5_25; int _dummy4_25; int _dummy3_25; int _dummy2_25; int _dummy1_25; int _dummy0_25; 
  int z_1_25;
  _dummy0_25 = x_1_25;
  _dummy1_25 = y_1_25;
  _dummy2_25 = (_dummy0_25+_dummy1_25);
  _dummy3_25 = read(74);
  _dummy4_25 = 3;
  _dummy5_25 = (_dummy3_25&_dummy4_25);
  z_1_25 = (_dummy2_25+_dummy5_25);
  _dummy7_25 = z_1_25;
  _dummy8_25 = 65535;
  z_1_25 = (_dummy7_25&_dummy8_25);
  _return_25 = z_1_25;
  _dummy11_25 = _return_25;
  return _dummy11_25;
}

void sumrotate_25(int a_1_25) {
    int _cond_25; int _dummy23_25; int _dummy22_25; int _dummy21_25; int _dummy20_25; int _dummy19_25; int _dummy18_25; int _dummy17_25; int _dummy16_25; int _dummy15_25; int _dummy14_25; int _dummy13_25; int _dummy12_25; 
  _dummy12_25 = a_1_25;
  _dummy13_25 = read(75);
  _dummy14_25 = (_dummy12_25+_dummy13_25);
  _dummy15_25 = read(75);
  _dummy16_25 = (_dummy14_25+_dummy15_25);
  _dummy17_25 = read(75);
  _dummy19_25 = csum_25(_dummy16_25, _dummy17_25);
  write(25,_dummy19_25);
  _dummy20_25 = read(75);
  _dummy21_25 = read(25);
  _dummy23_25 = csum_25(_dummy20_25, _dummy21_25);
  write(15,_dummy23_25);
}

void *main_25(void *dummy) {
  int _cond_25; int _dummy27_25; int _dummy26_25; int _dummy25_25; int _dummy24_25; 
  for(int i_25 = 0; i_25 < 16; ++i_25) {

    _dummy24_25 = read(15);
    sumrotate_25(_dummy24_25);
  }

  for(int i_25 = 16; i_25 < 32; ++i_25) {

    _dummy25_25 = read(15);
    sumrotate_25(_dummy25_25);
  }

  for(int i_25 = 32; i_25 < 48; ++i_25) {

    _dummy26_25 = read(15);
    sumrotate_25(_dummy26_25);
  }

  for(int i_25 = 48; i_25 < 64; ++i_25) {

    _dummy27_25 = read(15);
    sumrotate_25(_dummy27_25);
  }

  return NULL;
}


//-------------------- CORE 26(2,6) ---------------------

void sumrotate_26(int k_1_26) {
    int _cond_26; int _dummy0_26; 
  write(75,read(16));
  _dummy0_26 = k_1_26;
  write(75,_dummy0_26);
  write(75,read(76));
  write(75,read(16));
}

void *main_26(void *dummy) {
  int _cond_26; int _dummy4_26; int _dummy3_26; int _dummy2_26; int _dummy1_26; 
  int k_1_26[32] = {55146, 59591, 9248, 49597, 62844, 18311, 43056, 64838, 27008, 35652, 65535, 35164, 27536, 64920, 42617, 18868, 63006, 49216, 9822, 59830, 54831, 580, 55457, 59347, 8673, 49975, 62677, 17754, 43491, 64751, 26479, 36138};
  for(int i_26 = 0; i_26 < 16; ++i_26) {

    _dummy1_26 = k_1_26[i_26];
    sumrotate_26(_dummy1_26);
  }

  for(int i_26 = 16; i_26 < 32; ++i_26) {

    _dummy2_26 = k_1_26[i_26];
    sumrotate_26(_dummy2_26);
  }

  for(int i_26 = 32; i_26 < 48; ++i_26) {

    _dummy3_26 = read(26);
    sumrotate_26(_dummy3_26);
  }

  for(int i_26 = 48; i_26 < 64; ++i_26) {

    _dummy4_26 = read(26);
    sumrotate_26(_dummy4_26);
  }

  return NULL;
}


//-------------------- CORE 27(2,7) ---------------------

void sumrotate_27(int m_1_27) {
    int _cond_27; int _dummy0_27; 
  _dummy0_27 = m_1_27;
  write(76,_dummy0_27);
}

void *main_27(void *dummy) {
  int _cond_27; int _dummy32_27; int _dummy31_27; int _dummy30_27; int _dummy29_27; int _dummy28_27; int _dummy27_27; int _dummy26_27; int _dummy25_27; int _dummy24_27; int _dummy23_27; int _dummy22_27; int _dummy21_27; int _dummy20_27; int _dummy19_27; int _dummy18_27; int _dummy17_27; int _dummy16_27; int _dummy15_27; int _dummy14_27; int _dummy13_27; int _dummy12_27; int _dummy11_27; int _dummy10_27; int _dummy9_27; int _dummy8_27; int _dummy7_27; int _dummy6_27; int _dummy5_27; int _dummy4_27; int _dummy3_27; int _dummy2_27; int _dummy1_27; 
  int message_1_27[16] = {32867, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int g_1_27;
  int inc_1_27;
  g_1_27 = 0;
  inc_1_27 = 1;
  for(int i_27 = 0; i_27 < 16; ++i_27) {

    _dummy3_27 = message_1_27[g_1_27];
    sumrotate_27(_dummy3_27);
    _dummy4_27 = g_1_27;
    _dummy5_27 = inc_1_27;
    _dummy6_27 = (_dummy4_27+_dummy5_27);
    _dummy7_27 = 15;
    g_1_27 = (_dummy6_27&_dummy7_27);
  }

  g_1_27 = 1;
  inc_1_27 = 5;
  for(int i_27 = 16; i_27 < 32; ++i_27) {

    _dummy11_27 = message_1_27[g_1_27];
    sumrotate_27(_dummy11_27);
    _dummy12_27 = g_1_27;
    _dummy13_27 = inc_1_27;
    _dummy14_27 = (_dummy12_27+_dummy13_27);
    _dummy15_27 = 15;
    g_1_27 = (_dummy14_27&_dummy15_27);
  }

  g_1_27 = 5;
  inc_1_27 = 3;
  for(int i_27 = 32; i_27 < 48; ++i_27) {

    _dummy19_27 = message_1_27[g_1_27];
    sumrotate_27(_dummy19_27);
    _dummy20_27 = g_1_27;
    _dummy21_27 = inc_1_27;
    _dummy22_27 = (_dummy20_27+_dummy21_27);
    _dummy23_27 = 15;
    g_1_27 = (_dummy22_27&_dummy23_27);
  }

  g_1_27 = 0;
  inc_1_27 = 7;
  for(int i_27 = 48; i_27 < 64; ++i_27) {

    _dummy27_27 = message_1_27[g_1_27];
    sumrotate_27(_dummy27_27);
    _dummy28_27 = g_1_27;
    _dummy29_27 = inc_1_27;
    _dummy30_27 = (_dummy28_27+_dummy29_27);
    _dummy31_27 = 15;
    g_1_27 = (_dummy30_27&_dummy31_27);
  }

  return NULL;
}


//-------------------- CORE 28(2,8) ---------------------


//-------------------- CORE 29(2,9) ---------------------


//-------------------- CORE 30(3,0) ---------------------


//-------------------- CORE 31(3,1) ---------------------

void *main_31(void *dummy) {
  int _cond_31; int _dummy1_31; int _dummy0_31; 
  int k_0_31[32] = {14658, 63105, 24866, 14348, 59972, 53161, 19296, 48240, 32454, 10234, 12421, 7429, 53305, 39397, 31992, 22117, 8772, 65431, 9127, 41017, 22979, 52370, 62589, 24017, 32335, 59104, 17172, 4513, 32386, 62005, 53947, 54161};
  for(int i_31 = 32; i_31 < 48; ++i_31) {

    _dummy0_31 = k_0_31[i_31-32];
    write(21,_dummy0_31);
  }

  for(int i_31 = 48; i_31 < 64; ++i_31) {

    _dummy1_31 = k_0_31[i_31-32];
    write(21,_dummy1_31);
  }

  return NULL;
}


//-------------------- CORE 32(3,2) ---------------------


//-------------------- CORE 33(3,3) ---------------------

void sumrotate_33(int r_33) {
    int _cond_33; int _dummy0_33; 
  _dummy0_33 = r_33;
  write(83,_dummy0_33);
}

void *main_33(void *dummy) {
  int _cond_33; int _dummy4_33; int _dummy3_33; int _dummy2_33; int _dummy1_33; 
  int r_33[32] = {7, 12, 17, 22, 7, 12, 17, 22, 7, 12, 17, 22, 7, 12, 17, 22, 5, 9, 14, 20, 5, 9, 14, 20, 5, 9, 14, 20, 5, 9, 14, 20};
  for(int i_33 = 0; i_33 < 16; ++i_33) {

    _dummy1_33 = r_33[i_33];
    sumrotate_33(_dummy1_33);
  }

  for(int i_33 = 16; i_33 < 32; ++i_33) {

    _dummy2_33 = r_33[i_33];
    sumrotate_33(_dummy2_33);
  }

  for(int i_33 = 32; i_33 < 48; ++i_33) {

    _dummy3_33 = read(33);
    sumrotate_33(_dummy3_33);
  }

  for(int i_33 = 48; i_33 < 64; ++i_33) {

    _dummy4_33 = read(33);
    sumrotate_33(_dummy4_33);
  }

  return NULL;
}


//-------------------- CORE 34(3,4) ---------------------

void leftrotate_34(int r_34) {
    int _cond_34; int _dummy7_34; int _dummy6_34; int _dummy5_34; int _dummy4_34; int _dummy3_34; int _dummy2_34; int _dummy1_34; int _dummy0_34; 
  _dummy0_34 = 16;
  _dummy1_34 = r_34;
  _cond_34 = (_dummy0_34-_dummy1_34);
  write(84,_cond_34);
  if(_cond_34 < 0) {

    _dummy3_34 = r_34;
    _dummy4_34 = 16;
    r_34 = (_dummy3_34-_dummy4_34);
  } else {

  }

  _dummy6_34 = r_34;
  write(34,_dummy6_34);
  _dummy7_34 = r_34;
  write(34,_dummy7_34);
}

void sumrotate_34() {
    int _cond_34; int _dummy8_34; 
  write(84,read(24));
  _dummy8_34 = read(83);
  leftrotate_34(_dummy8_34);
  write(24,read(34));
}

void *main_34(void *dummy) {
  int _cond_34; 
  for(int i_34 = 0; i_34 < 16; ++i_34) {

    sumrotate_34();
  }

  for(int i_34 = 16; i_34 < 32; ++i_34) {

    sumrotate_34();
  }

  for(int i_34 = 32; i_34 < 48; ++i_34) {

    sumrotate_34();
  }

  for(int i_34 = 48; i_34 < 64; ++i_34) {

    sumrotate_34();
  }

  return NULL;
}


//-------------------- CORE 35(3,5) ---------------------

void leftrotate_35(int x_0_35,int x_1_35) {
    int _cond_35; int _dummy6_35; int _dummy5_35; int _dummy4_35; int _dummy3_35; int _dummy2_35; int _dummy1_35; int _dummy0_35; 
  int swap_35;
  _cond_35 = read(84);
  if(_cond_35 < 0) {

    swap_35 = x_0_35;
    x_0_35 = x_1_35;
    x_1_35 = swap_35;
  } else {

  }

  _dummy3_35 = x_0_35;
  write(35,_dummy3_35);
  _dummy4_35 = x_1_35;
  write(35,_dummy4_35);
  _dummy5_35 = x_0_35;
  write(35,_dummy5_35);
  _dummy6_35 = x_1_35;
  write(35,_dummy6_35);
}

void sumrotate_35() {
    int _cond_35; int _dummy8_35; int _dummy7_35; 
  _dummy7_35 = read(84);
  _dummy8_35 = read(25);
  leftrotate_35(_dummy7_35, _dummy8_35);
  write(25,read(35));
}

void *main_35(void *dummy) {
  int _cond_35; 
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

  return NULL;
}


//-------------------- CORE 36(3,6) ---------------------

void *main_36(void *dummy) {
  int _cond_36; int _dummy1_36; int _dummy0_36; 
  int k_1_36[32] = {65530, 34673, 28061, 64997, 42174, 19422, 63163, 48831, 10395, 60065, 54511, 1160, 55764, 59099, 8098, 50348, 62505, 17194, 43924, 64659, 25947, 36620, 65519, 34180, 28584, 65068, 41729, 19976, 63315, 48442, 10967, 60294};
  for(int i_36 = 32; i_36 < 48; ++i_36) {

    _dummy0_36 = k_1_36[i_36-32];
    write(26,_dummy0_36);
  }

  for(int i_36 = 48; i_36 < 64; ++i_36) {

    _dummy1_36 = k_1_36[i_36-32];
    write(26,_dummy1_36);
  }

  return NULL;
}


//-------------------- CORE 37(3,7) ---------------------


//-------------------- CORE 38(3,8) ---------------------


//-------------------- CORE 39(3,9) ---------------------


//-------------------- CORE 40(4,0) ---------------------


//-------------------- CORE 41(4,1) ---------------------


//-------------------- CORE 42(4,2) ---------------------


//-------------------- CORE 43(4,3) ---------------------

void *main_43(void *dummy) {
  int _cond_43; int _dummy1_43; int _dummy0_43; 
  int r_43[32] = {4, 11, 16, 23, 4, 11, 16, 23, 4, 11, 16, 23, 4, 11, 16, 23, 6, 10, 15, 21, 6, 10, 15, 21, 6, 10, 15, 21, 6, 10, 15, 21};
  for(int i_43 = 32; i_43 < 48; ++i_43) {

    _dummy0_43 = r_43[i_43-32];
    write(33,_dummy0_43);
  }

  for(int i_43 = 48; i_43 < 64; ++i_43) {

    _dummy1_43 = r_43[i_43-32];
    write(33,_dummy1_43);
  }

  return NULL;
}


//-------------------- CORE 44(4,4) ---------------------

int leftrotate_44() {
  int _return_44;
  int _cond_44; int _dummy18_44; int _dummy17_44; int _dummy16_44; int _dummy15_44; int _dummy14_44; int _dummy13_44; int _dummy12_44; int _dummy11_44; int _dummy10_44; int _dummy9_44; int _dummy8_44; int _dummy7_44; int _dummy6_44; int _dummy5_44; int _dummy4_44; int _dummy3_44; int _dummy2_44; int _dummy1_44; int _dummy0_44; 
  int out_0_44;
  int r2_44;
  int x2_0_44;
  int x2_1_44;
  x2_0_44 = read(94);
  x2_1_44 = read(94);
  r2_44 = read(34);
  write(94,read(34));
  _dummy3_44 = read(94);
  _dummy4_44 = x2_0_44;
  _dummy5_44 = r2_44;
  _dummy6_44 = (_dummy4_44<<_dummy5_44);
  _dummy7_44 = (_dummy3_44|_dummy6_44);
  _dummy8_44 = 65535;
  out_0_44 = (_dummy7_44&_dummy8_44);
  _dummy10_44 = read(94);
  _dummy11_44 = x2_1_44;
  _dummy12_44 = r2_44;
  _dummy13_44 = (_dummy11_44<<_dummy12_44);
  _dummy14_44 = (_dummy10_44|_dummy13_44);
  _dummy15_44 = 65535;
  _dummy16_44 = (_dummy14_44&_dummy15_44);
  write(94,_dummy16_44);
  _return_44 = out_0_44;
  _dummy18_44 = _return_44;
  return _dummy18_44;
}

void sumrotate_44() {
    int _cond_44; int _dummy20_44; int _dummy19_44; 
  _dummy20_44 = leftrotate_44();
  write(34,_dummy20_44);
}

void *main_44(void *dummy) {
  int _cond_44; 
  for(int i_44 = 0; i_44 < 16; ++i_44) {

    sumrotate_44();
  }

  for(int i_44 = 16; i_44 < 32; ++i_44) {

    sumrotate_44();
  }

  for(int i_44 = 32; i_44 < 48; ++i_44) {

    sumrotate_44();
  }

  for(int i_44 = 48; i_44 < 64; ++i_44) {

    sumrotate_44();
  }

  return NULL;
}


//-------------------- CORE 45(4,5) ---------------------

int leftrotate_45() {
  int _return_45;
  int _cond_45; int _dummy15_45; int _dummy14_45; int _dummy13_45; int _dummy12_45; int _dummy11_45; int _dummy10_45; int _dummy9_45; int _dummy8_45; int _dummy7_45; int _dummy6_45; int _dummy5_45; int _dummy4_45; int _dummy3_45; int _dummy2_45; int _dummy1_45; int _dummy0_45; 
  int out_1_45;
  int r3_45;
  int x3_0_45;
  int x3_1_45;
  write(94,read(35));
  write(94,read(35));
  x3_0_45 = read(35);
  x3_1_45 = read(35);
  r3_45 = read(94);
  _dummy3_45 = x3_1_45;
  _dummy4_45 = 16;
  _dummy5_45 = r3_45;
  _dummy6_45 = (_dummy4_45-_dummy5_45);
  _dummy7_45 = (_dummy3_45>>_dummy6_45);
  write(94,_dummy7_45);
  _dummy8_45 = x3_0_45;
  _dummy9_45 = 16;
  _dummy10_45 = r3_45;
  _dummy11_45 = (_dummy9_45-_dummy10_45);
  _dummy12_45 = (_dummy8_45>>_dummy11_45);
  write(94,_dummy12_45);
  out_1_45 = read(94);
  _return_45 = out_1_45;
  _dummy15_45 = _return_45;
  return _dummy15_45;
}

void sumrotate_45() {
    int _cond_45; int _dummy17_45; int _dummy16_45; 
  _dummy17_45 = leftrotate_45();
  write(35,_dummy17_45);
}

void *main_45(void *dummy) {
  int _cond_45; 
  for(int i_45 = 0; i_45 < 16; ++i_45) {

    sumrotate_45();
  }

  for(int i_45 = 16; i_45 < 32; ++i_45) {

    sumrotate_45();
  }

  for(int i_45 = 32; i_45 < 48; ++i_45) {

    sumrotate_45();
  }

  for(int i_45 = 48; i_45 < 64; ++i_45) {

    sumrotate_45();
  }

  return NULL;
}


//-------------------- CORE 46(4,6) ---------------------


//-------------------- CORE 47(4,7) ---------------------


//-------------------- CORE 48(4,8) ---------------------


//-------------------- CORE 49(4,9) ---------------------


//-------------------- CORE 50(5,0) ---------------------


int main() {
  pthread_t t_2, t_3, t_4, t_5, t_6, t_12, t_13, t_14, t_15, t_16, t_21, t_22, t_23, t_24, t_25, t_26, t_27, t_31, t_33, t_34, t_35, t_36, t_43, t_44, t_45;
  setup();
  pthread_create(&t_2, NULL, main_2, NULL);
  pthread_create(&t_3, NULL, main_3, NULL);
  pthread_create(&t_4, NULL, main_4, NULL);
  pthread_create(&t_5, NULL, main_5, NULL);
  pthread_create(&t_6, NULL, main_6, NULL);
  pthread_create(&t_12, NULL, main_12, NULL);
  pthread_create(&t_13, NULL, main_13, NULL);
  pthread_create(&t_14, NULL, main_14, NULL);
  pthread_create(&t_15, NULL, main_15, NULL);
  pthread_create(&t_16, NULL, main_16, NULL);
  pthread_create(&t_21, NULL, main_21, NULL);
  pthread_create(&t_22, NULL, main_22, NULL);
  pthread_create(&t_23, NULL, main_23, NULL);
  pthread_create(&t_24, NULL, main_24, NULL);
  pthread_create(&t_25, NULL, main_25, NULL);
  pthread_create(&t_26, NULL, main_26, NULL);
  pthread_create(&t_27, NULL, main_27, NULL);
  pthread_create(&t_31, NULL, main_31, NULL);
  pthread_create(&t_33, NULL, main_33, NULL);
  pthread_create(&t_34, NULL, main_34, NULL);
  pthread_create(&t_35, NULL, main_35, NULL);
  pthread_create(&t_36, NULL, main_36, NULL);
  pthread_create(&t_43, NULL, main_43, NULL);
  pthread_create(&t_44, NULL, main_44, NULL);
  pthread_create(&t_45, NULL, main_45, NULL);
  pthread_join(t_2, NULL);
  pthread_join(t_3, NULL);
  pthread_join(t_4, NULL);
  pthread_join(t_5, NULL);
  pthread_join(t_6, NULL);
  pthread_join(t_12, NULL);
  pthread_join(t_13, NULL);
  pthread_join(t_14, NULL);
  pthread_join(t_15, NULL);
  pthread_join(t_16, NULL);
  pthread_join(t_21, NULL);
  pthread_join(t_22, NULL);
  pthread_join(t_23, NULL);
  pthread_join(t_24, NULL);
  pthread_join(t_25, NULL);
  pthread_join(t_26, NULL);
  pthread_join(t_27, NULL);
  pthread_join(t_31, NULL);
  pthread_join(t_33, NULL);
  pthread_join(t_34, NULL);
  pthread_join(t_35, NULL);
  pthread_join(t_36, NULL);
  pthread_join(t_43, NULL);
  pthread_join(t_44, NULL);
  pthread_join(t_45, NULL);
  return 0;
}
