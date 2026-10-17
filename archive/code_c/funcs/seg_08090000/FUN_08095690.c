// undefined FUN_08095690(void)
// entry 0x8095690


undefined4 FUN_08095690(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if ((*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) && ((*(uint *)(param_1 + 0x8c) & 0x200) == 0))
  {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080956e8));
    FUN_08095d18(param_1);
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080956c8);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_08095bf0(param_1);
  }
  return in_lr;
}


