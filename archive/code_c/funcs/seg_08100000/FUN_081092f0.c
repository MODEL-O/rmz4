// undefined FUN_081092f0(void)
// entry 0x81092f0


undefined8 FUN_081092f0(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (((*(ushort *)(param_1 + DAT_08109310) & 0x8000) == 0) && (*DAT_08109314 != 0x11)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}


