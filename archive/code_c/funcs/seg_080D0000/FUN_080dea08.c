// undefined FUN_080dea08(void)
// entry 0x80dea08


undefined4 FUN_080dea08(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(iVar4 + 10) >> 4;
  uVar5 = bVar1 & 1;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080dea68);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  uVar3 = *(undefined4 *)(iVar4 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  *(uint *)(param_1 + 0x5c) = (uVar5 * 2 + -1) * 8;
  *(undefined1 *)(param_1 + 0x12) = 0x18;
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(undefined1 *)(param_1 + 0x25) = 0x1a;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar5;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
  FUN_0801cf00(param_1,DAT_080deaa4);
  FUN_080deaa8(param_1);
  return in_lr;
}


