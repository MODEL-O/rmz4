// undefined FUN_0800a9d8(void)
// entry 0x800a9d8


void FUN_0800a9d8(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 local_20 [2];
  
  uVar2 = *(uint *)(param_1 + 0x5c);
  if (*(short *)(0x02000ab0 + 0x0002c002) != 0) {
    puVar4 = (ushort *)(((uVar2 & 0xffff) >> 4) * 2 + 0x02000a04);
    FUN_08128be0((*(int *)0x08b2c0a8) + 0x08b2c0b0,(*puVar4 & 0x1f00) * 8 + 0x6000000,0x200);
    local_20[0] = 0;
    FUN_08128be0(local_20,(*puVar4 & 0x1f00) * 8 + 0x06000800,0x1000200);
  }
  iVar1 = 0x02000a0c;
  iVar3 = ((uVar2 & 0xffff) >> 4) * 4;
  *(short *)(iVar3 + 0x02000a0c) = (short)*(undefined4 *)(param_1 + 0x34);
  *(short *)(iVar3 + iVar1 + 2) = (short)*(undefined4 *)(param_1 + 0x38);
  return;
}


