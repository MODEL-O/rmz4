// undefined FUN_08087ae8(void)
// entry 0x8087ae8


undefined4 FUN_08087ae8(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_08087b3c);
    FUN_0801cf00(param_1,DAT_08087b40);
    *(undefined1 *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    cVar1 = *(char *)(param_1 + 0xb4);
    *(char *)(param_1 + 0xb4) = cVar1 + -1;
    if (cVar1 == '\x01') {
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
    else {
      uVar2 = *DAT_08087b68 * DAT_08087b6c + DAT_08087b70;
      *DAT_08087b68 = uVar2 & 0x7fffffff;
      if (((uVar2 & 0x7fffffff) >> 0x10 & 1) == 0) {
        *(undefined1 *)(param_1 + 0xe) = 2;
        *(undefined1 *)(param_1 + 0xf) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0xe) = 4;
        *(undefined1 *)(param_1 + 0xf) = 0;
      }
    }
  }
  return in_lr;
}


