// undefined FUN_0801ad74(void)
// entry 0x801ad74


undefined4 FUN_0801ad74(undefined4 param_1,undefined4 param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = (uint)*(byte *)(DAT_0801ad8c + DAT_0801ad90);
  if (uVar2 < 0x40) {
    uVar1 = 0;
  }
  else if (uVar2 < 0x80) {
    uVar1 = (ushort)((uVar2 - 0x40) * 0x4000 >> 0x10);
  }
  else if (uVar2 < 0xc0) {
    uVar1 = 0x10;
  }
  else {
    uVar1 = (ushort)((uint)((0x10 - ((int)(uVar2 - 0xc0) >> 2)) * 0x10000) >> 0x10);
  }
  *(ushort *)(DAT_0801add4 + 2) = uVar1 & 0x1f | (0x10 - uVar1) * 0x100;
  FUN_08007638(param_1,param_2);
  return in_lr;
}


