// undefined FUN_0802c7b4(void)
// entry 0x802c7b4


undefined8 FUN_0802c7b4(int param_1,short *param_2)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x278) != '\0') {
LAB_0802ca54:
    uVar5 = 0;
    goto LAB_0802ca56;
  }
  uVar8 = DAT_0802c808;
  if (*(char *)(param_1 + 0x94) != '\0') {
    uVar8 = DAT_0802c80c;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar6 = *(int *)(param_1 + 0x54) + (int)*param_2;
    iVar4 = (int)((uint)(ushort)param_2[2] << 0x10) >> 0x11;
    iVar7 = (iVar6 - iVar4) + DAT_0802c8a0;
    iVar6 = iVar6 + iVar4;
    iVar4 = 0x800;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x54) - (int)*param_2;
    iVar4 = (int)((uint)(ushort)param_2[2] << 0x10) >> 0x11;
    iVar7 = iVar6 + iVar4 + 0x800;
    iVar6 = iVar6 - iVar4;
    iVar4 = DAT_0802c810;
  }
  iVar6 = iVar6 + iVar4;
  iVar4 = *(int *)(param_1 + 0x58) + (int)param_2[1] +
          ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11) + DAT_0802c8a4;
  uVar5 = FUN_0802e55c(param_1,iVar7,iVar4);
  uVar5 = uVar5 & 0xff;
  if (uVar5 != 0) goto LAB_0802ca56;
  uVar5 = FUN_08007020(iVar7,iVar4);
  cVar2 = FUN_0802f084(uVar8 & uVar5,*(int *)(param_1 + 0x54) < iVar7);
  if (cVar2 != '\0') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      sVar3 = FUN_08007020(iVar7 + 0x1000,iVar4);
      if (sVar3 != 0) goto LAB_0802c8be;
      goto LAB_0802c910;
    }
    sVar3 = FUN_08007020(iVar7 + DAT_0802c8a8,iVar4);
    if (sVar3 != 0) goto LAB_0802c8be;
    goto LAB_0802c89a;
  }
LAB_0802c8be:
  uVar5 = FUN_0802e55c(param_1,iVar6,iVar4);
  uVar5 = uVar5 & 0xff;
  if (uVar5 != 0) goto LAB_0802ca56;
  uVar5 = FUN_08007020(iVar6,iVar4);
  cVar2 = FUN_0802f084(uVar8 & uVar5,*(int *)(param_1 + 0x54) < iVar6);
  if (cVar2 != '\0') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      sVar3 = FUN_08007020(iVar6 + DAT_0802c970,iVar4);
      if (sVar3 == 0) goto LAB_0802c89a;
    }
    else {
      sVar3 = FUN_08007020(iVar6 + 0x1000,iVar4);
      if (sVar3 == 0) goto LAB_0802c910;
    }
  }
  iVar4 = *(int *)(param_1 + 0x58) + (int)param_2[1];
  uVar5 = FUN_0802e55c(param_1,iVar7,iVar4);
  uVar5 = uVar5 & 0xff;
  if (uVar5 != 0) goto LAB_0802ca56;
  uVar5 = FUN_08007020(iVar7,iVar4);
  cVar2 = FUN_0802f084(uVar8 & uVar5,*(int *)(param_1 + 0x54) < iVar7);
  if (cVar2 == '\0') {
    uVar5 = FUN_0802e55c(param_1,iVar6,iVar4);
    uVar5 = uVar5 & 0xff;
    if (uVar5 != 0) goto LAB_0802ca56;
    uVar5 = FUN_08007020(iVar6,iVar4);
    cVar2 = FUN_0802f084(uVar8 & uVar5,*(int *)(param_1 + 0x54) < iVar6);
    if (cVar2 == '\0') {
      iVar4 = (*(int *)(param_1 + 0x58) + (int)param_2[1]) -
              ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11);
      uVar5 = FUN_0802e55c(param_1,iVar7,iVar4 + 0x200);
      uVar5 = uVar5 & 0xff;
      if (uVar5 != 0) goto LAB_0802ca56;
      uVar5 = FUN_08007020(iVar7,iVar4);
      cVar2 = FUN_0802f084(uVar8 & uVar5,*(int *)(param_1 + 0x54) < iVar7);
      if (cVar2 != '\0') {
        bVar1 = *(byte *)(param_1 + 10);
        goto joined_r0x0802ca0c;
      }
      uVar5 = FUN_0802e55c(param_1,iVar6,iVar4 + 0x200);
      uVar5 = uVar5 & 0xff;
      if (uVar5 != 0) goto LAB_0802ca56;
      uVar5 = FUN_08007020(iVar6,iVar4);
      cVar2 = FUN_0802f084(uVar8 & uVar5,*(int *)(param_1 + 0x54) < iVar6);
      if (cVar2 == '\0') goto LAB_0802ca54;
      bVar1 = *(byte *)(param_1 + 10);
    }
    else {
      bVar1 = *(byte *)(param_1 + 10);
    }
    if ((bVar1 & 0x10) != 0) goto LAB_0802c910;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10);
joined_r0x0802ca0c:
    if ((bVar1 & 0x10) == 0) {
LAB_0802c910:
      uVar5 = 1;
      goto LAB_0802ca56;
    }
  }
LAB_0802c89a:
  uVar5 = 2;
LAB_0802ca56:
  return CONCAT44(in_lr,uVar5);
}


