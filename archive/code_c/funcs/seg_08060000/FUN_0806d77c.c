// undefined FUN_0806d77c(void)
// entry 0x806d77c


undefined4 FUN_0806d77c(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  byte *pbVar10;
  uint uVar11;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(undefined1 *)(param_1 + 0x13) = 0;
    bVar1 = *(byte *)(param_1 + 0xdb);
    if (bVar1 < 100) {
      *(byte *)(param_1 + 0xdb) = bVar1 + 1;
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  pbVar10 = (byte *)(param_1 + 0xd8);
  uVar11 = (uint)*pbVar10;
  if (*(int *)(param_1 + 0xb4 + uVar11 * 4) == 0) goto LAB_0806d898;
  iVar6 = *(int *)(param_1 + 0x2c);
  if (iVar6 == 0) {
    piVar9 = (int *)(param_1 + 0x54);
    cVar2 = *(char *)(param_1 + 0xdb);
    uVar3 = *(undefined1 *)(param_1 + 0x13);
LAB_0806d884:
    uVar8 = FUN_080a3a88(param_1,piVar9,uVar11,cVar2 + -1,uVar3);
    *(undefined4 *)(param_1 + 0x2c) = uVar8;
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  }
  else {
    local_14 = *(int *)(iVar6 + 0x54);
    local_10 = *(int *)(iVar6 + 0x58);
    bVar4 = false;
    bVar1 = *pbVar10;
    if (bVar1 == 1) {
      iVar7 = *(int *)(param_1 + 0x54) - *(int *)(iVar6 + 0x54);
      iVar5 = 0x1600;
joined_r0x0806d80a:
      if (0x1600 < iVar7) {
        local_14 = local_14 + iVar5;
LAB_0806d842:
        bVar4 = true;
      }
    }
    else if (bVar1 < 2) {
      if ((bVar1 == 0) && (0x1600 < *(int *)(param_1 + 0x58) - *(int *)(iVar6 + 0x58))) {
        local_10 = local_10 + 0x1600;
        goto LAB_0806d842;
      }
    }
    else if (bVar1 == 2) {
      if (0x1600 < *(int *)(iVar6 + 0x58) - *(int *)(param_1 + 0x58)) {
        local_10 = local_10 + DAT_0806d828;
        goto LAB_0806d842;
      }
    }
    else if (bVar1 == 3) {
      iVar7 = *(int *)(iVar6 + 0x54) - *(int *)(param_1 + 0x54);
      iVar5 = DAT_0806d868;
      goto joined_r0x0806d80a;
    }
    if (1 < *(byte *)(iVar6 + 0xc)) {
      bVar4 = true;
    }
    if (bVar4) {
      uVar11 = (uint)*pbVar10;
      cVar2 = *(char *)(param_1 + 0xdb);
      uVar3 = *(undefined1 *)(param_1 + 0x13);
      piVar9 = &local_14;
      goto LAB_0806d884;
    }
  }
  if (*(byte *)(param_1 + 0x13) < 6) {
    return in_lr;
  }
LAB_0806d898:
  *(undefined1 *)(param_1 + 0xd) = 5;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return in_lr;
}


