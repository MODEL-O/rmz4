// undefined FUN_080b8978(void)
// entry 0x80b8978


undefined4 FUN_080b8978(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined4 in_lr;
  
  iVar3 = DAT_080b8a9c;
  iVar2 = DAT_080b8a98;
  iVar1 = DAT_080b8a94;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08001d30(DAT_080b8a94 + DAT_080b8a98,
                 ((uint)*(ushort *)(DAT_080b8a9c + 0x16c) -
                 (uint)(*(ushort *)(DAT_080b8a94 + DAT_080b8a98 + 6) >> 6)) * 0x20 + 0x10000);
    iVar4 = DAT_080b8aa4;
    FUN_08002208(iVar1 + DAT_080b8aa0,
                 ((uint)*(ushort *)(DAT_080b8aa4 + 0x16c) -
                 (uint)*(byte *)(iVar1 + DAT_080b8aa0 + 7)) * 0x20 + 0x200);
    iVar1 = DAT_080b8aa8;
    FUN_08001d30(iVar2 + DAT_080b8aa8,
                 ((uint)*(ushort *)(iVar3 + 0x1c8) -
                 (uint)(*(ushort *)(iVar2 + DAT_080b8aa8 + 6) >> 6)) * 0x20 + 0x10000);
    FUN_08002208(iVar1 + DAT_080b8aa0,
                 ((uint)*(ushort *)(iVar4 + 0x1c8) - (uint)*(byte *)(iVar1 + DAT_080b8aa0 + 7)) *
                 0x20 + 0x200);
    FUN_08005784(param_1 + 0x74,DAT_080b8aac);
    *DAT_080b8ab0 = (short)DAT_080b8ab4;
    *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3 | 4;
    FUN_0801ceec(param_1);
    FUN_0801cf00(param_1,0xb800);
    *(undefined1 *)(param_1 + 0x25) = 0x18;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x1800;
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar5 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar5;
  DAT_080b8ab0[1] = 0x10 - *(byte *)(param_1 + 0x12) & 0x1f | (ushort)*(byte *)(param_1 + 0x12) << 8
  ;
  if (cVar5 == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


