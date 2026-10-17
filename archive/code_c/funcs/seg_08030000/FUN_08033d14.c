// undefined FUN_08033d14(void)
// entry 0x8033d14


undefined4 FUN_08033d14(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(param_1 + 0x102);
  if (*pcVar1 == '\0') {
    FUN_0801cf00(param_1,0x1200);
  }
  else {
    FUN_0803a3b0(param_1,0x1200);
    if ((*pcVar1 != '\x01') || ('\x01' < *(char *)(param_1 + 0x72))) goto LAB_08033d5c;
    FUN_0803c464(param_1,0xf);
  }
  *pcVar1 = *pcVar1 + '\x01';
LAB_08033d5c:
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 5;
    *(undefined1 *)(param_1 + DAT_08033d88) = 5;
    *(undefined1 *)(param_1 + 0x102) = 0;
  }
  return in_lr;
}


