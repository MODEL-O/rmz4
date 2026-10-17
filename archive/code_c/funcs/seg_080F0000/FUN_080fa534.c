// undefined FUN_080fa534(void)
// entry 0x80fa534


undefined4 FUN_080fa534(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080fa590);
    FUN_080caeb4(param_1 + 100,0,*(byte *)(param_1 + 10) >> 4 & 1);
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0x58) + 0x100;
    FUN_08002b10(DAT_080fa594);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


