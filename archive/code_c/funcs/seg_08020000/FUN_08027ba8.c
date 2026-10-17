// undefined FUN_08027ba8(void)
// entry 0x8027ba8


undefined4 FUN_08027ba8(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = *(uint *)(param_1 + 0x150);
  if (uVar1 != 0) {
    FUN_0810d85c((uint)*(ushort *)((uVar1 & DAT_08027bdc) * 2 + DAT_08027bd8) + DAT_08027be0,
                 (int)uVar1 >> 0x10 & 0xff,uVar1 >> 0x18);
  }
  return in_lr;
}


