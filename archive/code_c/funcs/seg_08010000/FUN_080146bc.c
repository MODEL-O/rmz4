// undefined FUN_080146bc(void)
// entry 0x80146bc


undefined8 FUN_080146bc(int param_1,int param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((DAT_08014700 < param_1) ||
     ((DAT_08014708 < (uint)(param_2 + DAT_08014704) &&
      (DAT_08014710 < (uint)(param_2 + DAT_0801470c))))) {
    uVar1 = 0;
  }
  else {
    uVar1 = (uint)((ushort *)(DAT_08014714 + 0x7e0))
                  [(uint)*(ushort *)(DAT_08014714 + 0x7e0) * (param_2 + 0x64000 >> 0xc) +
                   (param_1 >> 0xc) + 2];
  }
  return CONCAT44(in_lr,uVar1);
}


