// undefined FUN_080786f8(void)
// entry 0x80786f8


undefined4 FUN_080786f8(int param_1)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar1 = DAT_080787b0;
  if (*(char *)(param_1 + 0xf) == '\0') {
    pbVar3 = (byte *)(*(int *)(param_1 + 0xcc) + 0xba);
    iVar4 = (uint)*(byte *)(param_1 + 0xc5) * 2;
    *pbVar3 = (byte)(1 << *(sbyte *)(iVar4 + DAT_080787b0)) | *pbVar3;
    pbVar3 = (byte *)(*(int *)(param_1 + 0xcc) + 0xba);
    *pbVar3 = (byte)(1 << *(sbyte *)(iVar4 + iVar1 + 1)) | *pbVar3;
    FUN_0801d3d0(param_1,6);
    FUN_0800249c(0x84,0x2c0);
    FUN_08078fdc(param_1,0);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0xc4) * 2 + DAT_080787b8) * 4 +
                        DAT_080787b4)));
  FUN_08078f28(param_1);
  uVar2 = FUN_080025d8(0x84);
  if ((uVar2 & 0xff) - 3 < 2) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


