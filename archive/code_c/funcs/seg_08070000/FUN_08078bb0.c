// undefined FUN_08078bb0(void)
// entry 0x8078bb0


undefined4 FUN_08078bb0(int param_1)

{
  int iVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar1 = DAT_08078c64;
  if (*(char *)(param_1 + 0xf) == '\0') {
    pbVar3 = (byte *)(*(int *)(param_1 + 0xcc) + 0xba);
    iVar4 = (uint)*(byte *)(param_1 + 0xc5) * 2;
    *pbVar3 = *pbVar3 & ~(byte)(1 << *(sbyte *)(iVar4 + DAT_08078c64));
    pbVar3 = (byte *)(*(int *)(param_1 + 0xcc) + 0xba);
    *pbVar3 = *pbVar3 & ~(byte)(1 << *(sbyte *)(iVar4 + iVar1 + 1));
    FUN_08002624(0x85);
    FUN_0801d3d0(param_1,5);
    FUN_08078fdc(param_1,0);
    *(undefined1 *)(param_1 + 0x12) = 0x40;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0xc4) * 2 + DAT_08078c6c) * 4 +
                        DAT_08078c68)));
  FUN_08078f28(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


