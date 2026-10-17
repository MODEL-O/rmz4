// undefined FUN_080b1b44(void)
// entry 0x80b1b44


undefined4 FUN_080b1b44(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    FUN_080b20c4(param_1);
    if (*(int *)(param_1 + 0xc0) == 0) {
      FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080b1b98));
    }
    else {
      FUN_080b2120(param_1);
      if (*(char *)(param_1 + 0xd) == '\x05') {
        FUN_080b1fd8(param_1);
      }
    }
    FUN_0801cff0(param_1);
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b1b70);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080b1bbc(param_1);
  }
  return in_lr;
}


