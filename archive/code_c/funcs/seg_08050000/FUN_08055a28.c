// undefined FUN_08055a28(void)
// entry 0x8055a28


undefined4 FUN_08055a28(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0xf8);
    FUN_0801cf00(param_1,DAT_08055ac8);
    iVar1 = FUN_0805977c(param_1);
    *(uint *)(param_1 + 0x5c) = (uint)*(ushort *)(iVar1 * 2 + DAT_08055acc) * (uVar2 * 2 + -1);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                                         *(undefined1 *)(param_1 + 0x70)) +
                                         DAT_08055ad4) * 4 + DAT_08055ad0)) * 0x18 + DAT_08055ad8);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar1 = FUN_080597ac(param_1);
  if (iVar1 == 0) {
    if ((*(int *)(*DAT_08055b08 + 0x54) - (*(int *)(param_1 + 0x54) + (uVar2 * 2 + -1) * 0x2000)) +
        0x2000 < 0x4001) {
      FUN_08059548(param_1);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


