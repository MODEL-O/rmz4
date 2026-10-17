// undefined FUN_0802c670(void)
// entry 0x802c670


undefined8 FUN_0802c670(int param_1,short *param_2)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  
  uVar7 = DAT_0802c6ac;
  if (*(char *)(param_1 + 0x94) != '\0') {
    uVar7 = DAT_0802c6b0;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar6 = ((*(int *)(param_1 + 0x54) + (int)*param_2) -
            ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11)) + -1;
  }
  else {
    iVar6 = (*(int *)(param_1 + 0x54) - (int)*param_2) +
            ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11) + 1;
  }
  iVar5 = *(int *)(param_1 + 0x58) + (int)param_2[1] +
          ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11) + DAT_0802c7a0;
  cVar1 = FUN_0802e474(param_1,iVar6,iVar5);
  if (cVar1 == '\0') {
    uVar3 = FUN_08007020(iVar6,iVar5);
    cVar1 = FUN_0802f084(uVar7 & uVar3,*(byte *)(param_1 + 10) >> 4 & 1);
    if ((cVar1 == '\0') || (sVar2 = FUN_08007020(iVar6,iVar5), sVar2 != 0)) {
      iVar5 = *(int *)(param_1 + 0x58) + (int)param_2[1];
      cVar1 = FUN_0802e474(param_1,iVar6,iVar5);
      if (cVar1 == '\0') {
        uVar3 = FUN_08007020(iVar6,iVar5);
        cVar1 = FUN_0802f084(uVar7 & uVar3,*(byte *)(param_1 + 10) >> 4 & 1);
        if (cVar1 == '\0') {
          iVar5 = (*(int *)(param_1 + 0x58) + (int)param_2[1]) -
                  ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11);
          cVar1 = FUN_0802e474(param_1,iVar6,iVar5);
          if (cVar1 == '\0') {
            uVar3 = FUN_08007020(iVar6,iVar5);
            cVar1 = FUN_0802f084(uVar7 & uVar3,*(byte *)(param_1 + 10) >> 4 & 1);
            if (cVar1 == '\0') {
              uVar4 = 0;
              goto LAB_0802c7a6;
            }
          }
        }
      }
    }
  }
  uVar4 = 1;
LAB_0802c7a6:
  return CONCAT44(in_lr,uVar4);
}


