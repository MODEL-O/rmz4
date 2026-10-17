// undefined FUN_080c8af4(void)
// entry 0x80c8af4


undefined4 FUN_080c8af4(int param_1)

{
  short sVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
  uVar2 = *DAT_080c8b88 * DAT_080c8b8c + DAT_080c8b90;
  *DAT_080c8b88 = uVar2 & 0x7fffffff;
  sVar1 = FUN_08129198((uVar2 & 0x7fffffff) >> 0x10,0xc);
  FUN_0801cf00(param_1,sVar1 + 0x6c00);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar4 + 0xbc);
  *(undefined1 *)(param_1 + 0x12) = 0;
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c8b94);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  FUN_080c88a4(param_1);
  return in_lr;
}


