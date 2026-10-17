// undefined FUN_08027408(void)
// entry 0x8027408


undefined4 FUN_08027408(void)

{
  int *piVar1;
  uint uVar2;
  undefined4 in_lr;
  
  piVar1 = DAT_08027444;
  uVar2 = DAT_08027444[0x12];
  if (((uVar2 != 0xffffffff) && (DAT_0802744c < (uint)(*DAT_08027444 + DAT_08027448))) &&
     (uVar2 != 0x93)) {
    if (uVar2 != 0xffffffff) {
      FUN_08002a98(uVar2 & 0xffff);
      piVar1[0x12] = -1;
    }
    FUN_08002a88(0x93);
    piVar1[0x12] = 0x93;
  }
  return in_lr;
}


