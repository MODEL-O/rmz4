// undefined FUN_080ecb40(void)
// entry 0x80ecb40


undefined4 FUN_080ecb40(int param_1)

{
  undefined4 in_lr;
  byte abStack_10 [4];
  
  FUN_08129258(abStack_10,DAT_080ecba8,4);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_080ecbac);
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ((int)(uint)abStack_10[*(byte *)(param_1 + 0x12)] <= (int)*(char *)(param_1 + 0x71)) {
    FUN_08002b10(0x5b);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


