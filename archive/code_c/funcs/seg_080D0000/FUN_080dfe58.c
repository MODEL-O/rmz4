// undefined FUN_080dfe58(void)
// entry 0x80dfe58


/* WARNING: Removing unreachable block (ram,0x080dfe7e) */

undefined4 FUN_080dfe58(int param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  pbVar1 = (byte *)(param_1 + 0x74);
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x78) + *(short *)((*pbVar1 & 0x3f) * 8 + DAT_080dfe90) * 2;
  *pbVar1 = (char)(*pbVar1 + 1) + (char)((int)(*pbVar1 + 1) >> 6) * -0x40;
  return in_lr;
}


