// undefined FUN_08127ca0(void)
// entry 0x8127ca0


undefined4 FUN_08127ca0(uint param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  piVar3 = (int *)*DAT_08127d2c;
  if (*piVar3 == DAT_08127d30) {
    *piVar3 = *piVar3 + 1;
    if ((param_1 & 0xff) != 0) {
      *(byte *)((int)piVar3 + 5) = (byte)param_1 & 0x7f;
    }
    if ((param_1 & 0xf00) != 0) {
      *(char *)((int)piVar3 + 6) = (char)((param_1 & 0xf00) >> 8);
      iVar2 = 0xc;
      piVar1 = piVar3 + 0x14;
      do {
        *(undefined1 *)piVar1 = 0;
        iVar2 = iVar2 + -1;
        piVar1 = piVar1 + 0x10;
      } while (iVar2 != 0);
    }
    if ((param_1 & 0xf000) != 0) {
      *(char *)((int)piVar3 + 7) = (char)((param_1 & 0xf000) >> 0xc);
    }
    if ((param_1 & 0xb00000) != 0) {
      *DAT_08127d34 = *DAT_08127d34 & 0x3f | (byte)((param_1 & 0x300000) >> 0xe);
    }
    if ((param_1 & 0xf0000) != 0) {
      FUN_08127d8c();
      FUN_08127bfc(param_1 & 0xf0000);
    }
    *piVar3 = DAT_08127d30;
  }
  return in_lr;
}


