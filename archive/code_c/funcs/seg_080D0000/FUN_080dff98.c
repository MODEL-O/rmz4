// undefined FUN_080dff98(void)
// entry 0x80dff98


undefined4 FUN_080dff98(int param_1)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0x8500);
  FUN_0801cff0(param_1);
  uVar4 = *DAT_080dffe0 * DAT_080dffe4 + DAT_080dffe8;
  *DAT_080dffe0 = uVar4 & 0x7fffffff;
  uVar4 = (uVar4 & 0x7fffffff) >> 0x10 & 1;
  if (uVar4 == 0) {
    bVar3 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar3;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x58);
  iVar2 = DAT_080e0084;
  iVar5 = DAT_080e0080;
  puVar1 = DAT_080e007c;
  uVar4 = DAT_080e0080 * *DAT_080e007c + DAT_080e0084;
  iVar7 = ((uVar4 & 0x1ffffff) >> 0x10) + 0x100;
  *(int *)(param_1 + 0x5c) = iVar7;
  uVar4 = iVar5 * (uVar4 & 0x7fffffff) + iVar2;
  *puVar1 = uVar4 & 0x7fffffff;
  iVar5 = ((uVar4 & 0x7fffffff) >> 0x10 & 7) + 0xc;
  *(int *)(param_1 + 0x68) = iVar5;
  *(int *)(param_1 + 0x60) = iVar5 * 0x1e;
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(int *)(param_1 + 0x5c) = -iVar7;
  }
  piVar6 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e0088);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar6 + 4);
  FUN_080dff68(param_1);
  return in_lr;
}


