// undefined FUN_080c9c98(void)
// entry 0x80c9c98


undefined4 FUN_080c9c98(int param_1)

{
  short sVar1;
  char *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 in_lr;
  
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080c9d10));
  if ((*(char *)(param_1 + 0x11) == '\0') && (pcVar2 = (char *)(param_1 + 0xc1), *pcVar2 == '\0')) {
    sVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if ((sVar1 != 0) && ((sVar1 != 0xf && (sVar1 != 0x2f)))) {
      *pcVar2 = '\x01';
      if (*(int *)(param_1 + 0x28) != 0) {
        FUN_080ca468(param_1);
      }
      uVar3 = FUN_080c9bc0(param_1 + 0x54,1,1,*(byte *)(param_1 + 10) >> 4 & 1);
      *(undefined4 *)(param_1 + 0x28) = uVar3;
      *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x58);
      *(undefined1 *)(param_1 + 0xd) = 2;
      *(undefined1 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (*(char *)(param_1 + 0xd) == '\x01') {
      if (*(char *)(param_1 + 0x12) == '\0') {
        *pcVar2 = -1;
        piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c9d38);
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
        return in_lr;
      }
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    }
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


