// undefined FUN_080e7728(void)
// entry 0x80e7728


undefined4 FUN_080e7728(int param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar5;
  iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar4;
  iVar3 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  if (*(char *)(param_1 + 0x10) == '\0') {
    sVar1 = FUN_08007c7c(iVar5,iVar4);
    if (sVar1 != 0) {
      piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e7770);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    }
  }
  else {
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if (0x7f < iVar3) {
      iVar3 = *(int *)(param_1 + 100) * -0x100;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      *(int *)(param_1 + 100) = iVar3 >> 8;
    }
    if (*(char *)(param_1 + 0x12) == '\0') {
      piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e77b0);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  return in_lr;
}


