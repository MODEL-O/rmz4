// undefined FUN_0802ec70(void)
// entry 0x802ec70


undefined8 FUN_0802ec70(int param_1,short *param_2)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  char local_18;
  char local_17;
  char local_16;
  char local_15;
  
  FUN_081292b8(&local_18,0,4);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar5 = (*(int *)(param_1 + 0x54) + (int)*param_2) -
            ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
  }
  else {
    iVar5 = (*(int *)(param_1 + 0x54) - (int)*param_2) +
            ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
  }
  iVar4 = *(int *)(param_1 + 0x58) + (int)param_2[1] +
          ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11);
  uVar2 = FUN_08007d28(iVar5,iVar4);
  if ((((uVar2 & 0xf) == 1) && ((uVar2 & 0x8000) == 0)) && ((uVar2 & 0x400) == 0)) {
    local_18 = '\x01';
  }
  else {
    sVar1 = FUN_0802e2d0(param_1,iVar5,iVar4);
    if (sVar1 != 0) {
      local_18 = '\x01';
    }
  }
  iVar4 = (*(int *)(param_1 + 0x58) + (int)param_2[1]) -
          ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11);
  uVar2 = FUN_08007d28(iVar5,iVar4);
  if ((((uVar2 & 0xf) == 1) && ((uVar2 & 0x8000) == 0)) && ((uVar2 & 0x400) == 0)) {
    local_17 = '\x01';
  }
  else {
    sVar1 = FUN_0802e2d0(param_1,iVar5,iVar4);
    if (sVar1 != 0) {
      local_17 = '\x01';
    }
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar5 = *(int *)(param_1 + 0x54) + (int)*param_2 +
            ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
  }
  else {
    iVar5 = (*(int *)(param_1 + 0x54) - (int)*param_2) -
            ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
  }
  iVar4 = *(int *)(param_1 + 0x58) + (int)param_2[1] +
          ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11);
  uVar2 = FUN_08007d28(iVar5,iVar4);
  if ((((uVar2 & 0xf) == 1) && ((uVar2 & 0x8000) == 0)) && ((uVar2 & 0x400) == 0)) {
    local_16 = '\x01';
  }
  else {
    sVar1 = FUN_0802e2d0(param_1,iVar5,iVar4);
    if (sVar1 != 0) {
      local_16 = '\x01';
    }
  }
  iVar4 = (*(int *)(param_1 + 0x58) + (int)param_2[1]) -
          ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11);
  uVar2 = FUN_08007d28(iVar5,iVar4);
  if ((((uVar2 & 0xf) == 1) && ((uVar2 & 0x8000) == 0)) && ((uVar2 & 0x400) == 0)) {
    local_15 = '\x01';
  }
  else {
    sVar1 = FUN_0802e2d0(param_1,iVar5,iVar4);
    if (sVar1 != 0) {
      local_15 = '\x01';
    }
  }
  if (((local_18 == '\0') && (local_17 == '\0')) && ((local_16 == '\0' && (local_15 == '\0')))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return CONCAT44(in_lr,uVar3);
}


