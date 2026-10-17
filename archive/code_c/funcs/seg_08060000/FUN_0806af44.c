// undefined FUN_0806af44(void)
// entry 0x806af44


undefined4 FUN_0806af44(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
     ((*(ushort *)(DAT_0806af88 + 8) & 8) == 0)) {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0806af8c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_0806b028(param_1);
    return in_lr;
  }
  if (*(int *)(param_1 + 0xc0) == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
      uVar2 = FUN_0802adac(0x13,param_1,DAT_0806b01c);
      *(undefined4 *)(param_1 + 0xc0) = uVar2;
      if (((*(byte *)(param_1 + 0x97) & 0xf0) == 0x20) && (*(byte *)(param_1 + 0xd) < 0x16)) {
        *(undefined1 *)(param_1 + 0xd) = 0x22;
        *(undefined1 *)(param_1 + 0xe) = 0;
      }
    }
    if (*(int *)(param_1 + 0xc0) == 0) goto LAB_0806afe2;
  }
  iVar3 = FUN_0802b3e4(*(undefined4 *)(param_1 + 0xc0));
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
LAB_0806afe2:
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0806b020));
  if (1 < *(byte *)(param_1 + 0xd)) {
    iVar3 = *(int *)(param_1 + 200) + 0x1000;
    if (*(int *)(param_1 + 0x54) < iVar3) {
      *(int *)(param_1 + 0x54) = iVar3;
    }
    iVar3 = *(int *)(param_1 + 0xcc) + DAT_0806b024;
    if (iVar3 < *(int *)(param_1 + 0x54)) {
      *(int *)(param_1 + 0x54) = iVar3;
    }
  }
  return in_lr;
}


