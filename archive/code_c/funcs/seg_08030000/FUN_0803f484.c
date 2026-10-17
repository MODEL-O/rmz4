// undefined FUN_0803f484(void)
// entry 0x803f484


undefined4 FUN_0803f484(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803f4cc);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_0803f4d0);
  uVar2 = DAT_0803f520;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    uVar2 = 0x400;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  uVar2 = DAT_0803f524;
  FUN_08005760(param_1 + 0x74,DAT_0803f524,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_08005794(param_1 + 0x74,uVar2,5,0xffffffff,0xffffffff,0xffffffff);
  *(undefined1 *)(param_1 + 0x12) = 1;
  FUN_0803f528(param_1);
  return in_lr;
}


