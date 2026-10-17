// undefined FUN_08103994(void)
// entry 0x8103994


undefined4 FUN_08103994(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 in_lr;
  
  FUN_08002b10(0x182);
  uVar2 = 0;
  do {
    FUN_080e3db4(param_1 + 0x54,uVar2 * 0x1c + DAT_081039dc,0,0);
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 10);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_081039e0);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


