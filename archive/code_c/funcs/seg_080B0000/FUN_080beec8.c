// undefined FUN_080beec8(void)
// entry 0x80beec8


undefined4 FUN_080beec8(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\x03') {
    FUN_0801cc9c(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
    FUN_08005760(param_1 + 0x74,DAT_080bef1c,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080bef20);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
    FUN_080bef88(param_1);
  }
  else {
    FUN_0801cc9c(param_1);
    *(undefined2 *)(param_1 + 0x50) = 0x100;
    *(undefined2 *)(param_1 + 0x52) = 0x100;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
    FUN_08005760(param_1 + 0x74,DAT_080bef80,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080bef84);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
    FUN_080bef88(param_1);
  }
  return in_lr;
}


