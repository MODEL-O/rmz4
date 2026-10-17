// undefined FUN_0801d3fc(void)
// entry 0x801d3fc


undefined4 FUN_0801d3fc(int param_1)

{
  uint *puVar1;
  undefined4 in_lr;
  
  puVar1 = (uint *)((uint)(*(byte *)(param_1 + 0x1d) >> 5) * 4 + DAT_0801d440);
  *puVar1 = *puVar1 | 1 << (*(byte *)(param_1 + 0x1d) & 0x1f);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x20;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf | 0xd0;
  *(undefined1 *)(param_1 + 0x23) = 0xd;
  return in_lr;
}


