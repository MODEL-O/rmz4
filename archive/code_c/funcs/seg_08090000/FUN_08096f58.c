// undefined FUN_08096f58(void)
// entry 0x8096f58


undefined4 FUN_08096f58(int param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_08097074(param_1);
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
    *(undefined1 *)(param_1 + 0xbf) = 1;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08096f9c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_08097220(param_1);
    return in_lr;
  }
  piVar2 = (int *)(param_1 + 0xc0);
  if (*piVar2 == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
      iVar3 = FUN_0802adac(0,param_1,DAT_0809700c);
      *piVar2 = iVar3;
      if (iVar3 == 0) goto LAB_08097022;
      FUN_08005784(param_1 + 0x74,DAT_08097010);
    }
    if (*piVar2 == 0) goto LAB_08097022;
  }
  iVar3 = FUN_0802b3e4(*piVar2);
  if (iVar3 == 0) {
    sVar1 = CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70));
    FUN_0801cfc8(param_1,sVar1,(short)*(char *)(param_1 + 0x71),sVar1 + 1);
    FUN_0801cff0(param_1);
    return in_lr;
  }
  FUN_08005784(param_1 + 0x74,DAT_08097068);
  *piVar2 = 0;
LAB_08097022:
  if (((*(char *)(param_1 + 0xd) != '\x02') && (*(char *)(param_1 + 0xd) != '\x05')) &&
     ((bool)(*(byte *)(param_1 + 10) >> 4 & 1) !=
      *(int *)(param_1 + 0x54) < *(int *)(*DAT_0809706c + 0x54))) {
    *(undefined1 *)(param_1 + 0xd) = 5;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08097070));
  return in_lr;
}


