// undefined FUN_0801f2e0(void)
// entry 0x801f2e0


undefined8 FUN_0801f2e0(char param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined4 in_lr;
  
  puVar3 = DAT_0801f340;
  uVar5 = 0;
  bVar11 = false;
  if (param_1 == '\0') {
    *(int *)(DAT_0801f340 + 6) = *(int *)(DAT_0801f340 + 6) + 1;
    uVar2 = puVar3[0x80];
    uVar5 = 0;
    do {
      iVar6 = FUN_0801f748(puVar3);
      if (iVar6 == 0) {
        if ((puVar3[9] & 1) == 0) {
          iVar6 = DAT_0801f360;
          if ((*(byte *)(DAT_0801f344 + 4) & 0x20) != 0) {
            iVar6 = DAT_0801f348;
          }
          FUN_08128f80(puVar3,*(undefined4 *)((uint)*puVar3 * 4 + iVar6));
        }
        else {
          bVar11 = true;
        }
      }
      iVar6 = DAT_0801f390;
      if ((*(byte *)(DAT_0801f390 + 0x12) & 1) == 0) {
        uVar5 = ~(uint)*(ushort *)(DAT_0801f390 + 8) & 1;
      }
      iVar7 = FUN_08027634(DAT_0801f390 + 0x10);
      if (iVar7 == 0) {
        bVar11 = false;
        FUN_0801f80c(iVar6);
      }
      else {
        uVar5 = ~(uint)*(ushort *)(iVar6 + 8) & 1;
      }
      iVar6 = DAT_0801f44c;
    } while (bVar11);
    FUN_0801f8c0();
    uVar4 = DAT_0801f454;
    iVar7 = DAT_0801f450;
    pbVar8 = (byte *)(DAT_0801f450 + -2);
    bVar1 = *pbVar8;
    uVar10 = (uint)bVar1 * 0x18 & 0xffffffe0;
    FUN_08128be0(DAT_0801f450,DAT_0801f458,uVar10 >> 2);
    uVar9 = (uint)bVar1 * 0x18 & 0x1f;
    if (uVar9 != 0) {
      FUN_08128be4(uVar10 + iVar7,uVar10 + DAT_0801f458,uVar9 >> 2 & uVar4 | 0x4000000);
    }
    *(byte *)(iVar7 + -1) = *pbVar8;
    *pbVar8 = 0;
    if (*(char *)(iVar6 + 0x18) != '\0') {
      FUN_08006c58(iVar6 + 0x38);
    }
    iVar6 = DAT_0801f45c;
    FUN_0801f698(DAT_0801f45c);
    if (((-(int)(char)uVar2 | (int)(char)uVar2) < 0) && (*(char *)(iVar6 + 0x100) != '\0')) {
      FUN_0801d5e0(iVar6 + 0x120);
    }
  }
  return CONCAT44(in_lr,uVar5);
}


