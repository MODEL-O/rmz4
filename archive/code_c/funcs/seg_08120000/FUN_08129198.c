// undefined FUN_08129198(void)
// entry 0x8129198


uint FUN_08129198(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    FUN_0812904c();
    return 0;
  }
  uVar2 = 1;
  if (param_2 <= param_1) {
    for (; (param_2 < 0x10000000 && (param_2 < param_1)); param_2 = param_2 << 4) {
      uVar2 = uVar2 << 4;
    }
    for (; (param_2 < 0x80000000 && (param_2 < param_1)); param_2 = param_2 << 1) {
      uVar2 = uVar2 << 1;
    }
    while( true ) {
      uVar1 = 0;
      if (param_2 <= param_1) {
        param_1 = param_1 - param_2;
      }
      if (param_2 >> 1 <= param_1) {
        param_1 = param_1 - (param_2 >> 1);
        uVar1 = uVar2 >> 1 | uVar2 << 0x1f;
      }
      if (param_2 >> 2 <= param_1) {
        param_1 = param_1 - (param_2 >> 2);
        uVar1 = uVar1 | uVar2 >> 2 | uVar2 << 0x1e;
      }
      if (param_2 >> 3 <= param_1) {
        param_1 = param_1 - (param_2 >> 3);
        uVar1 = uVar1 | uVar2 << 0x1d;
      }
      if ((param_1 == 0) || (uVar2 >> 4 == 0)) break;
      param_2 = param_2 >> 4;
      uVar2 = uVar2 >> 4;
    }
    uVar1 = uVar1 & 0xe0000000;
    if (uVar1 != 0) {
      if ((uVar1 & uVar2 << 0x1d) != 0) {
        param_1 = param_1 + (param_2 >> 3);
      }
      if ((uVar1 & (uVar2 >> 2 | uVar2 << 0x1e)) != 0) {
        param_1 = param_1 + (param_2 >> 2);
      }
      if ((uVar1 & (uVar2 >> 1 | uVar2 << 0x1f)) != 0) {
        param_1 = param_1 + (param_2 >> 1);
      }
      return param_1;
    }
    return param_1;
  }
  return param_1;
}


