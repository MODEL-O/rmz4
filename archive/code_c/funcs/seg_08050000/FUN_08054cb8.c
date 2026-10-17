// undefined FUN_08054cb8(void)
// entry 0x8054cb8


undefined4 FUN_08054cb8(int param_1)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *extraout_r1;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 in_lr;
  int local_44 [4];
  int iStack_34;
  int iStack_30;
  int local_2c;
  int iStack_28;
  int local_24;
  int local_20;
  
  local_44[0] = *DAT_08054ce4;
  local_44[1] = DAT_08054ce4[1];
  local_44[2] = DAT_08054ce4[2];
  local_44[3] = DAT_08054ce4[3];
  iStack_34 = DAT_08054ce4[4];
  iStack_30 = DAT_08054ce4[5];
  local_2c = DAT_08054ce4[6];
  iStack_28 = DAT_08054ce4[7];
  piVar8 = &local_24;
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      FUN_0801cff0(param_1,piVar8);
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x60);
      iVar9 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar9;
      if (0x700 < iVar9) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      iVar9 = *(int *)(param_1 + 0x5c);
      if (iVar9 < 0) {
        iVar9 = iVar9 + 0x1f;
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 100) + (iVar9 >> 5);
      FUN_0805524c(param_1);
      FUN_0805526c(param_1);
      cVar4 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar4;
      if (cVar4 == '\0') {
        cVar4 = FUN_08129198(*(undefined1 *)(param_1 + 0x13),3);
        if (cVar4 == '\0') {
          FUN_08002b10(0x35);
        }
        local_20 = DAT_08054fac;
        uVar7 = DAT_08054fa8;
        iVar3 = DAT_08054fa4;
        iVar9 = DAT_08054fa0;
        puVar2 = DAT_08054f9c;
        uVar10 = *(byte *)(param_1 + 0x13) & 3;
        uVar5 = *DAT_08054f9c * DAT_08054fa0 + DAT_08054fa4;
        local_24 = *(int *)(param_1 + 0x54) + local_44[uVar10 * 2] +
                   ((uVar5 & 0x7fffffff) >> 0x10 & DAT_08054fa8) + DAT_08054fac;
        iVar11 = *(int *)(param_1 + 0x58);
        iVar6 = local_44[uVar10 * 2 + 1];
        uVar5 = (uVar5 & 0x7fffffff) * DAT_08054fa0 + DAT_08054fa4;
        *DAT_08054f9c = uVar5 & 0x7fffffff;
        local_20 = iVar11 + iVar6 + ((uVar5 & 0x7fffffff) >> 0x10 & uVar7) + local_20;
        iVar6 = FUN_080d0c88(1);
        if (iVar6 != 0) {
          *(byte *)(iVar6 + 0x49) = *(byte *)(iVar6 + 0x49) | 0xc;
        }
        uVar7 = *puVar2 * iVar9 + iVar3;
        *puVar2 = uVar7 & 0x7fffffff;
        *(byte *)(param_1 + 0x12) = ((byte)(uVar7 >> 0x10) & 7) + 8;
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
      if (*(int *)(param_1 + 0x58) <= *(int *)(param_1 + 0xbc) + 0x18000) {
        return in_lr;
      }
      FUN_0800d7f4(1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      goto LAB_08054f86;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    FUN_08002b10(0x53);
    if (((*(ushort *)(DAT_08054e60 + 8) & 1) != 0) && ((*(byte *)(DAT_08054e60 + 0x12) & 1) == 0)) {
      *(ushort *)(DAT_08054e60 + 8) = (ushort)DAT_08054e64 & *(ushort *)(DAT_08054e60 + 8) | 0x10;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar8 = DAT_08054e68;
    if ((int *)(uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) ==
        DAT_08054e68) {
      FUN_0801cf00(param_1,(int)DAT_08054e68 - 1);
      piVar8 = extraout_r1;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x58);
    *(undefined1 *)(param_1 + 0x12) = 8;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0x80;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  FUN_0801cff0(param_1,piVar8);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x60);
  iVar9 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar9;
  if (0x700 < iVar9) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar9 = *(int *)(param_1 + 0x5c);
  if (iVar9 < 0) {
    iVar9 = iVar9 + 0x1f;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 100) + (iVar9 >> 5);
  FUN_0805524c(param_1);
  FUN_0805526c(param_1);
  cVar4 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar4;
  if (cVar4 == '\0') {
    cVar4 = FUN_08129198(*(undefined1 *)(param_1 + 0x13),3);
    if (cVar4 == '\0') {
      FUN_08002b10(0x35);
    }
    local_20 = DAT_08054e7c;
    uVar7 = DAT_08054e78;
    iVar3 = DAT_08054e74;
    iVar9 = DAT_08054e70;
    puVar2 = DAT_08054e6c;
    uVar10 = *(byte *)(param_1 + 0x13) & 3;
    uVar5 = *DAT_08054e6c * DAT_08054e70 + DAT_08054e74;
    local_24 = *(int *)(param_1 + 0x54) + local_44[uVar10 * 2] +
               ((uVar5 & 0x7fffffff) >> 0x10 & DAT_08054e78) + DAT_08054e7c;
    iVar11 = *(int *)(param_1 + 0x58);
    iVar6 = local_44[uVar10 * 2 + 1];
    uVar5 = (uVar5 & 0x7fffffff) * DAT_08054e70 + DAT_08054e74;
    *DAT_08054e6c = uVar5 & 0x7fffffff;
    local_20 = iVar11 + iVar6 + ((uVar5 & 0x7fffffff) >> 0x10 & uVar7) + local_20;
    iVar6 = FUN_080d0c88(1);
    if (iVar6 != 0) {
      *(byte *)(iVar6 + 0x49) = *(byte *)(iVar6 + 0x49) | 0xc;
    }
    uVar7 = *puVar2 * iVar9 + iVar3;
    *puVar2 = uVar7 & 0x7fffffff;
    *(byte *)(param_1 + 0x12) = ((byte)(uVar7 >> 0x10) & 7) + 8;
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  }
  iVar9 = *(int *)(param_1 + 0x68) + -1;
  *(int *)(param_1 + 0x68) = iVar9;
  if (iVar9 != 0) {
    return in_lr;
  }
  *(byte *)(DAT_08054e60 + 0x12) = *(byte *)(DAT_08054e60 + 0x12) | 2;
LAB_08054f86:
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}


