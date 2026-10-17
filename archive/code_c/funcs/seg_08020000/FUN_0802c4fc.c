// undefined FUN_0802c4fc(void)
// entry 0x802c4fc


undefined8 FUN_0802c4fc(int param_1,short *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_lr;
  int local_28 [3];
  
  piVar4 = local_28;
  piVar5 = local_28;
  uVar7 = 0;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    local_28[2] = *(int *)(param_1 + 0x54);
    local_28[1] = (int)((uint)(ushort)param_2[2] << 0x10) >> 0x11;
    local_28[0] = (local_28[2] + *param_2) - local_28[1];
    local_28[1] = local_28[2] + *param_2 + local_28[1];
  }
  else {
    local_28[2] = *(int *)(param_1 + 0x54);
    local_28[1] = (int)((uint)(ushort)param_2[2] << 0x10) >> 0x11;
    local_28[0] = (local_28[2] - *param_2) + local_28[1];
    local_28[1] = (local_28[2] - *param_2) - local_28[1];
  }
  iVar3 = *(int *)(param_1 + 0x58) + (int)param_2[1] +
          ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11) + 1;
  iVar6 = 0;
  do {
    uVar2 = FUN_0802e058(param_1,*piVar4,iVar3);
    if ((uVar2 & 0x8000) == 0) {
LAB_0802c598:
      if ((uVar2 & 0xf) != 0) goto LAB_0802c5da;
    }
    else if ((uVar2 & 0xf) != 0) {
      if (0xe < (uVar2 & 0xf)) goto LAB_0802c598;
      uVar7 = 2;
      goto LAB_0802c5e8;
    }
    piVar4 = piVar4 + 1;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 3);
  iVar6 = 0;
  do {
    uVar1 = FUN_08007020(*piVar5,iVar3);
    if (uVar1 != 0) {
      if ((((uVar1 & 0x8000) == 0) || ((uVar1 & 0xf) == 0)) || (0xe < (uVar1 & 0xf)))
      goto LAB_0802c5da;
      uVar7 = 1;
    }
    piVar5 = piVar5 + 1;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 3);
LAB_0802c5e8:
  return CONCAT44(in_lr,uVar7);
LAB_0802c5da:
  uVar7 = 0;
  goto LAB_0802c5e8;
}


