// undefined FUN_080fb298(void)
// entry 0x80fb298


undefined4 FUN_080fb298(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    FUN_080fb630(param_1);
    if (*(int *)(param_1 + 0xc0) == 0) {
      FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080fb2f0));
      FUN_0801cff0(param_1);
    }
    else {
      FUN_080fb6b4(param_1);
      FUN_0801d1f4(param_1);
    }
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080fb2c4);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080fb308(param_1);
  }
  return in_lr;
}


