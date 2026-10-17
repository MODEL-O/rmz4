// undefined FUN_080686d8(void)
// entry 0x80686d8


undefined4 FUN_080686d8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08068704);
    FUN_08002b5c(0x61);
    *(undefined2 *)(param_1 + 0xe0) = 0;
    FUN_08002b10(0x67);
    *(undefined1 *)(param_1 + 0x12) = 0x20;
  }
  else {
    if ((*(char *)(param_1 + 0xe) != '\x01') ||
       ((*(char *)(param_1 + 0x71) != '\x03' && ('\x01' < *(char *)(param_1 + 0x72)))))
    goto LAB_0806873a;
    FUN_080c8830(param_1,4,0,0);
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0806873a:
  FUN_0801cff0(param_1);
  if ((*(char *)(param_1 + 0x73) == '\x03') &&
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == -1)) {
    *(undefined1 *)(param_1 + 0xd) = 0x27;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


