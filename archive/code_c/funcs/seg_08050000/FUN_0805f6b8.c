// undefined FUN_0805f6b8(void)
// entry 0x805f6b8


undefined4 FUN_0805f6b8(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0805f6e8);
    if (*DAT_0805f6ec == 0xb) {
      FUN_08002b10(0x114);
    }
    else {
      FUN_08002b10(DAT_0805f818);
    }
    FUN_0800249c(0x5c,0x300);
    FUN_080025d8(0x5c);
    FUN_08002624(0x5c);
    iVar4 = DAT_0805f824;
    iVar3 = DAT_0805f820;
    iVar2 = DAT_0805f81c;
    FUN_08001d30(DAT_0805f81c + DAT_0805f820,
                 ((uint)*(ushort *)(DAT_0805f824 + 0xc2) -
                 (uint)(*(ushort *)(DAT_0805f81c + DAT_0805f820 + 6) >> 6)) * 0x20 + 0x10000);
    iVar6 = DAT_0805f82c;
    iVar5 = DAT_0805f828;
    FUN_08002208(iVar2 + DAT_0805f828,
                 ((uint)*(ushort *)(DAT_0805f82c + 0xc2) - (uint)*(byte *)(iVar2 + DAT_0805f828 + 7)
                 ) * 0x20 + 0x200);
    FUN_08001d30(iVar3 + 0x780,
                 ((uint)*(ushort *)(iVar4 + 0xc0) - (uint)(*(ushort *)(iVar3 + 0x786) >> 6)) * 0x20
                 + 0x10000);
    FUN_08002208(iVar5 + 0x780,
                 ((uint)*(ushort *)(iVar6 + 0xc0) - (uint)*(byte *)(iVar5 + 0x787)) * 0x20 + 0x200);
    iVar2 = DAT_0805f830;
    FUN_08001d30(DAT_0805f830 + iVar3,
                 ((uint)*(ushort *)(iVar4 + 0xc6) -
                 (uint)(*(ushort *)(DAT_0805f830 + iVar3 + 6) >> 6)) * 0x20 + 0x10000);
    FUN_08002208(iVar2 + iVar5,
                 ((uint)*(ushort *)(iVar6 + 0xc6) - (uint)*(byte *)(iVar2 + iVar5 + 7)) * 0x20 +
                 0x200);
    FUN_08001d30(iVar3 + 0x7a8,
                 ((uint)*(ushort *)(iVar4 + 0xc4) - (uint)(*(ushort *)(iVar3 + 0x7ae) >> 6)) * 0x20
                 + 0x10000);
    FUN_08002208(iVar5 + 0x7a8,
                 ((uint)*(ushort *)(iVar6 + 0xc4) - (uint)*(byte *)(iVar5 + 0x7af)) * 0x20 + 0x200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  bVar1 = *(byte *)(DAT_0805f834 + 0x12);
  if ((bVar1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(byte *)(param_1 + 0xe) = bVar1 & 1;
  }
  return in_lr;
}


