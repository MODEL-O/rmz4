// undefined FUN_080e3d88(void)
// entry 0x80e3d88


undefined4 FUN_080e3d88(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 in_lr;
  
  cVar1 = FUN_080e38fc();
  if (cVar1 != '\0') {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e3db0);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  return in_lr;
}


