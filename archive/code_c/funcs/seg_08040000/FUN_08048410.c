// undefined FUN_08048410(void)
// entry 0x8048410


undefined4 FUN_08048410(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_08048454));
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804843c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_08048458(param_1);
  }
  return in_lr;
}


