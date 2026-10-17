// undefined FUN_080e63d4(void)
// entry 0x80e63d4


undefined4 FUN_080e63d4(int param_1)

{
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    FUN_080e6270(param_1 + 0x54,1,*(byte *)(param_1 + 10) >> 4 & 1);
    local_18 = *(undefined4 *)(param_1 + 0x54);
    local_14 = *(int *)(param_1 + 0x58) + DAT_080e6430;
    FUN_080d0dc4(0,&local_18,0x200,*(byte *)(param_1 + 10) >> 4 & 1);
    local_14 = *(int *)(param_1 + 0x58) + DAT_080e6434;
    FUN_080d0c88(2,&local_18);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0x14;
    *(undefined1 *)(param_1 + 0x25) = 0x18;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0xf;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      *(undefined4 *)(param_1 + 100) = 0xfffffff1;
    }
    *(undefined1 *)(param_1 + 0x12) = 0xff;
  }
  FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x11) * 2 + DAT_080e647c));
  *(undefined1 *)(param_1 + 0xd) = 0;
  return in_lr;
}


