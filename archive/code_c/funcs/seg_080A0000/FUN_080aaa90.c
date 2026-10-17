// undefined FUN_080aaa90(void)
// entry 0x80aaa90


undefined4 FUN_080aaa90(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xc0) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar1 = FUN_0802adac(0,param_1,DAT_080aaaf4);
    *(int *)(param_1 + 0xc0) = iVar1;
    if (iVar1 != 0) {
      FUN_08005784(param_1 + 0x74,DAT_080aaaf8);
      FUN_0801cf00(param_1,0x9400);
      if (*(char *)(param_1 + 0xd) == '\x03') {
        iVar1 = *(int *)(param_1 + 0x2c);
        if ((iVar1 != 0) && (*(byte *)(iVar1 + 0xc) < 2)) {
          *(undefined1 *)(iVar1 + 0x12) = 0;
        }
        *(undefined4 *)(param_1 + 0x2c) = 0;
        *(undefined1 *)(param_1 + 0xb4) = 0;
      }
    }
  }
  return in_lr;
}


