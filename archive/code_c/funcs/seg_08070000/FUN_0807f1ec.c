// undefined FUN_0807f1ec(void)
// entry 0x807f1ec


undefined4 FUN_0807f1ec(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != -0x3800) {
      FUN_0801cf00(param_1);
    }
    *(undefined1 *)(param_1 + 0x12) = 4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  bVar1 = *(byte *)(DAT_0807f240 + 0x12);
  if ((bVar1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined1 *)(param_1 + 0xd7) = 4;
    *(byte *)(param_1 + 0xe) = bVar1 & 1;
  }
  return in_lr;
}


