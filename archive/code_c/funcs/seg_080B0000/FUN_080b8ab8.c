// undefined FUN_080b8ab8(void)
// entry 0x80b8ab8


undefined4 FUN_080b8ab8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080b8b1c);
    *DAT_080b8b20 = 0;
    *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3;
    *(undefined4 *)(param_1 + 0x60) = 0x280;
    *(int *)(param_1 + 100) = *(int *)(iVar1 + 0xb8) + DAT_080b8b24;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar1 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar1;
  if (*(int *)(param_1 + 100) <= iVar1) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 100);
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


