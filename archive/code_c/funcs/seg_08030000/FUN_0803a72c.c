// undefined FUN_0803a72c(void)
// entry 0x803a72c


undefined4 FUN_0803a72c(undefined4 param_1,int param_2,short param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  ushort *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar9 = (int)param_3;
  FUN_08005440(param_1,1,param_2,0xec,iVar9);
  pcVar1 = DAT_0803a7c4;
  uVar8 = 0;
  if (0 < iVar9) {
    do {
      *(char *)((short)uVar8 * 0xec + param_2 + 0x1c) = *pcVar1 + (char)uVar8;
      uVar5 = (int)(short)uVar8 + 1;
      uVar8 = uVar5 & 0xffff;
    } while ((int)(uVar5 * 0x10000) >> 0x10 < iVar9);
  }
  *DAT_0803a7c4 = *DAT_0803a7c4 + (char)param_3;
  *DAT_0803a7c8 = param_1;
  iVar4 = DAT_0803a7d8;
  uVar3 = DAT_0803a7d4;
  iVar2 = DAT_0803a7d0;
  iVar9 = DAT_0803a7cc;
  uVar8 = 0;
  do {
    puVar7 = (ushort *)(uVar8 * 2 + iVar9);
    puVar6 = (ushort *)(uVar8 * 2 + iVar2);
    *puVar6 = *puVar6 | (ushort)uVar3;
    *puVar7 = *puVar7 | (ushort)uVar3;
    *(undefined1 *)(uVar8 + iVar4) = 0;
    uVar8 = uVar8 + 1 & 0xffff;
  } while (uVar8 < 4);
  return in_lr;
}


