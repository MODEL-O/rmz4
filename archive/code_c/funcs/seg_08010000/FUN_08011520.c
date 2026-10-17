// undefined FUN_08011520(void)
// entry 0x8011520


undefined4 FUN_08011520(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*(byte *)(DAT_0801154c + DAT_08011550) & 0xf) == 3) {
    if (*(char *)(DAT_0801154c + DAT_08011554) == '\a') {
      iVar1 = *(int *)(param_1 + 0x4c) + 2;
    }
    else if (*(char *)(DAT_0801154c + DAT_08011554) == '\v') {
      iVar1 = *(int *)(param_1 + 0x4c) + -2;
    }
    else {
      iVar1 = 0;
    }
    *(int *)(param_1 + 0x4c) = iVar1;
    iVar3 = *(int *)(param_1 + 0x50) + -2;
    *(int *)(param_1 + 0x50) = iVar3;
    iVar1 = DAT_08011598;
    iVar2 = ((*(uint *)(param_1 + 0x5c) & 0xffff) >> 4) * 4;
    *(short *)(iVar2 + DAT_08011598) =
         (short)*(undefined4 *)(param_1 + 0x4c) +
         (short)((uint)(*(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x34)) >> 8);
    *(short *)(iVar2 + iVar1 + 2) =
         (short)iVar3 + (short)((uint)(*(int *)(param_1 + 0x38) * *(int *)(param_1 + 0x48)) >> 8);
  }
  return in_lr;
}


