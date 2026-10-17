// undefined FUN_080ab3e4(void)
// entry 0x80ab3e4


undefined4 FUN_080ab3e4(int param_1)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  undefined4 in_lr;
  
  bVar7 = *(byte *)(param_1 + 10);
  bVar1 = false;
  cVar10 = '\0';
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_080ab458);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,DAT_080ab45c);
  if (*(short *)(param_1 + 0xb4) == 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar4 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    if (0x700 < iVar4) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    uVar5 = FUN_0801fb14(DAT_080ab528,param_1 + 0x54);
    if (0x2000 < uVar5) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      piVar6 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ab52c);
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar6 + 0xc);
      return in_lr;
    }
  }
  else {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    uVar8 = *(undefined4 *)(param_1 + 0x54);
    uVar9 = *(undefined4 *)(param_1 + 0x58);
    sVar3 = FUN_08007c7c(uVar8,uVar9);
    if (sVar3 == 0) {
      iVar4 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar4;
      if (0x700 < iVar4) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
    }
    else {
      iVar4 = FUN_08008534(uVar8,uVar9);
      *(int *)(param_1 + 0x58) = iVar4 + -1;
      bVar1 = true;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    if (*(int *)(param_1 + 0x5c) < 0) {
      uVar8 = *(undefined4 *)(param_1 + 0x54);
      uVar9 = *(undefined4 *)(param_1 + 0x58);
      sVar3 = FUN_08007c7c(uVar8,uVar9);
      if (sVar3 != 0) {
        uVar8 = FUN_08008988(uVar8,uVar9);
        *(undefined4 *)(param_1 + 0x54) = uVar8;
        cVar10 = '\x01';
      }
    }
    else {
      uVar8 = *(undefined4 *)(param_1 + 0x54);
      uVar9 = *(undefined4 *)(param_1 + 0x58);
      sVar3 = FUN_08007c7c(uVar8,uVar9);
      if (sVar3 != 0) {
        uVar8 = FUN_08008868(uVar8,uVar9);
        *(undefined4 *)(param_1 + 0x54) = uVar8;
        cVar10 = '\x01';
      }
    }
  }
  if (bVar1) {
    bVar7 = (bVar7 >> 4 & 1) + cVar10 & 1;
    if (bVar7 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(byte *)(param_1 + 0x4c) = bVar7;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar7 << 4;
    FUN_080ab610(param_1);
  }
  return in_lr;
}


