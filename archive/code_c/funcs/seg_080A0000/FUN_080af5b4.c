// undefined FUN_080af5b4(void)
// entry 0x80af5b4


undefined4 FUN_080af5b4(int param_1)

{
  short sVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0x180;
    *(undefined1 *)(param_1 + 0x13) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffe80;
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0xd) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0xe) = 0;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x13) == '\x02') {
    FUN_0801cf00(param_1,CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) +
                         2);
    *(undefined1 *)(param_1 + 0x13) = 0;
  }
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  if (DAT_080af684 <
      (int)(uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70))) {
    FUN_0801cf00(param_1,*(byte *)(param_1 + 0x11) | 0xa300);
  }
  sVar1 = FUN_08007c7c(*(int *)(param_1 + 0x54) +
                       *(int *)(((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 4U) + DAT_080af688
                               ) * 0x100,*(undefined4 *)(param_1 + 0x58));
  if ((sVar1 != 0) && (sVar1 != 0xf)) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080af68c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  return in_lr;
}


