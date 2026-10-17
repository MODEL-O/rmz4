// undefined FUN_0806d234(void)
// entry 0x806d234


undefined4 FUN_0806d234(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if ((((*(int *)(param_1 + 0xb4) == 0) && (*(int *)(param_1 + 0xb8) == 0)) &&
      (*(int *)(param_1 + 0xbc) == 0)) && (*(int *)(param_1 + 0xc0) == 0)) {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0806d270);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_0806d294(param_1);
  }
  else {
    FUN_0801cff0(param_1);
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0806d290));
  }
  return in_lr;
}


