// undefined FUN_080b508c(void)
// entry 0x80b508c


undefined4 FUN_080b508c(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,*DAT_080b5118);
    *(undefined1 *)(param_1 + 0x12) = 0x14;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(char *)(param_1 + 0xe) == '\x01') && (cVar1 = FUN_080b56a8(param_1), cVar1 != '\0')) {
    FUN_08005784(param_1 + 0x74,DAT_080b511c);
    FUN_0801cf00(param_1,DAT_080b5118[*(byte *)(param_1 + 0xe)]);
    FUN_08002b10(DAT_080b5120);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (*(char *)(param_1 + 0xe) == '\x02') {
      FUN_08005784(param_1 + 0x74,DAT_080b5124);
      FUN_0801cf00(param_1,DAT_080b5118[*(byte *)(param_1 + 0xe)]);
      cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    }
    else {
      cVar1 = '\0';
      *(undefined1 *)(param_1 + 0xd) = 0;
    }
    *(char *)(param_1 + 0xe) = cVar1;
  }
  return in_lr;
}


