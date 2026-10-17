// undefined FUN_080ecf9c(void)
// entry 0x80ecf9c


undefined4 FUN_080ecf9c(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined4 *)(param_1 + 0x30) = DAT_080ecfec;
  *(undefined2 *)(param_1 + 0x26) = 1;
  FUN_0801cf00(param_1,DAT_080ecff0);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ecff4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080ecefc(param_1);
  return in_lr;
}


