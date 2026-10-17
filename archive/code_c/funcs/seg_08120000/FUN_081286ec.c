// undefined FUN_081286ec(void)
// entry 0x81286ec


undefined4 FUN_081286ec(int param_1,ushort param_2)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x34) == DAT_08128710) {
    *(ushort *)(param_1 + 0x1e) = param_2;
    *(short *)(param_1 + 0x20) = (short)((uint)*(ushort *)(param_1 + 0x1c) * (uint)param_2 >> 8);
  }
  return in_lr;
}


