// undefined FUN_080d3e6c(void)
// entry 0x80d3e6c


void FUN_080d3e6c(int param_1)

{
  int *piVar1;
  byte *pbVar2;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  pbVar2 = (byte *)(*(int *)(param_1 + 0x28) + 0x142);
  *pbVar2 = *pbVar2 & 0xfb;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d3e9c);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return;
}


