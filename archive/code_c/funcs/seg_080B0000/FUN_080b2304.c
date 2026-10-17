// undefined FUN_080b2304(void)
// entry 0x80b2304


undefined4 FUN_080b2304(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x10) == '\0') && (cVar1 = FUN_080b2dc0(param_1), cVar1 != '\0')) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b2374);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_080b23b4(param_1);
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    FUN_080b2a4c(param_1);
    if (*(int *)(param_1 + 0xc0) == 0) {
      FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080b239c));
    }
    else {
      FUN_080b2ad4(param_1);
    }
    FUN_0801cff0(param_1);
  }
  else {
    if (*(char *)(param_1 + 0x10) == '\x01') {
      *(undefined1 *)(param_1 + 0xb8) = 0;
      *(undefined1 *)(param_1 + 0xb9) = 0;
      FUN_080b29b8(param_1);
    }
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b2374);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_080b23b4(param_1);
  }
  return in_lr;
}


