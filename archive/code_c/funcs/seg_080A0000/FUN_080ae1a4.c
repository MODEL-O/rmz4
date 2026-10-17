// undefined FUN_080ae1a4(void)
// entry 0x80ae1a4


undefined4 FUN_080ae1a4(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 2;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ae208);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_080ae20c,param_1 + 0x54,100);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_080ae240,param_1 + 0x54,100);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined1 *)(param_1 + 0xd) = 2;
  }
  FUN_080ae244(param_1);
  return in_lr;
}


