// undefined FUN_08051fec(void)
// entry 0x8051fec


undefined4 FUN_08051fec(int param_1)

{
  byte bVar1;
  uint *puVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  int local_24;
  undefined4 local_20;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_08002b10(0xeb);
    uVar5 = DAT_08052098;
    if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
      uVar5 = 0x1c0;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar5;
    *(undefined1 *)(param_1 + 0x12) = 0x19;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    *(undefined1 *)(param_1 + 0xe2) = 1;
  }
  iVar7 = DAT_080520a4;
  iVar8 = DAT_080520a0;
  puVar2 = DAT_0805209c;
  bVar1 = *(byte *)(param_1 + 0x13);
  if ((bVar1 & 1) != 0) {
    iVar9 = *(int *)(param_1 + 0x54);
    uVar6 = DAT_080520a0 * *DAT_0805209c + DAT_080520a4;
    *DAT_0805209c = uVar6 & 0x7fffffff;
    local_24 = iVar9 + 0x1000 + ((uVar6 & 0x7fffffff) >> 0x10 & 0x1f) * -0x100;
    if ((bVar1 & 3) == 1) {
      if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
        local_20 = FUN_08008534(iVar9,*(undefined4 *)(param_1 + 0x58));
        uVar5 = DAT_080520bc;
      }
      else {
        local_20 = FUN_08008748(iVar9,*(undefined4 *)(param_1 + 0x58));
        uVar5 = DAT_080520a8;
      }
    }
    else {
      if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
        local_20 = FUN_08008534(iVar9,*(undefined4 *)(param_1 + 0x58));
        uVar5 = DAT_0805213c;
        uVar6 = iVar8 * *puVar2 + iVar7;
        *puVar2 = uVar6 & 0x7fffffff;
        FUN_080d4c8c(&local_24,uVar5,0,((uVar6 & 0x7fffffff) >> 0x10 & 1) << 4);
        goto LAB_08052126;
      }
      local_20 = FUN_08008748(iVar9,*(undefined4 *)(param_1 + 0x58));
      uVar5 = DAT_080520f8;
    }
    uVar6 = iVar8 * *puVar2 + iVar7;
    *puVar2 = uVar6 & 0x7fffffff;
    FUN_080d4c8c(&local_24,uVar5,0,((uVar6 & 0x7fffffff) >> 0x10 & 1) << 4);
  }
LAB_08052126:
  bVar1 = *(byte *)(param_1 + 0x13);
  *(byte *)(param_1 + 0x13) = bVar1 + 1;
  if ((bVar1 & 3) < 2) {
    iVar7 = *(int *)(param_1 + 0x54);
    iVar8 = 0x100;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x54);
    iVar8 = DAT_08052160;
  }
  *(int *)(param_1 + 0x54) = iVar7 + iVar8;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (*(char *)(param_1 + 0xd9) == '\0') {
    cVar4 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar4;
    if (cVar4 != -1) {
      return in_lr;
    }
    uVar3 = 0x13;
  }
  else {
    uVar3 = 0x1a;
  }
  *(undefined1 *)(param_1 + 0xd) = uVar3;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return in_lr;
}


