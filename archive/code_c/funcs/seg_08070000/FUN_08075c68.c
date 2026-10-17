// undefined FUN_08075c68(void)
// entry 0x8075c68


undefined4 FUN_08075c68(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08075cd0);
    FUN_08002b10(0xd8);
    FUN_08005784(param_1 + 0x74,DAT_08075cd4);
    *(undefined2 *)(param_1 + 0xd4) = 0x80;
    *(undefined1 *)(param_1 + 0x12) = 0x14;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (('\x03' < *(char *)(param_1 + 0x71)) &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == -1)) {
      *(undefined1 *)(param_1 + 0xf) = 1;
    }
  }
  else if (*(char *)(param_1 + 0xf) == '\x01') {
    sVar2 = FUN_08129198(*(undefined2 *)(param_1 + 0xd4),6);
    if (sVar2 == 0) {
      FUN_08002b10(0x13c);
      FUN_080cbf7c(param_1,1,*(byte *)(param_1 + 10) >> 4 & 1);
    }
    iVar3 = *(ushort *)(param_1 + 0xd4) - 1;
    *(short *)(param_1 + 0xd4) = (short)iVar3;
    if (iVar3 * 0x10000 - DAT_08075d20 == 0) {
      *(undefined1 *)(param_1 + 0xd) = 0xc;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


