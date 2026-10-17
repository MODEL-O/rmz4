// undefined FUN_0804b304(void)
// entry 0x804b304


undefined4 FUN_0804b304(int param_1)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  FUN_0801cff0();
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar3 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  uVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if ((uVar1 & 0xf) != 0xf) {
    if ((uVar1 & 0x8000) != 0) {
      uVar1 = 0;
    }
    if (uVar1 != 0) goto LAB_0804b35c;
  }
  if ((*(uint *)(param_1 + 0x8c) & DAT_0804b37c) == 0) {
    return in_lr;
  }
LAB_0804b35c:
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804b380);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  FUN_0804b384(param_1);
  return in_lr;
}


