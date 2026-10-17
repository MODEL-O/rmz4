// undefined FUN_080d69dc(void)
// entry 0x80d69dc


undefined4 FUN_080d69dc(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int *piVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0x28);
  uVar9 = (uint)*(byte *)(param_1 + 0x11);
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,*(undefined2 *)(uVar9 * 2 + DAT_080d6a20));
  FUN_0801cff0(param_1);
  bVar4 = *(byte *)(iVar8 + 10) >> 4;
  bVar7 = bVar4 & 1;
  if ((bVar4 & 1) == 0) {
    bVar4 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar4 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar4;
  *(byte *)(param_1 + 0x4c) = bVar7;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar7 << 4;
  uVar3 = DAT_080d6ac0;
  iVar2 = DAT_080d6abc;
  iVar8 = DAT_080d6ab8;
  puVar1 = DAT_080d6ab4;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    uVar9 = 2 - uVar9;
  }
  uVar5 = DAT_080d6ab8 * *DAT_080d6ab4 + DAT_080d6abc;
  *(uint *)(param_1 + 0x5c) =
       (uVar9 - 1) * 0x80 + ((uVar5 & 0x7fffffff) >> 0x10 & DAT_080d6ac0) + DAT_080d6ac4;
  uVar9 = iVar8 * (uVar5 & 0x7fffffff) + iVar2;
  *puVar1 = uVar9 & 0x7fffffff;
  *(uint *)(param_1 + 0x60) = DAT_080d6ac8 - ((uVar9 & 0x7fffffff) >> 0x10 & uVar3);
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x11);
  piVar6 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d6acc);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar6 + 4);
  FUN_080d68fc(param_1);
  return in_lr;
}


