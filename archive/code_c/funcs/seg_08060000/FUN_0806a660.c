// undefined FUN_0806a660(void)
// entry 0x806a660


undefined4 FUN_0806a660(int param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 in_lr;
  int local_34;
  int local_30;
  int local_2c;
  
  uVar9 = *(byte *)(param_1 + 10) >> 4 & 1;
  iVar8 = *(int *)(param_1 + 0xbc);
  local_2c = *(int *)(param_1 + 0xc0);
  if (*(short *)(param_1 + 0xa4) < 0x21) {
    iVar10 = *(int *)(iVar8 + 0x54);
    iVar11 = *(int *)(iVar8 + 0x58);
    uVar2 = (uint)*(byte *)(iVar8 + 0xb4);
    pbVar3 = (byte *)(param_1 + 0xc5);
    bVar1 = *pbVar3;
    pbVar4 = (byte *)(param_1 + 0xc6);
    if (bVar1 != 1) {
      if ((1 < bVar1) || (bVar1 != 0)) {
        iVar8 = *(byte *)(param_1 + 0xc6) - 1;
        if (iVar8 < 1) {
          *pbVar3 = 0;
          return in_lr;
        }
        *(byte *)(param_1 + 0xc6) = (byte)iVar8;
        return in_lr;
      }
      *pbVar4 = 0x18;
      *pbVar3 = 1;
    }
    iVar8 = *pbVar4 - 1;
    if (iVar8 < 1) {
      *pbVar4 = 0x18;
      *pbVar3 = 2;
    }
    else {
      if (iVar8 == 0xc) {
        iVar7 = (uVar9 * 2 + -1) * -0x1000;
        uVar5 = (uVar9 + 1 & 1) * 0x80 + uVar2;
        iVar6 = iVar7 * *(short *)((uVar5 * 0x1000000 + 0x40000000 >> 0x17) + DAT_0806a7a0);
        if (iVar6 < 0) {
          iVar6 = iVar6 + 0xff;
        }
        local_34 = (iVar6 >> 8) + iVar10;
        iVar7 = *(short *)((uVar5 & 0xff) * 2 + DAT_0806a7a0) * iVar7;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 0xff;
        }
        local_30 = (iVar7 >> 8) + iVar11;
        FUN_0809eb70(param_1,&local_34,0,uVar9);
      }
      uVar9 = FUN_08128fb8((uint)*pbVar4 << 7,0x18);
      iVar6 = *(short *)((uVar9 & 0xff) * 2 + DAT_0806a7a0) * 8;
      iVar7 = iVar6 * *(short *)((uVar2 + 0x40 & 0xff) * 2 + DAT_0806a7a0);
      if (iVar7 < 0) {
        iVar7 = iVar7 + 0xff;
      }
      iVar6 = iVar6 * *(short *)(uVar2 * 2 + DAT_0806a7a0);
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0xff;
      }
      *(int *)(local_2c + 0x54) = iVar10 + (iVar7 >> 8);
      *(int *)(local_2c + 0x58) = iVar11 + (iVar6 >> 8);
      *pbVar4 = (byte)iVar8;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xc5) = 0;
  }
  return in_lr;
}


