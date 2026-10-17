// undefined FUN_080b4ea8(void)
// entry 0x80b4ea8


undefined4 FUN_080b4ea8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080b4f14);
    uVar2 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0x1e;
    if (*(char *)(param_1 + 0xb7) == '\x01') {
      *(undefined1 *)(param_1 + 0x12) = 0;
      *(char *)(param_1 + 0xb7) = '\0';
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar1 = FUN_08129198(*(undefined1 *)(param_1 + 0x12),10);
  if (cVar1 == '\0') {
    FUN_080b56c0(param_1);
  }
  cVar1 = FUN_080b56a8(param_1);
  if (cVar1 != '\0') {
    iVar3 = *(int *)(*DAT_080b4f18 + 0x58) - *(int *)(param_1 + 0x58);
    if (iVar3 < 0) {
      if (DAT_080b4f34 < *(int *)(param_1 + 0x58) - *(int *)(*DAT_080b4f18 + 0x58)) {
        return in_lr;
      }
    }
    else if (DAT_080b4f1c < iVar3) {
      return in_lr;
    }
    FUN_080b5498(param_1);
  }
  return in_lr;
}


