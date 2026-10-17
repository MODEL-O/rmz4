// undefined FUN_08085418(void)
// entry 0x8085418


void FUN_08085418(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 0x58) + param_3;
    *(int *)(param_1 + 0x58) = iVar1;
    if (param_3 < 0) {
      iVar1 = FUN_08007f8c(*(undefined4 *)(param_1 + 0x54),iVar1 + DAT_08085440);
      if (iVar1 < 1) goto LAB_08085456;
    }
    else {
      iVar1 = FUN_08007db4(*(undefined4 *)(param_1 + 0x54));
      if (-1 < iVar1) goto LAB_08085456;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
  }
LAB_08085456:
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x54) + param_2;
    *(int *)(param_1 + 0x54) = iVar1;
    if (param_2 < 0) {
      iVar1 = FUN_0800834c(iVar1,*(int *)(param_1 + 0x58) + DAT_08085478);
      if (iVar1 < 1) {
        return;
      }
    }
    else {
      iVar1 = FUN_0800816c(iVar1,*(int *)(param_1 + 0x58) + DAT_08085498);
      if (-1 < iVar1) {
        return;
      }
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
  }
  return;
}


