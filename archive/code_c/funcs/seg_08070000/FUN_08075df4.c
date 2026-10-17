// undefined FUN_08075df4(void)
// entry 0x8075df4


undefined4 FUN_08075df4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08075e40);
    *(undefined1 *)(param_1 + 0x12) = 0xc;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if ('\x02' < *(char *)(param_1 + 0x71)) {
      FUN_08005784(param_1 + 0x74,DAT_08075e44);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0xf) == '\x01') {
    if (*(char *)(param_1 + 0x73) == '\x04') {
      *(undefined1 *)(param_1 + 0xf) = 2;
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined1 *)(param_1 + 0xd) = 0xf;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


