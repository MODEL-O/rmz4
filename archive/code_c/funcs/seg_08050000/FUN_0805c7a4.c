// undefined FUN_0805c7a4(void)
// entry 0x805c7a4


undefined4 FUN_0805c7a4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    FUN_08005784(param_1 + 0x74,*(undefined4 *)*DAT_0805c7e4);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


