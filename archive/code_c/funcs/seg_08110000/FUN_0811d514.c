// undefined FUN_0811d514(void)
// entry 0x811d514


undefined4 FUN_0811d514(int param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  iVar5 = param_1 + DAT_0811d5b4;
  FUN_080027b8(iVar5,DAT_0811d5b8,0x85,0,0);
  uVar6 = 0;
  do {
    bVar1 = *(byte *)(param_1 + DAT_0811d5bc + uVar6);
    if (bVar1 != 0xff) {
      uVar3 = (ushort)((int)(uint)*(byte *)(*DAT_0811d5c0 + (uint)(bVar1 >> 1)) >>
                      ((bVar1 & 1) << 2)) & 0xf;
      iVar4 = uVar6 * 0x80 + iVar5;
      sVar2 = (short)DAT_0811d5c4;
      *(short *)(iVar4 + 0x9a) = sVar2;
      *(short *)(iVar4 + 0xda) = sVar2 + 0x20;
      *(ushort *)(iVar4 + 0x9c) = uVar3 + 0x4b | 0x2000;
      *(ushort *)(iVar4 + 0xdc) = uVar3 + 0x6b | 0x2000;
    }
    uVar6 = uVar6 + 1 & 0xff;
  } while (uVar6 < 7);
  FUN_08001f1c(param_1 + DAT_0811d5b4,(*DAT_0811d5c8 & 0x1f00) << 3,0x1000);
  return in_lr;
}


