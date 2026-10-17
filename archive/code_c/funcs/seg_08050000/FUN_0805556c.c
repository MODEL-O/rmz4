// undefined FUN_0805556c(void)
// entry 0x805556c


undefined4 FUN_0805556c(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_0805562c);
    iVar1 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0xbc));
    *(int *)(param_1 + 0xbc) = iVar1;
    *(int *)(param_1 + 0x58) =
         iVar1 + *(short *)((uint)*(byte *)(param_1 + 0xb5) * 2 + DAT_08055630) * 2;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                                         *(undefined1 *)(param_1 + 0x70)) +
                                         DAT_08055638) * 4 + DAT_08055634)) * 0x18 + DAT_0805563c);
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
    iVar1 = FUN_08059be8(param_1);
    *(int *)(param_1 + 0xcc) = iVar1;
    iVar1 = FUN_08008534(iVar1 + 0xf000,*(int *)(param_1 + 0x58) + DAT_08055640);
    *(int *)(param_1 + 0xb8) = iVar1 + DAT_08055644;
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


