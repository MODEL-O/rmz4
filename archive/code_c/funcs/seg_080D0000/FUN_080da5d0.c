// undefined FUN_080da5d0(void)
// entry 0x80da5d0


undefined4 FUN_080da5d0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_080da620;
  iVar3 = (*(int *)(param_1 + 0x54) + DAT_080da624) - *(int *)(DAT_080da620 + 0x2c);
  *(int *)(param_1 + 0x54) = iVar3;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - *(int *)(iVar1 + 0x30);
  if (0x4000 < *(int *)(DAT_080da628 + 0x38) - (iVar3 + 0x7800)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080da62c);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  }
  return in_lr;
}


