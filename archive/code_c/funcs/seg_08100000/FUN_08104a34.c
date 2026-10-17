// undefined FUN_08104a34(void)
// entry 0x8104a34


undefined4 FUN_08104a34(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x14) & 1) != 0) &&
      (iVar1 = *(int *)(param_1 + 0x2c), *(char *)(iVar1 + 0x12) == '\0')) &&
     (*(char *)(iVar1 + 0xb5) == '\x01')) {
    *(undefined1 *)(*DAT_08104a74 + 0x166) = 0x30;
    *(undefined1 *)(iVar1 + 0x12) = 0x3c;
    *(undefined1 *)(iVar1 + 0xb6) = 1;
  }
  return in_lr;
}


