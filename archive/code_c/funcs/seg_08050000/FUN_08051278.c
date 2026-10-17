// undefined FUN_08051278(void)
// entry 0x8051278


undefined4 FUN_08051278(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  short sVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 in_lr;
  int local_28;
  int local_24;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar8 = *DAT_080512f0 * DAT_080512f4 + DAT_080512f8;
    *DAT_080512f0 = uVar8 & 0x7fffffff;
    uVar8 = (uVar8 & 0x7fffffff) >> 0x10 & 0x1f;
    FUN_08005784(param_1 + 0x74,DAT_080512fc);
    iVar10 = *DAT_08051300;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(iVar10 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar10 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar6 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar6 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar6;
    *(undefined4 *)(param_1 + 0x5c) = 0x100;
    *(undefined4 *)(param_1 + 100) = 0x18;
    if (uVar8 < 0xc) {
      uVar9 = 0xa000;
    }
    else if (uVar8 < 0x18) {
      uVar9 = 0xf000;
    }
    else {
      uVar9 = 0x14000;
    }
    *(undefined4 *)(param_1 + 0xc0) = uVar9;
    if (*(short *)(param_1 + 0xa4) < 0x21) {
      if (*(short *)(param_1 + 0xa4) < 0x11) {
        uVar9 = 0x380;
      }
      else {
        uVar9 = 0x300;
      }
    }
    else {
      uVar9 = 0x280;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar9;
    FUN_080dcd18(param_1,0,0);
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  bVar6 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar6;
  uVar2 = DAT_080514e8;
  uVar9 = DAT_080513b8;
  if ((bVar6 & 1) != 0) {
    if ((bVar6 & 3) == 1) {
      uVar8 = DAT_080513c0 * *DAT_080513bc + DAT_080513c4;
      *DAT_080513bc = uVar8 & 0x7fffffff;
      FUN_080d4c8c(param_1 + 0x54,uVar9,0,((uVar8 & 0x7fffffff) >> 0x10 & 1) << 4);
    }
    else {
      uVar8 = DAT_080514f0 * *DAT_080514ec + DAT_080514f4;
      *DAT_080514ec = uVar8 & 0x7fffffff;
      FUN_080d4c8c(param_1 + 0x54,uVar2,0,((uVar8 & 0x7fffffff) >> 0x10 & 1) << 4);
    }
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar10 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar10;
    sVar7 = FUN_08007c7c(iVar10 + DAT_0805160c,*(int *)(param_1 + 0x58) + DAT_08051610);
    iVar5 = DAT_08051620;
    iVar4 = DAT_0805161c;
    puVar3 = DAT_08051618;
    iVar10 = DAT_08051614;
    if (sVar7 != 0) {
      local_28 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c) + DAT_0805160c;
      local_24 = *(int *)(param_1 + 0x58) + DAT_08051610;
      uVar8 = *DAT_08051618 * DAT_0805161c + DAT_08051620;
      *DAT_08051618 = uVar8 & 0x7fffffff;
      FUN_080d4c8c(&local_28,iVar10,0,((uVar8 & 0x7fffffff) >> 0x10 & 1) << 4);
      uVar8 = *puVar3 * iVar4 + iVar5;
      *puVar3 = uVar8 & 0x7fffffff;
      FUN_080d4c8c(&local_28,iVar10,0,((uVar8 & 0x7fffffff) >> 0x10 & 1) << 4);
      uVar8 = *puVar3 * iVar4 + iVar5;
      *puVar3 = uVar8 & 0x7fffffff;
      FUN_080d4c8c(&local_28,iVar10 + 0x1c,0,((uVar8 & 0x7fffffff) >> 0x10 & 1) << 4);
      uVar8 = *puVar3 * iVar4 + iVar5;
      *puVar3 = uVar8 & 0x7fffffff;
      FUN_080d4c8c(&local_28,iVar10 + 0x1c,0,((uVar8 & 0x7fffffff) >> 0x10 & 1) << 4);
      *(undefined1 *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      FUN_0801fe64(2,param_1 + 0x54);
    }
  }
  else {
    iVar10 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar10;
    sVar7 = FUN_08007c7c(iVar10 + 0x2300,*(int *)(param_1 + 0x58) + DAT_080514f8);
    iVar5 = DAT_08051500;
    iVar4 = DAT_080514f4;
    iVar10 = DAT_080514f0;
    puVar3 = DAT_080514ec;
    if (sVar7 != 0) {
      local_28 = *(int *)(param_1 + 0x54) - (*(int *)(param_1 + 0x5c) + DAT_080514fc);
      local_24 = *(int *)(param_1 + 0x58) + DAT_080514f8;
      uVar8 = *DAT_080514ec * DAT_080514f0 + DAT_080514f4;
      *DAT_080514ec = uVar8 & 0x7fffffff;
      FUN_080d4c8c(&local_28,iVar5,0,((uVar8 & 0x7fffffff) >> 0x10 & 1) << 4 | 1);
      uVar8 = *puVar3 * iVar10 + iVar4;
      *puVar3 = uVar8 & 0x7fffffff;
      FUN_080d4c8c(&local_28,iVar5,0,((uVar8 & 0x7fffffff) >> 0x10 & 1) << 4 | 1);
      uVar8 = *puVar3 * iVar10 + iVar4;
      *puVar3 = uVar8 & 0x7fffffff;
      FUN_080d4c8c(&local_28,iVar5 + 0x1c,0,((uVar8 & 0x7fffffff) >> 0x10 & 1) << 4 | 1);
      uVar8 = *puVar3 * iVar10 + iVar4;
      *puVar3 = uVar8 & 0x7fffffff;
      FUN_080d4c8c(&local_28,iVar5 + 0x1c,0,((uVar8 & 0x7fffffff) >> 0x10 & 1) << 4 | 1);
      *(undefined1 *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      FUN_0801fe64(2,param_1 + 0x54);
    }
  }
  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0x5c);
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar10 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar10;
    if (iVar10 < *(int *)(param_1 + 0x60)) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x60);
    }
    if (*(int *)(param_1 + 0xc0) < 0) {
      *(undefined1 *)(param_1 + 0xf) = 1;
    }
  }
  else {
    iVar10 = *(int *)(param_1 + 0x5c) + -0x18;
    *(int *)(param_1 + 0x5c) = iVar10;
    if (iVar10 < 0x100) {
      *(undefined1 *)(param_1 + 0xd) = 7;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


