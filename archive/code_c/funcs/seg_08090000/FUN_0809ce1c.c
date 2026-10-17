// undefined FUN_0809ce1c(void)
// entry 0x809ce1c


undefined4 FUN_0809ce1c(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x10) == '\x02') || (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2)) {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_0809ce60));
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809ce48);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_0809ce64(param_1);
  }
  return in_lr;
}


