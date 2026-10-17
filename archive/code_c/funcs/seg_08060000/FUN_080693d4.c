// undefined FUN_080693d4(void)
// entry 0x80693d4


undefined4 FUN_080693d4(int param_1)

{
  undefined2 *puVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  byte bVar16;
  undefined4 in_lr;
  byte local_24;
  
  iVar4 = *(int *)(param_1 + 0xb4);
  iVar5 = *(int *)(param_1 + 0xb8);
  iVar6 = *(int *)(param_1 + 0xbc);
  iVar7 = *(int *)(param_1 + 0xc0);
  bVar16 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(byte *)(iVar7 + 10) = *(byte *)(iVar7 + 10) & 0xfe;
    puVar1 = DAT_08069468;
    FUN_0801cf00(iVar4,*DAT_08069468);
    FUN_0801cf00(iVar5,puVar1[10]);
    FUN_0801cf00(iVar6,puVar1[0x12]);
    bVar16 = (bVar16 >> 4 & 1) + 1 & 1;
    *(byte *)(param_1 + 0x4c) = bVar16;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar16 << 4;
    if (bVar16 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    iVar13 = *(int *)(iVar6 + 0x54);
    iVar14 = *(int *)(iVar6 + 0x58);
    iVar8 = *(int *)(iVar5 + 0x54);
    iVar11 = *(int *)(iVar5 + 0x58);
    *(int *)(iVar5 + 0x54) = iVar13;
    *(int *)(iVar5 + 0x58) = iVar14;
    *(int *)(iVar7 + 0x54) = iVar8;
    *(int *)(iVar7 + 0x58) = iVar11;
    *(int *)(iVar6 + 0x54) = iVar8;
    *(int *)(iVar6 + 0x58) = iVar11;
    uVar15 = *(byte *)(iVar6 + 0xb4) + 0x80;
    uVar9 = *(byte *)(iVar5 + 0xb4) + 0x80;
    uVar12 = uVar9 & 0xff;
    uVar3 = FUN_0810d398(iVar8 + *(short *)((uVar9 * 0x1000000 + 0x40000000 >> 0x17) + DAT_080695d4)
                                 * 0xc,iVar11 + *(short *)(uVar12 * 2 + DAT_080695d4) * 0xc,
                         iVar13 + *(short *)((uVar15 * 0x1000000 + 0xc0000000 >> 0x17) +
                                            DAT_080695d4) * 0xc,
                         iVar14 + *(short *)((uVar15 * 0x1000000 + 0x80000000 >> 0x17) +
                                            DAT_080695d4) * 0xc);
    cVar10 = *(char *)(param_1 + 0xc4) + -0x80;
    *(undefined1 *)(iVar4 + 0xb4) = uVar3;
    local_24 = (byte)uVar15;
    *(byte *)(iVar5 + 0xb4) = local_24;
    *(byte *)(iVar7 + 0xb4) = (byte)uVar9;
    *(byte *)(iVar6 + 0xb4) = (byte)uVar9;
    *(char *)(param_1 + 0xc4) = cVar10;
    FUN_0806a7fc(param_1,cVar10,bVar16,1);
    FUN_0806aaf8(iVar4,uVar3,bVar16,1);
    FUN_0806a8c4(iVar5,uVar15 & 0xff,bVar16,1);
    FUN_0806a8c4(iVar6,uVar12,bVar16,1);
    FUN_0806a8c4(iVar7,uVar12,bVar16,1);
    FUN_0806ad2c(param_1);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(iVar4);
  FUN_0801cff0(iVar5);
  FUN_0801cff0(iVar6);
  if ((*(char *)(iVar5 + 0x73) == '\x03') && (*(char *)(iVar6 + 0x73) == '\x03')) {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


