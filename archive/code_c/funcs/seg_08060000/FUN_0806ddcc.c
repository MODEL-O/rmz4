// undefined FUN_0806ddcc(void)
// entry 0x806ddcc


undefined4 FUN_0806ddcc(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x16a);
    FUN_08005784(param_1 + 0x74,DAT_0806de14);
    FUN_0801cf00(param_1,DAT_0806de18);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  bVar1 = *(byte *)(DAT_0806de1c + 0x12);
  if ((bVar1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xe) = 3;
    *(byte *)(param_1 + 0xf) = bVar1 & 1;
  }
  return in_lr;
}


