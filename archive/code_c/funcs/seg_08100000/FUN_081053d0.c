// undefined FUN_081053d0(void)
// entry 0x81053d0


undefined4 FUN_081053d0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (*(char *)(iVar1 + 0xb4) == '\0') {
    *(char *)(iVar1 + 0xb4) = '\x01';
  }
  if ((*(char *)(iVar1 + 0x11) == '\x04') && ((*(uint *)(iVar1 + 0x8c) & 0x200) != 0)) {
    FUN_080d0c88(1,iVar1 + 0x54);
    iVar1 = *(int *)(iVar1 + 0x28) + DAT_08105414;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 8;
  }
  return in_lr;
}


