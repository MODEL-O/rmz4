// undefined FUN_08032e48(void)
// entry 0x8032e48


undefined4 FUN_08032e48(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + DAT_08032e64) == '\x02') {
    FUN_0801cfc8(param_1,DAT_08032e68,2,1);
  }
  else if (*(char *)(param_1 + 0xfc) == '\0') {
    FUN_0801cf00(param_1,0x200);
  }
  else {
    FUN_0801cfc8(param_1,DAT_08032ed4,2,1);
  }
  if (*(int *)(param_1 + 0x108) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x108) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  *(undefined1 *)(param_1 + 0x100) = 0;
  *(undefined1 *)(param_1 + DAT_08032ed8) = 0xff;
  *(undefined1 *)(param_1 + 0x14e) = 0xff;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0xe) = 1;
  FUN_08032edc(param_1);
  return in_lr;
}


