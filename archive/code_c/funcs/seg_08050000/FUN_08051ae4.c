// undefined FUN_08051ae4(void)
// entry 0x8051ae4


undefined4 FUN_08051ae4(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08051b08);
    if (*(short *)(param_1 + 0xa4) < 0x21) {
      if (*(short *)(param_1 + 0xa4) < 0x11) {
        uVar1 = 0x28;
      }
      else {
        uVar1 = 0x32;
      }
    }
    else {
      uVar1 = 0x40;
    }
    *(undefined1 *)(param_1 + 0x12) = uVar1;
    FUN_08002b10(0xe7);
    uVar3 = DAT_08051b88 * *DAT_08051b84 + DAT_08051b8c;
    *DAT_08051b84 = uVar3 & 0x7fffffff;
    FUN_08090dac(param_1,(uVar3 & 0x7fffffff) >> 0x10 & 3);
    *(char *)(param_1 + 0xd6) = *(char *)(param_1 + 0xd6) + -1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    if ((*(char *)(param_1 + 0xd6) == '\0') || (5 < *(byte *)(param_1 + 0xd5))) {
      *(undefined1 *)(param_1 + 0xd) = 0xf;
    }
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


