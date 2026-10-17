// undefined FUN_08059120(void)
// entry 0x8059120


undefined4 FUN_08059120(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_080591c4);
    iVar2 = FUN_0805977c(param_1);
    *(uint *)(param_1 + 0x5c) =
         (uint)*(ushort *)(iVar2 * 2 + DAT_080591c8) * ((bVar1 >> 4 & 1) * 2 + -1);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                                         *(undefined1 *)(param_1 + 0x70)) +
                                         DAT_080591d0) * 4 + DAT_080591cc)) * 0x18 + DAT_080591d4);
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  if ((uint)((iVar2 - *(int *)(param_1 + 0xcc)) + DAT_080591d8) < 0x19001) {
    FUN_08059548(param_1);
  }
  return in_lr;
}


