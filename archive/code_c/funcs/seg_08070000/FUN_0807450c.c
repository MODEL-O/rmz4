// undefined FUN_0807450c(void)
// entry 0x807450c


undefined4 FUN_0807450c(int param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != -0x6d00) {
      FUN_0801cf00(param_1);
    }
    *(undefined2 *)(param_1 + 200) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  FUN_0801cff0(param_1);
  pbVar1 = (byte *)(param_1 + 0xe0);
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0xb8) + *(short *)((uint)*pbVar1 * 2 + DAT_08074584) * 4;
  *pbVar1 = *pbVar1 + 1;
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


