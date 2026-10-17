// undefined FUN_080e6f2c(void)
// entry 0x80e6f2c


undefined4 FUN_080e6f2c(int param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    if (*(char *)(param_1 + 0x12) == '\0') {
      local_18 = *(undefined4 *)(param_1 + 0x54);
      local_14 = *(int *)(param_1 + 0x58) + DAT_080e6fa4;
      FUN_080d0c88(1,&local_18);
      FUN_08002b10(0xa7);
      iVar4 = param_1 + 0x54;
      FUN_080e6b5c(iVar4,DAT_080e6fa8,*(byte *)(param_1 + 10) >> 4 & 1);
      FUN_080e6b5c(iVar4,0x104,*(byte *)(param_1 + 10) >> 4 & 1);
      FUN_080e6b5c(iVar4,DAT_080e6fac,*(byte *)(param_1 + 10) >> 4 & 1);
      piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e6fb0);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar4 = DAT_080e7054;
    if (*(int *)(param_1 + 0x78) <= DAT_080e7054) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
      iVar3 = *(int *)(param_1 + 0x78) + 0x10;
      *(int *)(param_1 + 0x78) = iVar3;
      if (iVar4 < iVar3) {
        *(undefined4 *)(param_1 + 0x68) = 0x40;
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(undefined4 *)(param_1 + 0x5c) = 0;
      }
    }
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    sVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + DAT_080e7058);
    if (sVar1 != 0) {
      local_18 = *(undefined4 *)(param_1 + 0x54);
      local_14 = *(int *)(param_1 + 0x58) + DAT_080e7058;
      FUN_080d0c88(1,&local_18);
      FUN_08002b10(0xa7);
      FUN_080e6b5c(&local_18,DAT_080e705c,*(byte *)(param_1 + 10) >> 4 & 1);
      FUN_080e6b5c(&local_18,0x106,*(byte *)(param_1 + 10) >> 4 & 1);
      piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e7060);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    }
  }
  return in_lr;
}


