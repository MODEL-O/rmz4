// undefined FUN_08053c84(void)
// entry 0x8053c84


undefined4 FUN_08053c84(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    FUN_08006984(0x3c);
  }
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
     ((*(ushort *)(DAT_08053cdc + 8) & 8) == 0)) {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08053ce0);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_08054cb8(param_1);
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_08053d04:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_08053d16;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    uVar2 = FUN_0802adac(9,param_1,DAT_08053d38);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    goto LAB_08053d04;
  }
  iVar3 = FUN_0802b3e4();
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_08053d16:
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08053d3c));
  FUN_0805524c(param_1);
  FUN_0805526c(param_1);
  return in_lr;
}


