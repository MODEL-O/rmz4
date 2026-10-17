// undefined FUN_08128fb8(void)
// entry 0x8128fb8


uint FUN_08128fb8(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    FUN_0812904c();
    return 0;
  }
  uVar3 = param_1 ^ param_2;
  uVar2 = 1;
  uVar1 = 0;
  if ((int)param_2 < 0) {
    param_2 = -param_2;
  }
  if ((int)param_1 < 0) {
    param_1 = -param_1;
  }
  if (param_2 <= param_1) {
    for (; (param_2 < 0x10000000 && (param_2 < param_1)); param_2 = param_2 << 4) {
      uVar2 = uVar2 << 4;
    }
    for (; (param_2 < 0x80000000 && (param_2 < param_1)); param_2 = param_2 << 1) {
      uVar2 = uVar2 << 1;
    }
    while( true ) {
      if (param_2 <= param_1) {
        param_1 = param_1 - param_2;
        uVar1 = uVar1 | uVar2;
      }
      if (param_2 >> 1 <= param_1) {
        param_1 = param_1 - (param_2 >> 1);
        uVar1 = uVar1 | uVar2 >> 1;
      }
      if (param_2 >> 2 <= param_1) {
        param_1 = param_1 - (param_2 >> 2);
        uVar1 = uVar1 | uVar2 >> 2;
      }
      if (param_2 >> 3 <= param_1) {
        param_1 = param_1 - (param_2 >> 3);
        uVar1 = uVar1 | uVar2 >> 3;
      }
      if ((param_1 == 0) || (uVar2 = uVar2 >> 4, uVar2 == 0)) break;
      param_2 = param_2 >> 4;
    }
  }
  if ((int)uVar3 < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}


