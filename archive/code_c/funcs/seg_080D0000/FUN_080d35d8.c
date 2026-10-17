// undefined FUN_080d35d8(void)
// entry 0x80d35d8


undefined4 FUN_080d35d8(int param_1)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  FUN_0801cc9c();
  if ((*(byte *)(iVar4 + 10) & 8) != 0) {
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | *(byte *)(iVar4 + 0x49) & 0xc;
  }
  *(undefined1 *)(param_1 + 0x25) = 0;
  FUN_0801d3d0(param_1,0xe);
  uVar2 = *DAT_080d363c * DAT_080d3640 + DAT_080d3644;
  *DAT_080d363c = uVar2 & 0x7fffffff;
  uVar2 = (uVar2 & 0x7fffffff) >> 0x10 & 1;
  if (uVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar2;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
  FUN_0801cf00(param_1,DAT_080d369c);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d36a0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  FUN_080d36a4(param_1);
  return in_lr;
}


