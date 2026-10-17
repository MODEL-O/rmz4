// undefined FUN_08129050(void)
// entry 0x8129050


uint FUN_08129050(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 1;
  if (param_2 == 0) {
    FUN_0812904c();
    return 0;
  }
  if ((int)param_2 < 0) {
    param_2 = -param_2;
  }
  uVar1 = param_1;
  if ((int)param_1 < 0) {
    uVar1 = -param_1;
  }
  if (param_2 <= uVar1) {
    for (; (param_2 < 0x10000000 && (param_2 < uVar1)); param_2 = param_2 << 4) {
      uVar3 = uVar3 << 4;
    }
    for (; (param_2 < 0x80000000 && (param_2 < uVar1)); param_2 = param_2 << 1) {
      uVar3 = uVar3 << 1;
    }
    while( true ) {
      uVar2 = 0;
      if (param_2 <= uVar1) {
        uVar1 = uVar1 - param_2;
      }
      if (param_2 >> 1 <= uVar1) {
        uVar1 = uVar1 - (param_2 >> 1);
        uVar2 = uVar3 >> 1 | uVar3 << 0x1f;
      }
      if (param_2 >> 2 <= uVar1) {
        uVar1 = uVar1 - (param_2 >> 2);
        uVar2 = uVar2 | uVar3 >> 2 | uVar3 << 0x1e;
      }
      if (param_2 >> 3 <= uVar1) {
        uVar1 = uVar1 - (param_2 >> 3);
        uVar2 = uVar2 | uVar3 << 0x1d;
      }
      if ((uVar1 == 0) || (uVar3 >> 4 == 0)) break;
      param_2 = param_2 >> 4;
      uVar3 = uVar3 >> 4;
    }
    uVar2 = uVar2 & 0xe0000000;
    if (uVar2 != 0) {
      if ((uVar2 & uVar3 << 0x1d) != 0) {
        uVar1 = uVar1 + (param_2 >> 3);
      }
      if ((uVar2 & (uVar3 >> 2 | uVar3 << 0x1e)) != 0) {
        uVar1 = uVar1 + (param_2 >> 2);
      }
      if ((uVar2 & (uVar3 >> 1 | uVar3 << 0x1f)) != 0) {
        uVar1 = uVar1 + (param_2 >> 1);
      }
    }
  }
  if ((int)param_1 < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}


