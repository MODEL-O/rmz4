// undefined FUN_0804d6fc(void)
// entry 0x804d6fc


undefined4 FUN_0804d6fc(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_0801cd28();
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_0804d768);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_0804d76c,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_0804d770;
  FUN_08002b10(0x3a);
  *(undefined1 *)(param_1 + 0x12) = 0;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804d774);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_0804d778(param_1);
  return in_lr;
}


