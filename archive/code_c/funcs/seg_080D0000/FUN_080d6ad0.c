// undefined FUN_080d6ad0(void)
// entry 0x80d6ad0


undefined4 FUN_080d6ad0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  byte bVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x11) * 2 + DAT_080d6b20));
  FUN_0801cff0(param_1);
  bVar4 = *(byte *)(iVar5 + 10) >> 4;
  bVar8 = bVar4 & 1;
  if ((bVar4 & 1) == 0) {
    bVar4 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar4 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar4;
  *(byte *)(param_1 + 0x4c) = bVar8;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar8 << 4;
  iVar3 = DAT_080d6bd0;
  iVar2 = DAT_080d6bcc;
  puVar1 = DAT_080d6bc8;
  uVar6 = DAT_080d6bcc * *DAT_080d6bc8 + DAT_080d6bd0;
  iVar9 = (4 - (uint)*(byte *)(param_1 + 0x11)) * 0x100 + ((uVar6 & 0x7fffffff) >> 0x10 & 0x7f);
  *(int *)(param_1 + 0x5c) = iVar9;
  bVar4 = *(byte *)(param_1 + 0x11);
  uVar6 = iVar2 * (uVar6 & 0x7fffffff) + iVar3;
  *puVar1 = uVar6 & 0x7fffffff;
  *(uint *)(param_1 + 0x60) = -((bVar4 + 2) * 0x100 + ((uVar6 & 0x7fffffff) >> 0x10 & 0x7f));
  if (*(int *)(*DAT_080d6bd4 + 0x54) < *(int *)(iVar5 + 0x54)) {
    *(int *)(param_1 + 0x5c) = -iVar9;
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x11);
  piVar7 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d6bd8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar7 + 4);
  FUN_080d68fc(param_1);
  return in_lr;
}


