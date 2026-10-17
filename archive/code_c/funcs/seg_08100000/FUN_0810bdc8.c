// undefined FUN_0810bdc8(void)
// entry 0x810bdc8


undefined4 FUN_0810bdc8(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x28) + DAT_0810bdf0 + 5) == '\x02') {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0810bdf4);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_0810bd20(param_1);
  }
  else {
    FUN_0801cff0(param_1);
  }
  return in_lr;
}


