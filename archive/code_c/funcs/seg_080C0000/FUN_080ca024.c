// undefined FUN_080ca024(void)
// entry 0x80ca024


undefined4 FUN_080ca024(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x5c) == 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  }
  if (((*(char *)(param_1 + 0x11) == '\0') && (*(char *)(param_1 + 0xb4) == '\0')) &&
     (cVar1 = FUN_080ca410(param_1), cVar1 != '\0')) {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    if (*(int *)(param_1 + 0x28) != 0) {
      FUN_080ca468(param_1);
    }
    uVar2 = FUN_080c9bc0(param_1 + 0x54,1,1,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined4 *)(param_1 + 0x28) = uVar2;
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x58);
  }
  return in_lr;
}


