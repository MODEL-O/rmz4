// undefined FUN_080e6080(void)
// entry 0x80e6080


undefined4 FUN_080e6080(int param_1)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar6 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar6;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),iVar6 + 0x3000);
    iVar6 = param_1 + 0x54;
    if ((sVar2 != 0xf) && (sVar2 != 0)) {
      local_18 = *(undefined4 *)(param_1 + 0x54);
      local_14 = *(int *)(param_1 + 0x58) + 0x2600;
      FUN_080d0c88(1,&local_18);
      FUN_08002b10(0x2a);
      FUN_080e5d34(iVar6,0x102,*(byte *)(param_1 + 10) >> 4 & 1);
      FUN_080e5d34(iVar6,0x104,*(byte *)(param_1 + 10) >> 4 & 1);
      piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e6134);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    }
    uVar4 = FUN_0801fb14(DAT_080e6138,iVar6);
    if (uVar4 < 0x4001) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e6134);
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar5 = *(undefined4 *)(*piVar3 + 0xc);
  }
  else {
    sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar2 == 0) {
      iVar6 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x58) = iVar6;
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
      sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),iVar6 + 0x3000);
      if (sVar2 == 0xf) {
        return in_lr;
      }
      if (sVar2 == 0) {
        return in_lr;
      }
    }
    else {
      cVar1 = FUN_080e6258(param_1);
      if (cVar1 == '\0') {
        return in_lr;
      }
      local_18 = *(undefined4 *)(param_1 + 0x54);
      local_14 = *(int *)(param_1 + 0x58) + 0xf00;
      FUN_080d0c88(1,&local_18);
      FUN_08002b10(0x2a);
    }
    FUN_080e5d34(param_1 + 0x54,DAT_080e61d4,*(byte *)(param_1 + 10) >> 4 & 1);
    FUN_080e5d34(param_1 + 0x54,DAT_080e61d8,*(byte *)(param_1 + 10) >> 4 & 1);
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e61dc);
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar5 = *(undefined4 *)(*piVar3 + 8);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  return in_lr;
}


