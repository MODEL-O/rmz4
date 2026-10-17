// undefined FUN_080dfdd8(void)
// entry 0x80dfdd8


undefined4 FUN_080dfdd8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = DAT_080dfe54;
  if (*(char *)(param_1 + 0x77) == '\0') {
    *(int *)(param_1 + 0x5c) =
         (int)*(short *)((*(byte *)(param_1 + 0x75) + 0x40 & 0xff) * 2 + DAT_080dfe54) >> 2;
    iVar1 = (int)*(short *)((uint)*(byte *)(param_1 + 0x75) * 2 + iVar1);
  }
  else {
    *(undefined1 *)(param_1 + 0x12) = 6;
    *(undefined1 *)(param_1 + 0x13) = 6;
    iVar1 = DAT_080dfe1c;
    *(int *)(param_1 + 0x5c) =
         *(short *)((*(byte *)(param_1 + 0x75) + 0x40 & 0xff) * 2 + DAT_080dfe1c) * 3 >> 2;
    iVar1 = *(short *)((uint)*(byte *)(param_1 + 0x75) * 2 + iVar1) * 3;
  }
  *(int *)(param_1 + 0x60) = iVar1 >> 2;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 1;
  return in_lr;
}


