// undefined FUN_08053250(void)
// entry 0x8053250


undefined4 FUN_08053250(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    FUN_08006984(0x3f);
  }
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
     ((*(ushort *)(DAT_080532a8 + 8) & 8) == 0)) {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080532ac);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_0805388c(param_1);
    return in_lr;
  }
  iVar2 = *(int *)(param_1 + 200);
  if ((iVar2 != 0) && (1 < *(byte *)(iVar2 + 0xc))) {
    *(int *)(param_1 + 200) = 0;
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_080532e4:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_080532f6;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    uVar3 = FUN_0802adac(8,param_1,DAT_0805330c);
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
    goto LAB_080532e4;
  }
  iVar2 = FUN_0802b3e4();
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_080532f6:
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08053310));
  return in_lr;
}


