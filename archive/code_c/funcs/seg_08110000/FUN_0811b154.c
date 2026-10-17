// undefined FUN_0811b154(void)
// entry 0x811b154


undefined4 FUN_0811b154(int param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  
  iVar6 = param_1 + DAT_0811b21c;
  FUN_080027b8(iVar6,DAT_0811b220,0x15,0,0);
  piVar4 = DAT_0811b224;
  uVar7 = 0;
  if (*(char *)(param_1 + 0xdda) != '\0') {
    do {
      bVar1 = *(byte *)(param_1 + DAT_0811b228 + uVar7);
      if (bVar1 != 0xff) {
        uVar3 = (ushort)((int)(uint)*(byte *)(*piVar4 + (uint)(bVar1 >> 1)) >> ((bVar1 & 1) << 2)) &
                0xf;
        iVar5 = uVar7 * 0x80 + iVar6;
        sVar2 = (short)DAT_0811b22c;
        *(short *)(iVar5 + 0x9e) = sVar2;
        *(short *)(iVar5 + 0xde) = sVar2 + 0x20;
        *(ushort *)(iVar5 + 0xa0) = uVar3 + 0x294 | 0x2000;
        *(ushort *)(iVar5 + 0xe0) = uVar3 + 0x2b4 | 0x2000;
      }
      uVar7 = uVar7 + 1 & 0xff;
    } while (uVar7 < *(byte *)(param_1 + 0xdda));
  }
  FUN_08001f1c(param_1 + DAT_0811b230,(*DAT_0811b234 & 0x1f00) << 3,0x1000);
  return in_lr;
}


