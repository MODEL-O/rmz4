// undefined FUN_080ff134(void)
// entry 0x80ff134


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_080ff134(int param_1)

{
  undefined4 in_lr;
  
  if (0x47 < *(ushort *)(DAT_080ff15c + DAT_080ff160)) {
    *(ushort *)(DAT_080ff15c + DAT_080ff160) = 0x48;
  }
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + _FUN_080ff164));
  return in_lr;
}


