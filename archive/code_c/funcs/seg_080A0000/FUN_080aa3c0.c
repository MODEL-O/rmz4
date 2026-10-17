// undefined FUN_080aa3c0(void)
// entry 0x80aa3c0


undefined4 FUN_080aa3c0(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    FUN_080aaa90(param_1);
    if (*(int *)(param_1 + 0xc0) == 0) {
      FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080aa414));
    }
    else {
      FUN_080aaafc(param_1);
    }
    FUN_0801cff0(param_1);
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080aa3ec);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080aa42c(param_1);
  }
  return in_lr;
}


