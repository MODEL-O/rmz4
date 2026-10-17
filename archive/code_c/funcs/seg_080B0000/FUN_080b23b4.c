// undefined FUN_080b23b4(void)
// entry 0x80b23b4


undefined4 FUN_080b23b4(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (*(char *)(param_1 + 0xb4) == '\0') {
      if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
        FUN_080e6270(param_1 + 0x54,0x100,*(byte *)(param_1 + 10) >> 4 & 1);
      }
      else {
        FUN_080e6270(param_1 + 0x54,0,*(byte *)(param_1 + 10) >> 4 & 1);
      }
    }
    else {
      FUN_080e6270(param_1 + 0x54,0x200,*(byte *)(param_1 + 10) >> 4 & 1);
    }
    if (*(ushort *)(DAT_080b2440 + 0xc) <= DAT_080b2444) {
      *(ushort *)(DAT_080b2440 + 0xc) = *(ushort *)(DAT_080b2440 + 0xc) + 1;
    }
    FUN_0802abe0(param_1,param_1 + 0x54);
    if (*(byte *)(param_1 + 0x11) < 2) {
      uVar2 = 0x1e;
    }
    else {
      uVar2 = 0xff;
    }
    FUN_0802ab88(3,uVar2,param_1 + 0x54);
  }
  else {
    FUN_080d0c88(2,param_1 + 0x54);
  }
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b2478);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


