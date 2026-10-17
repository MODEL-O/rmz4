// undefined FUN_080554b4(void)
// entry 0x80554b4


undefined4 FUN_080554b4(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_08055534);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                                         *(undefined1 *)(param_1 + 0x70)) +
                                         DAT_0805553c) * 4 + DAT_08055538)) * 0x18 + DAT_08055540);
  bVar1 = (byte)*(ushort *)(DAT_08055544 + 8) & 8;
  if ((*(ushort *)(DAT_08055544 + 8) & 8) == 0) {
    iVar2 = FUN_080597ac(param_1);
    if (iVar2 == 0) {
      FUN_08059548(param_1);
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 4;
      *(byte *)(param_1 + 0xe) = bVar1;
      *(byte *)(param_1 + 0xf) = bVar1;
    }
  }
  return in_lr;
}


