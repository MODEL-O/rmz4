// undefined FUN_080b4ce0(void)
// entry 0x80b4ce0


undefined4 FUN_080b4ce0(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    FUN_080b5554(param_1);
    if (*(int *)(param_1 + 0xc0) == 0) {
      FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080b4d34));
    }
    else {
      FUN_080b55a4(param_1);
    }
    FUN_0801cff0(param_1);
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b4d0c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080b4d4c(param_1);
  }
  return in_lr;
}


