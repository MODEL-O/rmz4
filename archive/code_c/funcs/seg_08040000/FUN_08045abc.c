// undefined FUN_08045abc(void)
// entry 0x8045abc


undefined4 FUN_08045abc(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08045b2c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cfc8(param_1,DAT_08045b30,
               (uint)((int)((uint)(*(byte *)(iVar2 + 0x71) ^ 1) << 0x18) >> 8) >> 0x10,
               (short)*(char *)(iVar2 + 0x72));
  FUN_0801cff0(param_1);
  *(undefined1 *)(param_1 + 0x25) = 0xf;
  *(undefined1 *)(param_1 + 0x12) = 0;
  FUN_08045864(param_1);
  return in_lr;
}


