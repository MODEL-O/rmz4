// undefined FUN_08059844(void)
// entry 0x8059844


undefined8 FUN_08059844(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  int local_38 [4];
  undefined1 local_28 [4];
  int local_24;
  
  piVar4 = local_38;
  local_38[0] = *DAT_080598d4;
  local_38[1] = DAT_080598d4[1];
  local_38[2] = DAT_080598d4[2];
  local_38[3] = DAT_080598d4[3];
  FUN_08129258(local_28,DAT_080598d8,4);
  iVar6 = *(int *)(*DAT_080598dc + 0x54);
  iVar5 = 0;
  iVar1 = (*(byte *)(*DAT_080598dc + 10) >> 4 & 1) * 2;
  local_24 = iVar1;
  do {
    iVar3 = iVar6 + *piVar4 * (iVar1 + -1);
    iVar2 = FUN_08059be8(param_1);
    if ((iVar3 < iVar2) || (iVar2 = FUN_08059bf4(param_1), iVar2 < iVar3)) {
      local_28[iVar5] = 0;
    }
    piVar4 = piVar4 + 1;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  iVar1 = FUN_08059b68(local_28,4);
  if (-1 < iVar1) {
    iVar6 = iVar6 + (local_24 + -1) * local_38[iVar1];
  }
  return CONCAT44(in_lr,iVar6);
}


