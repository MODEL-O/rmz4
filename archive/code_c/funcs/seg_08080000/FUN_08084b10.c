// undefined FUN_08084b10(void)
// entry 0x8084b10


undefined4 FUN_08084b10(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0x10) < 2) && (*(char *)(param_1 + 0xd) == '\x02')) {
    if ((*(int *)(param_1 + 0xb4) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
      iVar1 = FUN_0802adac(0,param_1,DAT_08084b54);
      *(int *)(param_1 + 0xb4) = iVar1;
      if (iVar1 != 0) {
        *(undefined1 *)(param_1 + 0xd) = 0;
        *(undefined1 *)(param_1 + 0xe) = 0;
      }
    }
  }
  return in_lr;
}


