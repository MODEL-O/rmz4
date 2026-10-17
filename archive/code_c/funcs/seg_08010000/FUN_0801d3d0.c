// undefined FUN_0801d3d0(void)
// entry 0x801d3d0


undefined4 FUN_0801d3d0(int param_1,char param_2)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x20;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf | param_2 << 4;
  *(char *)(param_1 + 0x23) = param_2;
  return in_lr;
}


