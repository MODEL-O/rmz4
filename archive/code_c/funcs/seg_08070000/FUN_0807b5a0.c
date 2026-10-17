// undefined FUN_0807b5a0(void)
// entry 0x807b5a0


undefined4 FUN_0807b5a0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    FUN_08006984(0x43);
  }
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
     ((*(ushort *)(DAT_0807b5f8 + 8) & 8) == 0)) {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0807b5fc);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_0807e744(param_1);
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_0807b620:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_0807b632;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    uVar2 = FUN_0802adac(0x1c,param_1,DAT_0807b648);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    goto LAB_0807b620;
  }
  iVar3 = FUN_0802b3e4();
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_0807b632:
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0807b64c));
  return in_lr;
}


