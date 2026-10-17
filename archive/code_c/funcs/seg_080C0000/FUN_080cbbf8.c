// undefined FUN_080cbbf8(void)
// entry 0x80cbbf8


undefined4 FUN_080cbbf8(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  byte abStack_10 [8];
  
  FUN_08129258(abStack_10,DAT_080cbc90,6);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(DAT_080cbc94);
    FUN_0801cf00(param_1,DAT_080cbc98);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,(uint)abStack_10[*(char *)(param_1 + 0x71)] * 0x18 + DAT_080cbc9c);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cbca0);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0xc);
  }
  return in_lr;
}


