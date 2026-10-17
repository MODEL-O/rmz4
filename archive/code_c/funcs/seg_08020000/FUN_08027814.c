// undefined FUN_08027814(void)
// entry 0x8027814


undefined4 FUN_08027814(uint param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 in_lr;
  
  param_1 = param_1 & 0xff;
  piVar2 = (int *)(param_1 * 0x10 + DAT_08027878);
  iVar4 = *piVar2;
  if (iVar4 != 0) {
    if ((*(short *)(DAT_08027878 + -0x20) != 0) && (param_1 == 0)) {
      *(undefined4 *)(DAT_0802787c + 8) = 0;
      iVar1 = DAT_08027880;
      puVar3 = (undefined4 *)(DAT_08027880 + DAT_08027884);
      FUN_0802b7cc(*puVar3);
      FUN_080382e4(*puVar3,iVar1 + DAT_08027888);
    }
    if (param_1 == 1) {
      *(undefined4 *)(DAT_0802787c + 0xc) = 0;
    }
    FUN_0801df34(iVar4);
    *piVar2 = 0;
  }
  return in_lr;
}


