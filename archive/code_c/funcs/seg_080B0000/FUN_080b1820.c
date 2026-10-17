// undefined FUN_080b1820(void)
// entry 0x80b1820


undefined4 FUN_080b1820(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb4) == '\0') {
    if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
      FUN_080e56d0(param_1 + 0x54,0x100,*(byte *)(param_1 + 10) >> 4 & 1);
    }
    else {
      FUN_080e56d0(param_1 + 0x54,0,*(byte *)(param_1 + 10) >> 4 & 1);
    }
  }
  else {
    FUN_080e56d0(param_1 + 0x54,0x200,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  if (*(ushort *)(DAT_080b18b8 + 0xc) <= DAT_080b18bc) {
    *(ushort *)(DAT_080b18b8 + 0xc) = *(ushort *)(DAT_080b18b8 + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  FUN_0802ab88(3,1,param_1 + 0x54);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b18c0);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


