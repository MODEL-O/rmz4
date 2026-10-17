// undefined FUN_08097074(void)
// entry 0x8097074


undefined4 FUN_08097074(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar9 = *(int *)(param_1 + 0x28);
  if (1 < *(byte *)(iVar9 + 0xc)) {
    if (*(char *)(iVar9 + 0xbf) != '\0') {
      piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080970a4);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
      FUN_08097220(param_1);
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080970e0);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
    return in_lr;
  }
  if (*(int *)(iVar9 + 0xc0) == 0) {
    FUN_08005784(param_1 + 0x74,DAT_0809713c);
  }
  else {
    FUN_08005784(param_1 + 0x74,DAT_080970fc);
  }
  if (*(char *)(iVar9 + 0xbd) == -0x40) {
LAB_080971ec:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    return in_lr;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(char *)(param_1 + 0x24) = *(char *)(iVar9 + 0xbd);
  bVar1 = *(byte *)(iVar9 + 10) >> 4;
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
  FUN_0801cff0(param_1);
  uVar4 = (uint)CONCAT11(*(undefined1 *)(iVar9 + 0x1e),*(undefined1 *)(iVar9 + 0x70));
  if (uVar4 != DAT_08097188) {
    if ((int)DAT_08097188 < (int)uVar4) {
      if (uVar4 == DAT_0809719c) {
        iVar3 = (int)*(char *)(iVar9 + 0x71);
        iVar7 = DAT_080971bc;
      }
      else {
        if (uVar4 != DAT_0809719c + 1) goto LAB_080971ec;
        iVar3 = 7 - *(char *)(iVar9 + 0x71);
        iVar7 = DAT_080971e4;
      }
      iVar8 = (int)*(short *)(iVar3 * 4 + iVar7);
      iVar7 = *(short *)(iVar3 * 4 + iVar7 + 2) + DAT_080971e8;
      goto LAB_080971f6;
    }
    if (uVar4 != DAT_08097188 - 2) goto LAB_080971ec;
  }
  iVar8 = 0;
  iVar7 = DAT_080971a8;
LAB_080971f6:
  uVar5 = *(undefined4 *)(iVar9 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar9 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar8 = *(int *)(param_1 + 0x54) + iVar8;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x54) - iVar8;
  }
  *(int *)(param_1 + 0x54) = iVar8;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar7;
  return in_lr;
}


