// undefined FUN_080fa0b0(void)
// entry 0x80fa0b0


undefined4 FUN_080fa0b0(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080fa12c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0x58) + DAT_080fa130;
  *(undefined4 *)(param_1 + 0x60) = DAT_080fa134;
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  FUN_0801cf00(param_1,0xa400);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined4 *)(param_1 + 0x30) = DAT_080fa138;
  *(short *)(param_1 + 0x26) = (short)DAT_080fa13c;
  FUN_080fa140(param_1);
  return in_lr;
}


