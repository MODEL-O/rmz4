// undefined FUN_080e0180(void)
// entry 0x80e0180


undefined4 FUN_080e0180(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801ceec(param_1);
  FUN_0801cf00(param_1,*(undefined2 *)(param_1 + 0x80));
  FUN_0801cff0(param_1);
  uVar5 = *DAT_080e01d4 * DAT_080e01d8 + DAT_080e01dc;
  *DAT_080e01d4 = uVar5 & 0x7fffffff;
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
  iVar3 = DAT_080e0290;
  iVar2 = DAT_080e028c;
  puVar1 = DAT_080e0288;
  uVar5 = DAT_080e028c * *DAT_080e0288 + DAT_080e0290;
  iVar7 = (*(byte *)(param_1 + 0x11) + 1) * 0x100 - ((uVar5 & 0x1ffffff) >> 0x10);
  *(int *)(param_1 + 0x5c) = iVar7;
  uVar5 = iVar2 * (uVar5 & 0x7fffffff) + iVar3;
  *(uint *)(param_1 + 0x60) =
       ((uint)*(byte *)(param_1 + 0x11) * 2 - (((uVar5 & 0x7fffffff) >> 0x10 & 7) + 0x12)) * 0x40;
  uVar5 = iVar2 * (uVar5 & 0x7fffffff) + iVar3;
  *puVar1 = uVar5 & 0x7fffffff;
  if (((uVar5 & 0x7fffffff) >> 0x10 & 1) != 0) {
    *(int *)(param_1 + 0x5c) = -iVar7;
  }
  *(undefined1 *)(param_1 + 0x12) = 0;
  piVar6 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e0294);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar6 + 4);
  FUN_080dff68(param_1);
  return in_lr;
}


