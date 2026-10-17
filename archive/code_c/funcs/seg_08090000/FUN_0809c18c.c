// undefined FUN_0809c18c(void)
// entry 0x809c18c


undefined4 FUN_0809c18c(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,*(undefined4 *)*DAT_0809c1d4);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined1 *)(param_1 + 0xb4) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0xb4);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar1 + 0xb8);
  return in_lr;
}


