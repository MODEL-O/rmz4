// undefined FUN_080ac7e4(void)
// entry 0x80ac7e4


undefined4 FUN_080ac7e4(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined1 *)(param_1 + 0xb8) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined1 *)(param_1 + 0xb4) = 1;
  return in_lr;
}


