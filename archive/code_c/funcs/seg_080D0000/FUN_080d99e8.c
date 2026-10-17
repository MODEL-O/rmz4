// undefined FUN_080d99e8(void)
// entry 0x80d99e8


undefined4 FUN_080d99e8(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = (uint)*(byte *)(param_1 + 0x11);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d9a3c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  iVar3 = (uVar4 * 2 + -1) * -0x180;
  *(int *)(param_1 + 0x5c) = iVar3;
  *(undefined1 *)(param_1 + 0x12) = 0x10;
  iVar3 = FUN_08128fb8(iVar3,*(undefined1 *)(param_1 + 0x12));
  *(int *)(param_1 + 100) = -iVar3;
  FUN_0801cc9c(param_1);
  if (uVar4 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)(uVar4 & 1);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((uVar4 & 1) << 4);
  FUN_0801cf00(param_1,DAT_080d9a78);
  FUN_080d9a7c(param_1);
  return in_lr;
}


