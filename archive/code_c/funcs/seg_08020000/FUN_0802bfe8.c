// undefined FUN_0802bfe8(void)
// entry 0x802bfe8


undefined8 FUN_0802bfe8(int param_1,short *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  int local_30 [4];
  
  uVar5 = 0;
  iVar3 = (*(int *)(param_1 + 0x58) + (int)param_2[1]) -
          ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    local_30[1] = (int)((uint)(ushort)param_2[2] << 0x10) >> 0x11;
    local_30[0] = (*(int *)(param_1 + 0x54) + (int)*param_2) - local_30[1];
    local_30[1] = *(int *)(param_1 + 0x54) + (int)*param_2 + local_30[1];
  }
  else {
    local_30[1] = (int)((uint)(ushort)param_2[2] << 0x10) >> 0x11;
    local_30[0] = (*(int *)(param_1 + 0x54) - (int)*param_2) + local_30[1];
    local_30[1] = (*(int *)(param_1 + 0x54) - (int)*param_2) - local_30[1];
  }
  if (*(char *)(param_1 + 0x1b8) != '\0') {
    uVar4 = 0;
    do {
      uVar1 = FUN_0802e058(param_1,local_30[uVar4],iVar3);
      if (((((uVar1 & 0x8000) == 0) || ((uVar1 & 0xf) == 0)) || (0xe < (uVar1 & 0xf))) &&
         ((uVar1 & 0xf) != 0xf)) {
        uVar1 = FUN_0802dd54(param_1,local_30[uVar4],iVar3,local_30 + 2);
        if ((uVar1 & 0xf) != 0) {
          local_30[0] = local_30[0] + local_30[2];
          local_30[1] = local_30[1] + local_30[2];
          iVar3 = iVar3 + local_30[3];
          uVar5 = uVar1 & 0xffff;
        }
      }
      uVar4 = uVar4 + 1 & 0xffff;
    } while (uVar4 < 2);
  }
  uVar4 = 0;
  do {
    uVar1 = FUN_08007020(local_30[uVar4],iVar3);
    if ((((uVar1 & 0x400) == 0) && ((uVar1 & 0xf) == 1)) && ((uVar1 & 0x8000) == 0)) {
      iVar2 = FUN_08008080(local_30[uVar4],iVar3);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
      iVar3 = iVar3 + iVar2;
      uVar5 = uVar1 & 0xffff;
    }
    uVar4 = uVar4 + 1 & 0xffff;
  } while (uVar4 < 2);
  return CONCAT44(in_lr,uVar5);
}


