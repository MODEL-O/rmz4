// undefined FUN_080a6160(void)
// entry 0x80a6160


undefined4 FUN_080a6160(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      cVar1 = FUN_080a685c(param_1);
      if (cVar1 == '\0') {
        FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080a61b4));
      }
      else {
        FUN_080a6928(param_1);
      }
    }
    else {
      FUN_080a6928(param_1);
    }
    FUN_0801cff0(param_1);
  }
  else {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a618c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_080a61d4(param_1);
  }
  return in_lr;
}


