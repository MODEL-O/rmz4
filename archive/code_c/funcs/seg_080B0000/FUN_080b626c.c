// undefined FUN_080b626c(void)
// entry 0x80b626c


undefined4 FUN_080b626c(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb4) == '\0') {
    if (((*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) &&
        ((*(uint *)(param_1 + 0x8c) & 0x200) == 0)) &&
       ((*(byte *)(*(int *)(param_1 + 0x28) + 0xbf) & 1) == 0)) {
      FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080b62fc));
      return in_lr;
    }
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b62e4);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b6298);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  FUN_080b63d8(param_1);
  return in_lr;
}


