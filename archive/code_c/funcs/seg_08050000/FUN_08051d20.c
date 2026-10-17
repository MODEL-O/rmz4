// undefined FUN_08051d20(void)
// entry 0x8051d20


undefined4 FUN_08051d20(int param_1)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 in_lr;
  int local_20;
  undefined4 local_1c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar9 = DAT_08051d68 * *DAT_08051d64 + DAT_08051d6c;
    uVar6 = DAT_08051d68 * (uVar9 & 0x7fffffff) + DAT_08051d6c;
    *DAT_08051d64 = uVar6 & 0x7fffffff;
    uVar6 = (uVar6 & 0x7fffffff) >> 0x10 & 0x1f;
    if (uVar6 < 5) {
      uVar6 = 0;
    }
    else if (uVar6 < 8) {
      uVar6 = 1;
    }
    else if (uVar6 < 0xd) {
      uVar6 = 2;
    }
    else if (uVar6 < 0x11) {
      uVar6 = 3;
    }
    else if (uVar6 < 0x14) {
      uVar6 = 4;
    }
    else if (uVar6 < 0x19) {
      uVar6 = 5;
    }
    else if (uVar6 < 0x1c) {
      uVar6 = 6;
    }
    else {
      uVar6 = 7;
    }
    if (*(char *)(param_1 + 0xda + uVar6) != '\0') {
      return in_lr;
    }
    FUN_0801cf00(param_1,DAT_08051e14);
    FUN_08005784(param_1 + 0x74,DAT_08051e18);
    uVar7 = FUN_08008988(*(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(param_1 + 0xb8));
    *(undefined4 *)(param_1 + 0x54) = uVar7;
    if (uVar6 < 3) {
      *(undefined1 *)(param_1 + 0x4d) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x20;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
      iVar8 = FUN_08008748(*(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(param_1 + 0xb8));
      *(int *)(param_1 + 0xcc) = iVar8;
      *(int *)(param_1 + 0x58) = iVar8 + DAT_08051e1c;
      *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + uVar6 * 0x2800 + 0x3000;
    }
    else {
      *(undefined1 *)(param_1 + 0x4d) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
      *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xb8);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + 0x2c00;
      *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (uVar6 - 3) * 0x2c00 + 0x1000;
    }
    if (*(short *)(param_1 + 0xa4) < 0x21) {
      if (*(short *)(param_1 + 0xa4) < 0x11) {
        uVar4 = 0x28;
      }
      else {
        uVar4 = 0x32;
      }
    }
    else {
      uVar4 = 0x3c;
    }
    *(undefined1 *)(param_1 + 0x12) = uVar4;
    if ((uint)*(byte *)((uint)*(byte *)(param_1 + 0xd7) + DAT_08051e90) <
        ((uVar9 & 0x7fffffff) >> 0x10 & 0x1f) + 1) {
      uVar4 = 0x19;
    }
    else {
      uVar4 = 0x12;
    }
    *(undefined1 *)(param_1 + 0xf) = uVar4;
    *(undefined1 *)(param_1 + 0xe2) = 0;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    *(undefined1 *)(param_1 + 0xe2) = 1;
  }
  iVar3 = DAT_08051f28;
  iVar8 = DAT_08051f24;
  puVar2 = DAT_08051f20;
  if (*(char *)(param_1 + 0xf) != '\x12') goto LAB_08051fc4;
  bVar1 = *(byte *)(param_1 + 0x13);
  if ((bVar1 & 3) == 0) {
    iVar10 = *(int *)(param_1 + 0x54);
    uVar9 = DAT_08051f24 * *DAT_08051f20 + DAT_08051f28;
    *DAT_08051f20 = uVar9 & 0x7fffffff;
    local_20 = iVar10 + 0x1000 + ((uVar9 & 0x7fffffff) >> 0x10 & 0x1f) * -0x100;
    if ((bVar1 & 7) == 0) {
      if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
        local_1c = FUN_08008534(iVar10,*(undefined4 *)(param_1 + 0x58));
        uVar7 = DAT_08051f40;
      }
      else {
        local_1c = FUN_08008748(iVar10,*(undefined4 *)(param_1 + 0x58));
        uVar7 = DAT_08051f2c;
      }
    }
    else {
      if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
        local_1c = FUN_08008534(iVar10,*(undefined4 *)(param_1 + 0x58));
        uVar7 = DAT_08051fe8;
        uVar9 = iVar8 * *puVar2 + iVar3;
        *puVar2 = uVar9 & 0x7fffffff;
        FUN_080d4c8c(&local_20,uVar7,0,((uVar9 & 0x7fffffff) >> 0x10 & 1) << 4);
        goto LAB_08051faa;
      }
      local_1c = FUN_08008748(iVar10,*(undefined4 *)(param_1 + 0x58));
      uVar7 = DAT_08051f7c;
    }
    uVar9 = iVar8 * *puVar2 + iVar3;
    *puVar2 = uVar9 & 0x7fffffff;
    FUN_080d4c8c(&local_20,uVar7,0,((uVar9 & 0x7fffffff) >> 0x10 & 1) << 4);
  }
LAB_08051faa:
  if ((*(byte *)(param_1 + 0x13) & 0xf) == 0) {
    FUN_080dcd18(param_1,3,*(byte *)(param_1 + 0x13) >> 4);
  }
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
LAB_08051fc4:
  cVar5 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar5;
  if (cVar5 == -1) {
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_1 + 0xf);
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


