// undefined FUN_080e7350(void)
// entry 0x80e7350


undefined4 FUN_080e7350(int param_1)

{
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    local_14 = *(undefined4 *)(param_1 + 0x54);
    local_10 = *(int *)(param_1 + 0x58) + DAT_080e739c;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    FUN_080d0dc4(0,&local_14,0x200,*(byte *)(param_1 + 10) >> 4 & 1);
    FUN_080e70d4(param_1 + 0x54,1,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined1 *)(param_1 + 0x25) = 0x18;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = DAT_080e73cc;
  }
  *(undefined4 *)(param_1 + 0x68) = 0x40;
  *(undefined4 *)(param_1 + 100) = 0;
  FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x11) * 2 + DAT_080e73d0));
  *(undefined1 *)(param_1 + 0xd) = 0;
  return in_lr;
}


