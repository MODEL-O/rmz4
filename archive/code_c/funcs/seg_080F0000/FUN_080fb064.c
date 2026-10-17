// undefined FUN_080fb064(void)
// entry 0x80fb064


undefined4 FUN_080fb064(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  
  FUN_08129258(auStack_14,DAT_080fb0c4,4);
  FUN_08129258(auStack_10,DAT_080fb0c8,4);
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar1 = FUN_08073e30(auStack_10,4);
    *(undefined1 *)(param_1 + 0xb5) = auStack_14[iVar1];
    *(undefined4 *)(param_1 + 0xb8) = 0xc0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  iVar1 = *(int *)(param_1 + 0xb8) + -1;
  *(int *)(param_1 + 0xb8) = iVar1;
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


