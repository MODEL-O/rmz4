// undefined FUN_080c9f84(void)
// entry 0x80c9f84


undefined4 FUN_080c9f84(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined1 *)(param_1 + 0x13) = 4;
    if (((*(char *)(param_1 + 0xb4) == '\x01') && (*(char *)(param_1 + 0x11) != '\x03')) &&
       (*(int *)(param_1 + 0x2c) != 0)) {
      *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0xd) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0xe) = 0;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x13) == '\0') {
    if ((*(char *)(param_1 + 0x11) == '\x03') || (iVar1 = *(int *)(param_1 + 0x2c), iVar1 == 0)) {
      if (*(int *)(param_1 + 0x28) != 0) {
        FUN_080ca468(param_1);
      }
    }
    else {
      if (*(char *)(param_1 + 0x11) == '\0') {
        *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\f';
      }
      *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) | 1;
      *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0xb5) = 1;
      if (*(int *)(param_1 + 0x28) != 0) {
        *(int *)(*(int *)(param_1 + 0x2c) + 0x28) = *(int *)(param_1 + 0x28);
        *(undefined4 *)(param_1 + 0x28) = 0;
      }
    }
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  else if (*(char *)(param_1 + 0xb5) == '\x01') {
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
    FUN_080ca024(param_1);
  }
  return in_lr;
}


