// undefined FUN_08036204(void)
// entry 0x8036204


undefined4 FUN_08036204(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x102) == '\0') {
    FUN_0801cf00(param_1,0x1b00);
    if (*(char *)(param_1 + 0xc2) == '\x01') {
      FUN_0803c464(param_1,0x17);
    }
    else {
      FUN_0803c464(param_1,0x16);
    }
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 3;
    if (*(int *)(param_1 + 0x60) <= DAT_0803625c) {
      *(int *)(param_1 + 0x60) = DAT_0803625c + 1;
    }
    *(char *)(param_1 + 0x102) = *(char *)(param_1 + 0x102) + '\x01';
  }
  else {
    FUN_0803a3b0(param_1,0x1b00);
  }
  return in_lr;
}


