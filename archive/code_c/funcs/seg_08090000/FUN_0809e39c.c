// undefined FUN_0809e39c(void)
// entry 0x809e39c


undefined4 FUN_0809e39c(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  undefined4 in_lr;
  
  piVar3 = DAT_0809e3f8;
  iVar2 = *(int *)(param_1 + 0xb4);
  iVar7 = *DAT_0809e3f8;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x40);
    FUN_08005784(param_1 + 0x74,*(undefined4 *)(DAT_0809e3fc + 8));
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    FUN_0801cf00(param_1,0x5600);
    bVar1 = *(byte *)(*piVar3 + 10) >> 4;
    bVar6 = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 0x4c) = bVar6;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar6 << 4;
    *(undefined4 *)(param_1 + 100) = 300;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar4 = *(int *)(param_1 + 100) + -1;
  *(int *)(param_1 + 100) = iVar4;
  if ((((1 < *(byte *)(iVar2 + 0xc)) || (iVar4 < 1)) || ((*(uint *)(param_1 + 0x8c) & 0x800) == 0))
     || ((iVar7 == 0 || ((*(uint *)(iVar7 + 0x8c) & 1) != 0)))) {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809e48c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_0809e4ec(param_1);
    return in_lr;
  }
  iVar2 = *DAT_0809e4c0;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar2 + 0x58);
  iVar2 = DAT_0809e4c4;
  *(undefined1 *)(iVar7 + DAT_0809e4c4) = 1;
  *(undefined1 *)(iVar7 + iVar2 + 1) = 0;
  uVar5 = *(uint *)(param_1 + 100);
  if ((int)uVar5 < 0x4b) {
    if ((uVar5 & 1) != 0) {
      bVar1 = *(byte *)(param_1 + 10) | 1;
      goto LAB_0809e4dc;
    }
  }
  else if ((uVar5 & 3) != 0) {
    bVar1 = *(byte *)(param_1 + 10) | 1;
    goto LAB_0809e4dc;
  }
  bVar1 = *(byte *)(param_1 + 10) & 0xfe;
LAB_0809e4dc:
  *(byte *)(param_1 + 10) = bVar1;
  return in_lr;
}


