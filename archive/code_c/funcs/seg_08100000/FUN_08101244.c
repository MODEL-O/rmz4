// undefined FUN_08101244(void)
// entry 0x8101244


undefined4 FUN_08101244(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 9) == '<') && (*(char *)(param_1 + 0xb8) != '\x7f')) {
    *(char *)(param_1 + 0xb8) = '\x7f';
    if (*(char *)(param_1 + 0x11) == '\0') {
      FUN_0801cf00(param_1,*(byte *)(param_1 + 0x70) | 0x7f00);
    }
    else {
      FUN_0801cf00(param_1,CONCAT11(*(undefined1 *)(*(int *)(param_1 + 0x28) + 0x1e),
                                    *(undefined1 *)(*(int *)(param_1 + 0x28) + 0x70)));
    }
    FUN_0801cff0(param_1);
  }
  return in_lr;
}


