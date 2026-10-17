// undefined FUN_080cfb78(void)
// entry 0x80cfb78


undefined4 FUN_080cfb78(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined4 *)(param_1 + 0xb8) = 0x60;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x54);
  *(int *)(param_1 + 0x58) = *(int *)(iVar1 + 0x58) + DAT_080cfbc0;
  iVar1 = *(int *)(param_1 + 0xb8) + -1;
  *(int *)(param_1 + 0xb8) = iVar1;
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


