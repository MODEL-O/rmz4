// undefined FUN_080904a0(void)
// entry 0x80904a0


undefined4 FUN_080904a0(int param_1)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 in_lr;
  
  iVar9 = *(int *)(param_1 + 0x28);
  iVar10 = *(int *)(iVar9 + 0x28);
  bVar2 = *(byte *)(iVar9 + 10) >> 4;
  bVar5 = bVar2 & 1;
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(byte *)(iVar9 + 0xc) < 2) {
    if (*(char *)(param_1 + 0xd) == '\0') {
      if (*(char *)(iVar9 + 0xd) == '\0') {
        uVar6 = *(undefined4 *)(iVar9 + 0x58);
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar9 + 0x54);
        *(undefined4 *)(param_1 + 0x58) = uVar6;
        return in_lr;
      }
      FUN_08005784(param_1 + 0x74,DAT_08090524);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    else {
      if (*(char *)(iVar9 + 0xd) != '\0') {
        if ((bVar2 & 1) == 0) {
          bVar2 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          bVar2 = *(byte *)(param_1 + 10) | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar2;
        *(byte *)(param_1 + 0x4c) = bVar5;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar5 << 4;
        FUN_0801cff0(param_1);
        iVar7 = DAT_080905e0;
        if ((*(byte *)(iVar10 + 10) & 0x10) != 0) {
          iVar7 = 0x400;
        }
        iVar7 = *(int *)(iVar10 + 0x54) + iVar7;
        iVar8 = bVar1 + 1;
        iVar4 = iVar8 * (*(int *)(iVar9 + 0x54) - iVar7);
        if (iVar4 < 0) {
          iVar4 = iVar4 + 3;
        }
        *(int *)(param_1 + 0x54) = iVar7 + (iVar4 >> 2);
        iVar10 = *(int *)(iVar10 + 0x58) + DAT_080905e4;
        iVar8 = iVar8 * (*(int *)(iVar9 + 0x58) - iVar10);
        if (iVar8 < 0) {
          iVar8 = iVar8 + 3;
        }
        *(int *)(param_1 + 0x58) = iVar10 + (iVar8 >> 2);
        return in_lr;
      }
      FUN_08005784(param_1 + 0x74,DAT_08090554);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(undefined1 *)(param_1 + 0xd) = 0;
    }
    FUN_080904a0(param_1);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080904f8);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
  }
  return in_lr;
}


