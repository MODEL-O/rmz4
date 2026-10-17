// undefined FUN_080dfaec(void)
// entry 0x80dfaec


undefined4 FUN_080dfaec(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int *piVar6;
  byte *pbVar7;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0x7c00);
  uVar5 = *DAT_080dfb3c * DAT_080dfb40 + DAT_080dfb44;
  *DAT_080dfb3c = uVar5 & 0x7fffffff;
  uVar5 = (uVar5 & 0x7fffffff) >> 0x10 & 1;
  if (uVar5 == 0) {
    bVar4 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar4 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar4;
  *(undefined1 *)(param_1 + 0x4c) = (char)uVar5;
  pbVar7 = (byte *)(param_1 + 0x4a);
  *pbVar7 = *pbVar7 & 0xef | (byte)(uVar5 << 4);
  uVar5 = *DAT_080dfb94 * DAT_080dfb98 + DAT_080dfb9c;
  *DAT_080dfb94 = uVar5 & 0x7fffffff;
  uVar5 = (uVar5 & 0x7fffffff) >> 0x10 & 1;
  if (uVar5 == 0) {
    bVar4 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar4 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar4;
  *(undefined1 *)(param_1 + 0x4d) = (char)uVar5;
  *pbVar7 = *pbVar7 & 0xdf | (byte)(uVar5 << 5);
  *(byte *)(param_1 + 0x49) =
       *(byte *)(param_1 + 0x49) & 0xf3 | (*(byte *)(param_1 + 0x11) & 3) << 2;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    *(undefined1 *)(param_1 + 0x25) = 0x1e;
  }
  *(undefined1 *)(param_1 + 0x12) = 10;
  *(undefined1 *)(param_1 + 0x13) = 10;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_080dfc34));
  iVar3 = DAT_080dfc40;
  iVar2 = DAT_080dfc3c;
  puVar1 = DAT_080dfc38;
  uVar5 = DAT_080dfc3c * *DAT_080dfc38 + DAT_080dfc40;
  *(char *)(param_1 + 0x76) = (char)(uVar5 >> 0x10);
  uVar5 = iVar2 * (uVar5 & 0x7fffffff) + iVar3;
  *puVar1 = uVar5 & 0x7fffffff;
  uVar5 = (uVar5 & 0x7fffffff) >> 0x10 & 1;
  if (uVar5 == 0) {
    bVar4 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar4 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar4;
  *(undefined1 *)(param_1 + 0x4c) = (char)uVar5;
  *pbVar7 = *pbVar7 & 0xef | (byte)(uVar5 << 4);
  uVar5 = *DAT_080dfc84 * DAT_080dfc88 + DAT_080dfc8c;
  *DAT_080dfc84 = uVar5 & 0x7fffffff;
  uVar5 = (uVar5 & 0x7fffffff) >> 0x10 & 1;
  if (uVar5 == 0) {
    bVar4 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar4 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar4;
  *(undefined1 *)(param_1 + 0x4d) = (char)uVar5;
  *pbVar7 = *pbVar7 & 0xdf | (byte)(uVar5 << 5);
  piVar6 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080dfcd4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar6 + 4);
  FUN_080dfcd8(param_1);
  return in_lr;
}


