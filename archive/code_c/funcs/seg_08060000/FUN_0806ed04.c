// undefined FUN_0806ed04(void)
// entry 0x806ed04


undefined4 FUN_0806ed04(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_0806ed48);
    FUN_0801cf00(param_1,0xad00);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ((*(ushort *)(DAT_0806ed4c + 8) & 8) == 0) {
    FUN_0806f124(param_1);
  }
  return in_lr;
}


