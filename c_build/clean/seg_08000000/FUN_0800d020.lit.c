// undefined FUN_0800d020(void)
// entry 0x800d020


void FUN_0800d020(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  undefined4 local_24 [2];
  
  uVar3 = *(uint *)(param_1 + 0x5c) & 0xffff;
  if (((*(byte *)(0x0202e8b0 + 4) & 0x20) == 0) &&
     (*(char *)(0x02000ab0 + 0x0002d024) != '\x01')) {
    (*(int *)0x02000a00) = (ushort)(uVar3 << 8) | (*(int *)0x02000a00);
  }
  else {
    (*(int *)0x02000a00) = (*(int *)0x02000a00) & ~(ushort)(uVar3 << 8);
  }
  iVar1 = 0x02000ab0;
  if (*(short *)(0x0002c002 + 0x02000ab0) != 0) {
    puVar5 = (ushort *)((uVar3 >> 4) * 2 + 0x02000a04);
    local_24[0] = 0;
    FUN_08128be0(local_24,(*puVar5 & 0x1f00) * 8 + 0x6000000,0x01000200);
    FUN_08128be0((*(int *)0x08b2c0c4) + 0x08b2c0cc,(*puVar5 & 0x1f00) * 8 + 0x06000800,0x200);
  }
  iVar2 = 0x02000a0c;
  iVar4 = (uVar3 >> 4) * 4;
  *(short *)(iVar4 + 0x02000a0c) =
       ((short)*(undefined4 *)(param_1 + 0x34) -
       (short)((uint)*(undefined4 *)(0x0002d030 + iVar1) >> 8)) + 0x50 +
       (short)((uint)*(undefined4 *)(param_1 + 0x2c) >> 8);
  *(short *)(iVar4 + iVar2 + 2) =
       ((short)*(undefined4 *)(param_1 + 0x38) -
       (short)((uint)*(undefined4 *)(0x0002d034 + iVar1) >> 8)) + 0xb8 +
       (short)((uint)*(undefined4 *)(param_1 + 0x30) >> 8);
  return;
}


