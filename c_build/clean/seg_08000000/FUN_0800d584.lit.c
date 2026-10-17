// undefined FUN_0800d584(void)
// entry 0x800d584


void FUN_0800d584(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 local_20 [2];
  
  iVar1 = 0x02000ab0;
  uVar2 = *(uint *)(param_1 + 0x5c);
  if (*(char *)(0x02000ab0 + 0x0002d025) != '\0') {
    (*(int *)0x02000a00) = (*(int *)0x02000a00) & ~(ushort)((uVar2 & 0xffff) << 8);
  }
  if (*(short *)(iVar1 + 0x0002c002) != 0) {
    puVar4 = (ushort *)(((uVar2 & 0xffff) >> 4) * 2 + 0x02000a04);
    local_20[0] = 0;
    FUN_08128be0(local_20,(*puVar4 & 0x1f00) * 8 + 0x6000000,0x01000200);
    FUN_08128be0((*(int *)0x08b2c230) + 0x08b2c238,(*puVar4 & 0x1f00) * 8 + 0x06000800,0x200);
  }
  iVar1 = 0x02000a0c;
  iVar3 = ((uVar2 & 0xffff) >> 4) * 4;
  *(short *)(iVar3 + 0x02000a0c) =
       (short)*(undefined4 *)(param_1 + 0x4c) +
       (short)((uint)(*(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x34)) >> 8);
  *(short *)(iVar3 + iVar1 + 2) =
       (short)*(undefined4 *)(param_1 + 0x50) +
       (short)((uint)(*(int *)(param_1 + 0x48) * *(int *)(param_1 + 0x38)) >> 8);
  return;
}


