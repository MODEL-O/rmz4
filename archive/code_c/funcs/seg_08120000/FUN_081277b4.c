// undefined FUN_081277b4(void)
// entry 0x81277b4


undefined4 FUN_081277b4(uint param_1)

{
  undefined4 *puVar1;
  undefined4 in_lr;
  
  puVar1 = (undefined4 *)((param_1 & 0xffff) * 8 + DAT_081277dc);
  FUN_08127ea0(*(undefined4 *)((uint)*(ushort *)(puVar1 + 1) * 0xc + DAT_081277d8),*puVar1);
  return in_lr;
}


