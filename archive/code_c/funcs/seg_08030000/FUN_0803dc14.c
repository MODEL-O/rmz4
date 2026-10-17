// undefined FUN_0803dc14(void)
// entry 0x803dc14


undefined8 FUN_0803dc14(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0xb4);
  bVar1 = *(byte *)(iVar8 + 10) >> 4;
  bVar4 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x4c) = bVar4;
  pbVar6 = (byte *)(param_1 + 0x4a);
  *pbVar6 = *pbVar6 & 0xef | bVar4 << 4;
  *(undefined1 *)(param_1 + 0x25) = 0x10;
  uVar3 = (uint)CONCAT11(*(undefined1 *)(iVar8 + 0x1e),*(undefined1 *)(iVar8 + 0x70));
  if (uVar3 == DAT_0803dc90) {
    iVar7 = 0x1200;
    if (*(char *)(iVar8 + 0x71) == '\0') {
      iVar7 = 0x1100;
    }
    iVar5 = 0x1600;
  }
  else if ((int)DAT_0803dc90 < (int)uVar3) {
    if (uVar3 == DAT_0803dcd8) {
      bVar1 = *(byte *)(param_1 + 10);
      bVar4 = ~(bVar1 >> 4) & 1;
      if (bVar4 == 0) {
        bVar1 = bVar1 & 0xef;
      }
      else {
        bVar1 = bVar1 | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(byte *)(param_1 + 0x4c) = bVar4;
      *pbVar6 = *pbVar6 & 0xef | bVar4 << 4;
      iVar7 = 0xf00;
      if (*(char *)(iVar8 + 0x71) < '\x02') {
        iVar7 = 0xe00;
      }
      iVar5 = 0x1200;
    }
    else if ((int)DAT_0803dcd8 < (int)uVar3) {
      if (uVar3 != DAT_0803dce4) goto LAB_0803ddbe;
      *(undefined1 *)(param_1 + 0x25) = 0x11;
      iVar7 = 0xe00;
      if (*(char *)(iVar8 + 0x71) < '\x02') {
        iVar7 = 0xd00;
      }
      iVar5 = 0x1800;
    }
    else {
      if (((int)(DAT_0803dcd8 - 0xfc) < (int)uVar3) || ((int)uVar3 < (int)(DAT_0803dcd8 - 0xfe))) {
LAB_0803ddbe:
        uVar2 = 1;
        goto LAB_0803ddee;
      }
      if (*(char *)(iVar8 + 0x71) == '\0') {
        iVar7 = 0x1200;
        iVar5 = 0x1700;
      }
      else {
        iVar7 = 0x1300;
        iVar5 = 0x1400;
      }
    }
  }
  else if (DAT_0803dc94 < (int)uVar3) {
    if (uVar3 != DAT_0803dca0) goto LAB_0803ddbe;
    iVar7 = 0x1700;
    iVar5 = 0xf00;
  }
  else if ((int)uVar3 < DAT_0803dc94 + -2) {
    if (uVar3 != DAT_0803dc94 - 0x101U) goto LAB_0803ddbe;
    iVar7 = 0x1200;
    if (*(char *)(iVar8 + 0x71) < '\x02') {
      iVar7 = 0x1100;
    }
    iVar5 = 0x1500;
  }
  else {
    iVar5 = *(char *)(iVar8 + 0x71) * 4;
    iVar7 = *(int *)(iVar5 + DAT_0803dd28);
    iVar5 = *(int *)(iVar5 + DAT_0803dd2c);
  }
  iVar7 = iVar7 + *(int *)(param_1 + 100);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar7 = *(int *)(iVar8 + 0x54) - iVar7;
  }
  else {
    iVar7 = *(int *)(iVar8 + 0x54) + iVar7;
  }
  *(int *)(param_1 + 0x54) = iVar7;
  *(int *)(param_1 + 0x58) = *(int *)(iVar8 + 0x58) - (iVar5 + *(int *)(param_1 + 0x68));
  uVar2 = 0;
LAB_0803ddee:
  return CONCAT44(in_lr,uVar2);
}


