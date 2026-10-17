// undefined FUN_0802ee58(void)
// entry 0x802ee58


undefined8 FUN_0802ee58(int param_1,short *param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar7 = *(int *)(param_1 + 0x54);
    iVar3 = iVar7 + *param_2;
    uVar1 = param_2[2];
  }
  else {
    iVar7 = *(int *)(param_1 + 0x54);
    iVar3 = iVar7 - *param_2;
    uVar1 = param_2[2];
  }
  iVar6 = (int)((uint)uVar1 << 0x10) >> 0x11;
  iVar8 = iVar3 + iVar6;
  iVar3 = iVar3 - iVar6;
  uVar4 = FUN_08007d28(iVar7,*(int *)(param_1 + 0x58) + 1);
  if ((uVar4 & 0xf) == 1) {
    iVar7 = *(int *)(param_1 + 0x58) + (int)param_2[1] +
            ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11);
  }
  else {
    iVar7 = *(int *)(param_1 + 0x58) + (int)param_2[1];
  }
  iVar6 = FUN_08008264(iVar8,iVar7);
  if (((iVar6 < 0) || (iVar6 = FUN_0802de7c(param_1,iVar8,iVar7), iVar6 < 0)) ||
     (iVar6 = *(int *)(param_1 + 0x17c) - iVar8, iVar6 < 0)) {
    uVar4 = FUN_08007d28(iVar6 + iVar3,iVar7);
    if (((uVar4 & 0x8400) != 0) ||
       ((((uVar4 & 0xf) != 1 && (sVar2 = FUN_0802e2d0(param_1,iVar6 + iVar3,iVar7), sVar2 == 0)) &&
        (*(int *)(param_1 + 0x178) - iVar3 < 1)))) goto LAB_0802ef2c;
LAB_0802f072:
    uVar5 = 0;
  }
  else {
LAB_0802ef2c:
    iVar6 = FUN_08008448(iVar3,iVar7);
    if (((0 < iVar6) || (iVar6 = FUN_0802de7c(param_1,iVar3,iVar7), 0 < iVar6)) ||
       (iVar6 = *(int *)(param_1 + 0x178) - iVar3, 0 < iVar6)) {
      uVar4 = FUN_08007d28(iVar6 + iVar8,iVar7);
      if (((uVar4 & 0x8400) == 0) &&
         ((((uVar4 & 0xf) == 1 || (sVar2 = FUN_0802e2d0(param_1,iVar6 + iVar8,iVar7), sVar2 != 0))
          || (*(int *)(param_1 + 0x17c) - iVar8 < 0)))) goto LAB_0802f072;
    }
    iVar6 = (*(int *)(param_1 + 0x58) + (int)param_2[1]) -
            ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11);
    iVar7 = FUN_08008264(iVar8,iVar6);
    if (((iVar7 < 0) || (iVar7 = FUN_0802de7c(param_1,iVar8,iVar6), iVar7 < 0)) ||
       (iVar7 = *(int *)(param_1 + 0x17c) - iVar8, iVar7 < 0)) {
      uVar4 = FUN_08007d28(iVar7 + iVar3,iVar6);
      if (((uVar4 & 0x8400) == 0) &&
         ((((uVar4 & 0xf) == 1 || (sVar2 = FUN_0802e2d0(param_1,iVar7 + iVar3,iVar6), sVar2 != 0))
          || (0 < *(int *)(param_1 + 0x178) - iVar3)))) goto LAB_0802f072;
    }
    iVar7 = FUN_08008448(iVar3,iVar6);
    if (((0 < iVar7) || (iVar7 = FUN_0802de7c(param_1,iVar3,iVar6), 0 < iVar7)) ||
       (iVar7 = *(int *)(param_1 + 0x178) - iVar3, 0 < iVar7)) {
      uVar4 = FUN_08007d28(iVar7 + iVar8,iVar6);
      if (((uVar4 & 0x8400) == 0) &&
         ((((uVar4 & 0xf) == 1 || (sVar2 = FUN_0802e2d0(param_1,iVar7 + iVar8,iVar6), sVar2 != 0))
          || (*(int *)(param_1 + 0x17c) - iVar8 < 0)))) goto LAB_0802f072;
    }
    uVar5 = 1;
  }
  return CONCAT44(in_lr,uVar5);
}


