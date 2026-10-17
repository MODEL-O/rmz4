// undefined FUN_08067de8(void)
// entry 0x8067de8


undefined4 FUN_08067de8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) == DAT_08067e10) {
      FUN_0801cf00(param_1,DAT_08067e10 + 1);
      goto LAB_08067e50;
    }
    FUN_0801cf00(param_1,DAT_08067e2c);
    FUN_08005784(param_1 + 0x74,DAT_08067e30);
    cVar1 = *(char *)(param_1 + 0xe) + '\x02';
  }
  else {
    if ((*(char *)(param_1 + 0xe) != '\x01') || (*(char *)(param_1 + 0x71) < '\x02'))
    goto LAB_08067e56;
    FUN_08005784(param_1 + 0x74,DAT_08067e74);
LAB_08067e50:
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(char *)(param_1 + 0xe) = cVar1;
LAB_08067e56:
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


