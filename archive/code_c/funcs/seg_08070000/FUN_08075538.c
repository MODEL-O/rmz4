// undefined FUN_08075538(void)
// entry 0x8075538


undefined4 FUN_08075538(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08075580);
    pcVar4 = (char *)(param_1 + 0xde);
    *pcVar4 = '\0';
    if (*(short *)(param_1 + 0xa4) < 0x10) {
      uVar3 = *DAT_08075584 * DAT_08075588 + DAT_0807558c;
      *DAT_08075584 = uVar3 & 0x7fffffff;
      if (((uVar3 & 0x7fffffff) >> 0x10 & 0x1f) < 10) {
        *pcVar4 = '\x01';
      }
      uVar1 = 0x20;
    }
    else if (*(short *)(param_1 + 0xa4) < 0x20) {
      uVar3 = *DAT_080755b8 * DAT_080755bc + DAT_080755c0;
      *DAT_080755b8 = uVar3 & 0x7fffffff;
      if (((uVar3 & 0x7fffffff) >> 0x10 & 0x1f) < 0xc) {
        *pcVar4 = '\x01';
      }
      uVar1 = 0x1c;
    }
    else {
      uVar3 = *DAT_080755fc * DAT_08075600 + DAT_08075604;
      *DAT_080755fc = uVar3 & 0x7fffffff;
      if (((uVar3 & 0x7fffffff) >> 0x10 & 0x1f) < 0xe) {
        *pcVar4 = '\x01';
      }
      uVar1 = 0x18;
    }
    *(undefined1 *)(param_1 + 0x12) = uVar1;
    if (*pcVar4 == '\0') {
      FUN_08005784(param_1 + 0x74,DAT_08075640);
    }
    else {
      FUN_08005784(param_1 + 0x74,DAT_08075608);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


