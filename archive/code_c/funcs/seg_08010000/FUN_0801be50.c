// undefined FUN_0801be50(void)
// entry 0x801be50


undefined4 FUN_0801be50(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  undefined4 in_lr;
  undefined4 local_24 [2];
  
  iVar2 = DAT_0801becc;
  uVar1 = *(uint *)(param_1 + 0x5c);
  if (*(short *)(DAT_0801bed0 + DAT_0801becc) != 0) {
    puVar5 = (ushort *)(((uVar1 & 0xffff) >> 4) * 2 + DAT_0801bedc);
    FUN_08128be0(*DAT_0801bed4 + DAT_0801bed8,(*puVar5 & 0x1f00) * 8 + 0x6000000,0x200);
    local_24[0] = 0;
    FUN_08128be0(local_24,(*puVar5 & 0x1f00) * 8 + DAT_0801bee0,0x1000200);
  }
  if (*(char *)(DAT_0801bee4 + iVar2) == '\a') {
    iVar2 = *(int *)(param_1 + 0x4c) + 2;
  }
  else if (*(char *)(DAT_0801bee4 + iVar2) == '\v') {
    iVar2 = *(int *)(param_1 + 0x4c) + -2;
  }
  else {
    iVar2 = 0;
  }
  *(int *)(param_1 + 0x4c) = iVar2;
  iVar4 = *(int *)(param_1 + 0x50) + -2;
  *(int *)(param_1 + 0x50) = iVar4;
  iVar2 = DAT_0801bf34;
  iVar3 = ((uVar1 & 0xffff) >> 4) * 4;
  *(short *)(iVar3 + DAT_0801bf34) =
       (short)*(undefined4 *)(param_1 + 0x4c) +
       (short)((uint)(*(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x34)) >> 8);
  *(short *)(iVar3 + iVar2 + 2) =
       (short)iVar4 + (short)((uint)(*(int *)(param_1 + 0x38) * *(int *)(param_1 + 0x48)) >> 8);
  return in_lr;
}


