// undefined FUN_080bf494(void)
// entry 0x80bf494


void FUN_080bf494(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + param_3;
    if (param_3 < 0) {
      iVar1 = FUN_08007f8c(*(undefined4 *)(param_1 + 0x54));
      if (iVar1 < 1) goto LAB_080bf4c8;
    }
    else {
      iVar1 = FUN_08007db4(*(undefined4 *)(param_1 + 0x54));
      if (-1 < iVar1) goto LAB_080bf4c8;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
  }
LAB_080bf4c8:
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x54) + param_2;
    *(int *)(param_1 + 0x54) = iVar1;
    if (param_2 < 0) {
      if (*(char *)(param_1 + 0xb4) == '\0') {
        iVar2 = *(int *)(param_1 + 0x58) + DAT_080bf4e8;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x58);
      }
      iVar1 = FUN_0800834c(iVar1,iVar2);
      if (iVar1 < 1) {
        return;
      }
    }
    else {
      if (*(char *)(param_1 + 0xb4) == '\0') {
        iVar2 = *(int *)(param_1 + 0x58) + DAT_080bf510;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x58);
      }
      iVar1 = FUN_0800816c(iVar1,iVar2);
      if (-1 < iVar1) {
        return;
      }
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
  }
  return;
}


