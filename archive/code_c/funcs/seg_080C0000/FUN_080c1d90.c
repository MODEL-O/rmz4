// undefined FUN_080c1d90(void)
// entry 0x80c1d90


undefined4 FUN_080c1d90(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_080c1dd8);
  FUN_0801cff0(param_1);
  uVar5 = *DAT_080c1ddc * DAT_080c1de0 + DAT_080c1de4;
  *DAT_080c1ddc = uVar5 & 0x7fffffff;
  uVar5 = (uVar5 & 0x7fffffff) >> 0x10 & 1;
  if (uVar5 == 0) {
    bVar4 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar4 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar4;
  *(char *)(param_1 + 0x4c) = (char)uVar5;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
  iVar3 = DAT_080c1e8c;
  iVar2 = DAT_080c1e88;
  puVar1 = DAT_080c1e84;
  uVar5 = DAT_080c1e88 * *DAT_080c1e84 + DAT_080c1e8c;
  uVar6 = ((uVar5 & 0x7fffffff) >> 0x10 & 0xf) + 4 >> 1;
  *(uint *)(param_1 + 0x5c) = uVar6 * 0x100;
  uVar5 = iVar2 * (uVar5 & 0x7fffffff) + iVar3;
  *puVar1 = uVar5 & 0x7fffffff;
  *(uint *)(param_1 + 0x60) = (((uVar5 & 0x7fffffff) >> 0x10 & 0xf) + 4 >> 1) << 8;
  if (1 < *(byte *)(param_1 + 0x11)) {
    *(uint *)(param_1 + 0x5c) = uVar6 * -0x100;
  }
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
  }
  *(undefined1 *)(param_1 + 0x12) = 0;
  piVar7 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c1e90);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar7 + 4);
  FUN_080c1b90(param_1);
  return in_lr;
}


