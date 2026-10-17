// undefined FUN_0810c02c(void)
// entry 0x810c02c


undefined4 FUN_0810c02c(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x28) + DAT_0810c054 + 5) == '\x02') {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0810c058);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_0810bd20(param_1);
  }
  else {
    FUN_0801cff0(param_1);
  }
  return in_lr;
}


