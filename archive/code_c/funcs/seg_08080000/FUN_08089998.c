// undefined FUN_08089998(void)
// entry 0x8089998


undefined4 FUN_08089998(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080899ec);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar1 = FUN_0802b3e4(*(undefined4 *)(param_1 + 0xbc));
  if (iVar1 != 0) {
    FUN_08005784(param_1 + 0x74,
                 (uint)*(byte *)((uint)*(byte *)(param_1 + 0xc0) + DAT_080899f0) * 0x18 +
                 DAT_080899f4);
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


