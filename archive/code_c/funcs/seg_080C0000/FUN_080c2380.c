// undefined FUN_080c2380(void)
// entry 0x80c2380


undefined4 FUN_080c2380(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 in_lr;
  
  cVar1 = *(char *)(*DAT_080c23b0 + 0x278);
  if (cVar1 != '\0') {
    *(char *)(*DAT_080c23b0 + 0x278) = cVar1 + -1;
  }
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c23b4);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  return in_lr;
}


