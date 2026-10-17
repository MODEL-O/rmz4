// undefined FUN_080e3c68(void)
// entry 0x80e3c68


undefined4 FUN_080e3c68(int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar4;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  sVar1 = FUN_08007c7c(iVar2,iVar4 + DAT_080e3cdc);
  if (sVar1 != 0) {
    local_18 = *(undefined4 *)(param_1 + 0x54);
    local_14 = *(int *)(param_1 + 0x58) + DAT_080e3cdc;
    FUN_080d0c88(2,&local_18);
    FUN_08002b10(0x2a);
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e3ce0);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
      FUN_080e37a0(param_1 + 0x54,DAT_080e3d10,*(byte *)(param_1 + 10) >> 4 & 1);
      FUN_080e37a0(param_1 + 0x54,DAT_080e3d14,*(byte *)(param_1 + 10) >> 4 & 1);
    }
    else {
      FUN_080e37a0(param_1 + 0x54,DAT_080e3ce4,*(byte *)(param_1 + 10) >> 4 & 1);
    }
  }
  return in_lr;
}


