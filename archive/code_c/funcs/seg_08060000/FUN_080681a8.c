// undefined FUN_080681a8(void)
// entry 0x80681a8


undefined4 FUN_080681a8(int param_1)

{
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0806821c);
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ((*(char *)(param_1 + 0xf) == '\0') && ('\x04' < *(char *)(param_1 + 0x71))) {
    local_20 = *(int *)(param_1 + 0x54) + DAT_08068220;
    local_1c = *(int *)(param_1 + 0x58) + DAT_08068224;
    FUN_0809cd78(param_1,&local_20,3,0);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = 0x1d;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


