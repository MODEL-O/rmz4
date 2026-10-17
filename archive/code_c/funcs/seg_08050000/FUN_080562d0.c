// undefined FUN_080562d0(void)
// entry 0x80562d0


undefined4 FUN_080562d0(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  piVar2 = DAT_080563d0;
  bVar1 = *(byte *)(param_1 + 10);
  iVar4 = *DAT_080563d0;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0xfb);
    FUN_0801cf00(param_1,DAT_080563d4);
    iVar3 = *piVar2;
    *(int *)(param_1 + 100) = *(int *)(iVar3 + 0x54) - *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x68) = *(int *)(iVar3 + 0x58) - *(int *)(param_1 + 0x58);
    *(undefined1 *)(param_1 + 0x12) = 0xe;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  if ((iVar4 != 0) && ((*(uint *)(param_1 + 0x8c) & 0x800) != 0)) {
    *(undefined1 *)(iVar4 + DAT_080563d8) = 1;
    *(undefined1 *)(iVar4 + 0x172) = 0;
    *(undefined4 *)(iVar4 + 0x60) = 0;
    *(int *)(iVar4 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 100);
    *(int *)(iVar4 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x68);
    if (*(char *)(param_1 + 0x12) == '\x01') {
      FUN_08005784(param_1 + 0x74,DAT_080563dc);
    }
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (*(char *)(param_1 + 0x12) == '\0') {
      if (iVar4 != 0) {
        *(byte *)(iVar4 + 0x142) = *(byte *)(iVar4 + 0x142) | 0x40;
        *(undefined1 *)(iVar4 + 0xd) = 4;
        *(undefined1 *)(iVar4 + 0xe) = 0;
        *(uint *)(iVar4 + 0x128) = ((bVar1 >> 4 & 1) * -2 + 1) * 0x380;
        *(undefined4 *)(iVar4 + 300) = DAT_080563e0;
        *(undefined4 *)(iVar4 + 0x130) = 0;
        *(undefined4 *)(iVar4 + 0x134) = 0x40;
        *(undefined2 *)(iVar4 + 0x138) = 0x10;
      }
      *(undefined1 *)(param_1 + 0xe) = 7;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}


