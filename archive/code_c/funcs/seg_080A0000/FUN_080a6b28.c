// undefined FUN_080a6b28(void)
// entry 0x80a6b28


undefined4 FUN_080a6b28(int param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_080a6c4c(param_1);
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
    *(undefined1 *)(param_1 + 0xb8) = 1;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a6b6c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_080a6df8(param_1);
    return in_lr;
  }
  piVar2 = (int *)(param_1 + 0xc0);
  if (*piVar2 == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
      iVar3 = FUN_0802adac(0,param_1,DAT_080a6bdc);
      *piVar2 = iVar3;
      if (iVar3 == 0) goto LAB_080a6bf2;
      FUN_08005784(param_1 + 0x74,DAT_080a6be0);
    }
    if (*piVar2 == 0) goto LAB_080a6bf2;
  }
  iVar3 = FUN_0802b3e4(*piVar2);
  if (iVar3 == 0) {
    sVar1 = CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70));
    FUN_0801cfc8(param_1,sVar1,(short)*(char *)(param_1 + 0x71),sVar1 + 1);
    FUN_0801cff0(param_1);
    return in_lr;
  }
  FUN_08005784(param_1 + 0x74,DAT_080a6c40);
  *piVar2 = 0;
LAB_080a6bf2:
  if (((*(char *)(param_1 + 0xd) != '\x02') && (*(char *)(param_1 + 0xd) != '\x05')) &&
     ((bool)(*(byte *)(param_1 + 10) >> 4 & 1) !=
      *(int *)(param_1 + 0x54) < *(int *)(*DAT_080a6c44 + 0x54))) {
    *(undefined1 *)(param_1 + 0xd) = 5;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080a6c48));
  *(undefined1 *)(param_1 + 0xbf) = 0;
  return in_lr;
}


