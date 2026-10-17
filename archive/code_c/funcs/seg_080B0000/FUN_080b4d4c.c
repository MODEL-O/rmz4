// undefined FUN_080b4d4c(void)
// entry 0x80b4d4c


undefined4 FUN_080b4d4c(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb4) == '\0') {
    if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
      uVar2 = 0x200;
    }
    else {
      sVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x200);
      if (sVar1 == 0) {
        FUN_080e70d4(param_1 + 0x54,0,*(byte *)(param_1 + 10) >> 4 & 1);
        goto LAB_080b4dd4;
      }
      uVar2 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar2;
      uVar2 = 0x100;
    }
    FUN_080e70d4(param_1 + 0x54,uVar2,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  else {
    FUN_080e70d4(param_1 + 0x54,0x300,*(byte *)(param_1 + 10) >> 4 & 1);
  }
LAB_080b4dd4:
  if (*(ushort *)(DAT_080b4e0c + 0xc) <= DAT_080b4e10) {
    *(ushort *)(DAT_080b4e0c + 0xc) = *(ushort *)(DAT_080b4e0c + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  FUN_0802ab88(0,0x17,param_1 + 0x54);
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b4e14);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0x10);
  return in_lr;
}


