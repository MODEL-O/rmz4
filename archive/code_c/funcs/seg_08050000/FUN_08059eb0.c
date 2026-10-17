// undefined FUN_08059eb0(void)
// entry 0x8059eb0


undefined4 FUN_08059eb0(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_08059f44);
    if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != DAT_08059f48) {
      FUN_0801cf00(param_1);
      *(undefined1 *)(param_1 + 0xbd) = 1;
    }
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  if (((*(ushort *)(DAT_08059f4c + 8) & 8) == 0) &&
     (((*(int *)(param_1 + 200) == 0 ||
       ((((cVar1 = *(char *)(param_1 + 0xbf), 1 < (byte)(cVar1 - 1U) && (cVar1 != '\x04')) &&
         (cVar1 != '\x05')) && (cVar1 != '\x03')))) && (*(char *)(param_1 + 0x12) == '\0')))) {
    FUN_0805bf8c(param_1);
  }
  return in_lr;
}


