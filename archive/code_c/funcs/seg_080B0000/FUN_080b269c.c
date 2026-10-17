// undefined FUN_080b269c(void)
// entry 0x80b269c


undefined4 FUN_080b269c(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,*(byte *)(param_1 + 0xb5) | 0xc500);
    *(undefined4 *)(param_1 + 0x5c) = 0x2c0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffd40;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(byte *)(param_1 + 0x11) < 2) && (cVar1 = FUN_080b2d70(param_1), cVar1 != '\0')) {
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xf) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    uVar2 = 0x20;
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    cVar1 = FUN_080b2cd4(param_1);
    if ((cVar1 == '\0') && (cVar1 = FUN_080b2b94(param_1), cVar1 == '\0')) {
      return in_lr;
    }
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xf) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    uVar2 = 0x18;
  }
  *(undefined1 *)(param_1 + 0x12) = uVar2;
  return in_lr;
}


