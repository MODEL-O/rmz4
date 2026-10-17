// undefined FUN_080e662c(void)
// entry 0x80e662c


undefined4 FUN_080e662c(int param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    if (*(char *)(param_1 + 0x12) == '\0') {
      local_14 = *(undefined4 *)(param_1 + 0x54);
      local_10 = *(int *)(param_1 + 0x58) + DAT_080e6688;
      FUN_080d0c88(1,&local_14);
      FUN_08002b10(0x2a);
      FUN_080e6270(param_1 + 0x54,0x102,*(byte *)(param_1 + 10) >> 4 & 1);
      piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e668c);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    if (*(int *)(param_1 + 0x78) < 0x100) {
      iVar3 = *(int *)(param_1 + 100);
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + iVar3;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      iVar3 = *(int *)(param_1 + 0x78) + iVar3;
      *(int *)(param_1 + 0x78) = iVar3;
      if (0xff < iVar3) {
        *(undefined4 *)(param_1 + 0x68) = 0x40;
      }
    }
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    sVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + DAT_080e672c);
    if (sVar1 != 0) {
      local_14 = *(undefined4 *)(param_1 + 0x54);
      local_10 = *(int *)(param_1 + 0x58) + DAT_080e672c;
      FUN_080d0c88(1,&local_14);
      FUN_08002b10(0x2a);
      FUN_080e6270(&local_14,DAT_080e6730,*(byte *)(param_1 + 10) >> 4 & 1);
      FUN_080e6270(&local_14,DAT_080e6734,*(byte *)(param_1 + 10) >> 4 & 1);
      piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e6738);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    }
  }
  return in_lr;
}


