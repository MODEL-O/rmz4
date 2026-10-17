// undefined FUN_080ca2ec(void)
// entry 0x80ca2ec


undefined4 FUN_080ca2ec(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb4) == '\0') {
    if ((*(char *)(param_1 + 0xb7) == '\0') && (*(char *)(param_1 + 0x11) == '\x03')) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + DAT_080ca328;
    }
    if (*(char *)(param_1 + 0xb7) == '\x01') {
      if (*(char *)(param_1 + 0x11) == '\0') {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + DAT_080ca328;
      }
      else if (*(char *)(param_1 + 0x11) == '\x03') {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x100;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0xb6) == '\x01') {
      if (*(char *)(param_1 + 0x11) == '\0') {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + DAT_080ca360;
      }
      if (*(char *)(param_1 + 0x11) != '\x03') {
        return in_lr;
      }
      iVar1 = *(int *)(param_1 + 0x58);
      iVar2 = 0x200;
    }
    else {
      if (*(char *)(param_1 + 0x11) == '\0') {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x100;
      }
      if (*(char *)(param_1 + 0x11) != '\x03') {
        return in_lr;
      }
      iVar1 = *(int *)(param_1 + 0x58);
      iVar2 = DAT_080ca384;
    }
    *(int *)(param_1 + 0x58) = iVar1 + iVar2;
  }
  return in_lr;
}


