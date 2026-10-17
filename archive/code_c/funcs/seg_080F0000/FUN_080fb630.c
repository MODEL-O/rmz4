// undefined FUN_080fb630(void)
// entry 0x80fb630


undefined4 FUN_080fb630(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xc0) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar1 = FUN_0802adac(0,param_1,DAT_080fb68c);
    *(int *)(param_1 + 0xc0) = iVar1;
    if ((iVar1 != 0) &&
       (FUN_08005784(param_1 + 0x74,DAT_080fb690), *(char *)(param_1 + 0xd) == '\x01')) {
      FUN_0801cf00(param_1,DAT_080fb694);
      if ((*(byte *)(DAT_080fb698 + DAT_080fb69c) & 0xf) == 0) {
        if (99 < *(byte *)(param_1 + 0x12)) {
          return in_lr;
        }
      }
      else if (0x31 < *(byte *)(param_1 + 0x12)) {
        return in_lr;
      }
      *(undefined1 *)(param_1 + 0xd) = 2;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


