// undefined FUN_081009f8(void)
// entry 0x81009f8


undefined4 FUN_081009f8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 4) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
    if ((*(char *)(iVar1 + 8) == '\0') && (*(char *)(iVar1 + 9) == '\0')) {
      *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0xd) = 1;
    }
  }
  return in_lr;
}


