// undefined FUN_080b1958(void)
// entry 0x80b1958


undefined4 FUN_080b1958(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080b19c4);
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(char *)(param_1 + 0xe) == '\x01') && (*(char *)(param_1 + 0x71) == '\x03')) {
    FUN_08005784(param_1 + 0x74,DAT_080b19c8);
  }
  cVar1 = FUN_080b1a8c(param_1);
  if (cVar1 == '\0') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0xe);
  if (cVar1 == '\x01') {
    FUN_080ce700(param_1 + 0x54,*(undefined1 *)(param_1 + 0x10),*(byte *)(param_1 + 10) >> 4 & 1);
    FUN_08002b10(0x2d);
    uVar2 = DAT_080b19cc;
LAB_080b19e0:
    FUN_0801cf00(param_1,uVar2);
  }
  else {
    if (cVar1 != '\x02') {
      uVar2 = DAT_080b19e8;
      if (cVar1 != '\x03') {
        cVar1 = '\0';
        *(undefined1 *)(param_1 + 0xd) = 0;
        goto LAB_080b19f6;
      }
      goto LAB_080b19e0;
    }
    *(undefined1 *)(param_1 + 0x12) = 0x3c;
  }
  cVar1 = *(char *)(param_1 + 0xe) + '\x01';
LAB_080b19f6:
  *(char *)(param_1 + 0xe) = cVar1;
  return in_lr;
}


