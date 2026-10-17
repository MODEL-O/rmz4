// undefined FUN_080e3058(void)
// entry 0x80e3058


undefined4 FUN_080e3058(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 in_lr;
  
  FUN_0801cff0();
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e308c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_080e2f14(param_1);
  }
  return in_lr;
}


