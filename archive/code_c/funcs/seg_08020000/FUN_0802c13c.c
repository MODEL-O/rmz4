// undefined FUN_0802c13c(void)
// entry 0x802c13c


undefined8 FUN_0802c13c(int param_1,short *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_20 [2];
  
  iVar2 = (*(int *)(param_1 + 0x58) + (int)param_2[1]) -
          ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    local_20[1] = (int)((uint)(ushort)param_2[2] << 0x10) >> 0x11;
    local_20[0] = (*(int *)(param_1 + 0x54) + (int)*param_2) - local_20[1];
    local_20[1] = *(int *)(param_1 + 0x54) + (int)*param_2 + local_20[1];
  }
  else {
    local_20[1] = (int)((uint)(ushort)param_2[2] << 0x10) >> 0x11;
    local_20[0] = (*(int *)(param_1 + 0x54) - (int)*param_2) + local_20[1];
    local_20[1] = (*(int *)(param_1 + 0x54) - (int)*param_2) - local_20[1];
  }
  if (*(char *)(param_1 + 0x1b8) != '\0') {
    uVar3 = 0;
    do {
      uVar1 = FUN_0802e058(param_1,local_20[uVar3],iVar2);
      if (((((uVar1 & 0x8000) == 0) || ((uVar1 & 0xf) == 0)) || (0xe < (uVar1 & 0xf))) &&
         (((uVar1 & 0xf) != 0xf && ((uVar1 & 0xf) != 0)))) goto LAB_0802c188;
      uVar3 = uVar3 + 1 & 0xffff;
    } while (uVar3 < 2);
  }
  uVar3 = 0;
  while( true ) {
    uVar1 = FUN_08007020(local_20[uVar3],iVar2);
    if ((((uVar1 & 0x400) == 0) && ((uVar1 & 0xf) == 1)) && ((uVar1 & 0x8000) == 0)) break;
    uVar3 = uVar3 + 1 & 0xffff;
    if (1 < uVar3) {
      uVar1 = 0;
LAB_0802c23e:
      return CONCAT44(in_lr,uVar1);
    }
  }
  FUN_08008080(local_20[uVar3],iVar2);
LAB_0802c188:
  uVar1 = uVar1 & 0xffff;
  goto LAB_0802c23e;
}


