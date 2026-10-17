// undefined FUN_080b3aec(void)
// entry 0x80b3aec


undefined4 FUN_080b3aec(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0x100;
    FUN_0801cf00(param_1,0xc700);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar2 = *(int *)(param_1 + 0x5c) * -0x100;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xff;
      }
      *(int *)(param_1 + 0x5c) = iVar2 >> 8;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    cVar1 = FUN_080b3eac(param_1);
    if (cVar1 != '\0') goto LAB_080b3b5a;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  cVar1 = FUN_080b3eac(param_1);
  if ((cVar1 == '\0') && (cVar1 = FUN_080b3edc(param_1), cVar1 == '\0')) {
    return in_lr;
  }
LAB_080b3b5a:
  *(undefined1 *)(param_1 + 0xd) = 3;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return in_lr;
}


