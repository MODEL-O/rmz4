// undefined FUN_080a7c98(void)
// entry 0x80a7c98


undefined4 FUN_080a7c98(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    if (*(char *)(*(int *)(param_1 + 0x28) + 0xd) == '\0') {
      FUN_0801cff0(param_1);
    }
    else {
      FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080a7ce8));
    }
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a7cc0);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080a7cec(param_1);
  }
  return in_lr;
}


