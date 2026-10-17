// undefined FUN_0800e8b8(void)
// entry 0x800e8b8


void FUN_0800e8b8(int param_1)

{
  ushort *puVar1;
  undefined4 local_18 [2];
  
  if (*(short *)(0x02000ab0 + 0x0002c002) != 0) {
    puVar1 = (ushort *)(((*(uint *)(param_1 + 0x5c) & 0xffff) >> 4) * 2 + 0x02000a04);
    FUN_08128be0((*(int *)0x08b2c218) + 0x08b2c220,(*puVar1 & 0x1f00) * 8 + 0x6000000,0x200);
    local_18[0] = 0;
    FUN_08128be0(local_18,(*puVar1 & 0x1f00) * 8 + 0x06000800,0x1000200);
  }
  return;
}


