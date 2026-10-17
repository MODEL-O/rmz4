// undefined FUN_080c10c0(void)
// entry 0x80c10c0


undefined4 FUN_080c10c0(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080c1108);
    *(undefined1 *)(param_1 + 0xb4) = 1;
    FUN_0801cf00(param_1,DAT_080c110c);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ((*(char *)(param_1 + 0xb6) == '\0') && (*(byte *)(iVar2 + 0xc) < 2)) {
    if (*(char *)(param_1 + 0xb5) == '\0') {
      return in_lr;
    }
    uVar1 = 3;
  }
  else {
    uVar1 = 4;
  }
  *(undefined1 *)(param_1 + 0xd) = uVar1;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  return in_lr;
}


