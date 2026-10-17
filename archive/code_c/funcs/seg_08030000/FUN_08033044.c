// undefined FUN_08033044(void)
// entry 0x8033044


undefined4 FUN_08033044(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(int *)(DAT_08033080 + 0x628) != 0) &&
     (iVar1 = *(int *)(*(int *)(DAT_08033080 + 0x628) + 0x2c), iVar1 != 0)) {
    if (*(int *)(param_1 + 0x54) < *(int *)(iVar1 + 0x54)) {
      *(undefined1 *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      *(undefined1 *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*DAT_080330c0 == '\0') {
      FUN_0801cf00(param_1,DAT_080330c4);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(undefined1 *)(param_1 + 0x174) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  return in_lr;
}


