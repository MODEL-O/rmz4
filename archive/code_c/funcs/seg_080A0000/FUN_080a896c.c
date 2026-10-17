// undefined FUN_080a896c(void)
// entry 0x80a896c


undefined4 FUN_080a896c(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_080a89ac));
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a8994);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080a89b0(param_1);
  }
  return in_lr;
}


