// undefined FUN_08074eec(void)
// entry 0x8074eec


undefined4 FUN_08074eec(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
     ((*(ushort *)(DAT_08074f38 + 8) & 8) == 0)) {
    if ((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) +
        DAT_08074f3c < 2) {
      *(undefined1 *)(param_1 + 0xdf) = 1;
    }
    else {
      *(byte *)(param_1 + 0xdf) = (byte)*(ushort *)(DAT_08074f38 + 8) & 8;
    }
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08074f60);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_08075008(param_1);
    return in_lr;
  }
  iVar3 = *(int *)(param_1 + 0x2c);
  if (iVar3 == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
      uVar2 = FUN_0802adac(0x19,param_1,DAT_08074ff8);
      *(undefined4 *)(param_1 + 0x2c) = uVar2;
    }
    iVar3 = *(int *)(param_1 + 0x2c);
    if (iVar3 == 0) goto LAB_08074fac;
    if (*(char *)((uint)*(byte *)(param_1 + 0xd) + DAT_08074ffc) != '\0') {
      *(undefined1 *)(param_1 + 0xd) = 0x19;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  iVar3 = FUN_0802b3e4(iVar3);
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_08074fac:
  *(undefined1 *)(param_1 + 0xd9) = 0;
  FUN_080751f0(param_1);
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08075000));
  if (1 < *(byte *)(param_1 + 0xd)) {
    iVar3 = *(int *)(param_1 + 0xc4) + 0x1000;
    if (*(int *)(param_1 + 0x54) < iVar3) {
      *(int *)(param_1 + 0x54) = iVar3;
    }
    iVar3 = *(int *)(param_1 + 200) + DAT_08075004;
    if (iVar3 < *(int *)(param_1 + 0x54)) {
      *(int *)(param_1 + 0x54) = iVar3;
    }
  }
  return in_lr;
}


