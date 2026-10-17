// undefined FUN_080b316c(void)
// entry 0x80b316c


undefined4 FUN_080b316c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xd) != '\x05') && (*(char *)(param_1 + 0xd) != '\x03')) {
    if (*(char *)(param_1 + 0xb7) == '\0') {
      if (*(char *)(param_1 + 0xb4) == '\0') {
        iVar1 = *(int *)(param_1 + 0xb8);
        iVar2 = 0x1600;
      }
      else {
        iVar1 = *(int *)(param_1 + 0xb8);
        iVar2 = DAT_080b31d0;
      }
      *(int *)(param_1 + 0xc0) = iVar1 + iVar2;
      *(char *)(param_1 + 0xb7) = '\x01';
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined1 *)(param_1 + 0xb6) = 1;
    *(undefined4 *)(param_1 + 0x28) = param_2;
  }
  return in_lr;
}


