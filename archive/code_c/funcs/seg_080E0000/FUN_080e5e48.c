// undefined FUN_080e5e48(void)
// entry 0x80e5e48


undefined4 FUN_080e5e48(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  undefined2 auStack_18 [2];
  undefined4 local_14;
  int local_10;
  
  FUN_08129258(auStack_18,DAT_080e5e9c,4);
  if (*(char *)(param_1 + 0x11) == '\0') {
    local_14 = *(undefined4 *)(param_1 + 0x54);
    local_10 = *(int *)(param_1 + 0x58) + 0x1c00;
    *(undefined4 *)(param_1 + 0x60) = 0;
    FUN_080d0dc4(0,&local_14,0x200,*(byte *)(param_1 + 10) >> 4 & 1);
    FUN_080e5d34(param_1 + 0x54,1,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined1 *)(param_1 + 0x25) = 0x18;
  }
  else {
    *(undefined1 *)(param_1 + 0x12) = 0x14;
    *(undefined4 *)(param_1 + 0x60) = 0;
    sVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar1 == 0) {
      *(undefined4 *)(param_1 + 0x60) = DAT_080e5ed4;
    }
  }
  FUN_0801cf00(param_1,auStack_18[*(byte *)(param_1 + 0x11)]);
  *(undefined1 *)(param_1 + 0xd) = 0;
  return in_lr;
}


