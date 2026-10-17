// undefined FUN_08091dd0(void)
// entry 0x8091dd0


undefined4 FUN_08091dd0(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  short sVar14;
  undefined4 uVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 in_lr;
  int local_28;
  undefined4 local_24;
  
  iVar19 = *DAT_08091e04;
  if (*(char *)(param_1 + 0xe) != '\0') goto LAB_08091fc4;
  FUN_08005784(param_1 + 0x74,DAT_08091e08);
  uVar15 = DAT_08091e0c;
  if ((*(byte *)(iVar19 + 10) & 0x10) == 0) {
    uVar15 = 0x480;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar15;
  uVar15 = DAT_08091e70;
  *(undefined4 *)(param_1 + 0x60) = DAT_08091e70;
  iVar13 = DAT_08092028;
  iVar12 = DAT_08092024;
  puVar11 = DAT_08092020;
  uVar10 = DAT_0809201c;
  iVar9 = DAT_08091f50;
  iVar8 = DAT_08091f4c;
  puVar7 = DAT_08091f48;
  uVar20 = DAT_08091f44;
  iVar6 = DAT_08091eec;
  iVar5 = DAT_08091ee8;
  puVar4 = DAT_08091ee4;
  uVar3 = DAT_08091ee0;
  iVar18 = DAT_08091e80;
  iVar19 = DAT_08091e7c;
  puVar2 = DAT_08091e78;
  uVar1 = DAT_08091e74;
  if (*(char *)(param_1 + 0xbe) == '\x02') {
    uVar17 = *DAT_08091e78 * DAT_08091e7c + DAT_08091e80;
    *DAT_08091e78 = uVar17 & 0x7fffffff;
    FUN_080d4c8c(param_1 + 0x54,uVar1,0,((uVar17 & 0x7fffffff) >> 0x10 & 1) << 4);
    uVar17 = *puVar2 * iVar19 + iVar18;
    *puVar2 = uVar17 & 0x7fffffff;
    uVar17 = ((uVar17 & 0x7fffffff) >> 0x10 & 1) << 4 | 1;
    uVar20 = uVar1;
LAB_08091f36:
    FUN_080d4c8c(param_1 + 0x54,uVar20,0,uVar17);
  }
  else {
    if (*(char *)(param_1 + 0xbe) == '\0') {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        uVar17 = *DAT_08091f48 * DAT_08091f4c + DAT_08091f50;
        *DAT_08091f48 = uVar17 & 0x7fffffff;
        FUN_080d4c8c(param_1 + 0x54,uVar20,0,((uVar17 & 0x7fffffff) >> 0x10 & 1) << 4);
        uVar17 = *puVar7 * iVar8 + iVar9;
        *puVar7 = uVar17 & 0x7fffffff;
        uVar17 = ((uVar17 & 0x7fffffff) >> 0x10 & 1) << 4;
      }
      else {
        uVar17 = *DAT_08091ee4 * DAT_08091ee8 + DAT_08091eec;
        *DAT_08091ee4 = uVar17 & 0x7fffffff;
        FUN_080d4c8c(param_1 + 0x54,uVar3,0,((uVar17 & 0x7fffffff) >> 0x10 & 1) << 4 | 1);
        uVar17 = *puVar4 * iVar5 + iVar6;
        *puVar4 = uVar17 & 0x7fffffff;
        uVar17 = ((uVar17 & 0x7fffffff) >> 0x10 & 1) << 4 | 1;
        uVar20 = uVar3;
      }
      goto LAB_08091f36;
    }
    local_24 = *(undefined4 *)(param_1 + 0x58);
    local_28 = *(int *)(param_1 + 0x54) + 0x300;
    uVar17 = *DAT_08092020 * DAT_08092024 + DAT_08092028;
    *DAT_08092020 = uVar17 & 0x7fffffff;
    FUN_080d4c8c(&local_28,uVar10,0,((uVar17 & 0x7fffffff) >> 0x10 & 1) << 4);
    local_28 = local_28 + DAT_0809202c;
    uVar17 = *puVar11 * iVar12 + iVar13;
    *puVar11 = uVar17 & 0x7fffffff;
    FUN_080d4c8c(&local_28,uVar10,0,((uVar17 & 0x7fffffff) >> 0x10 & 1) << 4 | 1);
    *(undefined4 *)(param_1 + 0x60) = uVar15;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_08091fc4:
  FUN_0801cff0(param_1);
  iVar18 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar18;
  iVar19 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar19;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  if (((*(uint *)(param_1 + 0x8c) & 4) != 0) || (sVar14 = FUN_08007c7c(iVar18,iVar19), sVar14 != 0))
  {
    piVar16 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08092030);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar16 + 8);
  }
  return in_lr;
}


