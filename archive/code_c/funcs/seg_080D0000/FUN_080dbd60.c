// undefined FUN_080dbd60(void)
// entry 0x80dbd60


undefined4 FUN_080dbd60(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  undefined4 in_lr;
  
  FUN_0801cff0();
  bVar1 = *(char *)(param_1 + 0x12) - 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar1;
  iVar6 = DAT_080dbe24;
  iVar3 = (uint)*(byte *)(param_1 + 0x12) * 0x40;
  pbVar8 = (byte *)(param_1 + 0x74);
  uVar7 = (uint)*pbVar8;
  iVar5 = *(short *)((uVar7 + 0x40 & 0xff) * 2 + DAT_080dbe24) * iVar3;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  iVar5 = *(int *)(param_1 + 0x54) + (iVar5 >> 8);
  *(int *)(param_1 + 0x54) = iVar5;
  iVar3 = iVar3 * *(short *)(uVar7 * 2 + iVar6);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar6 = *(int *)(param_1 + 0x58) + (iVar3 >> 8);
  *(int *)(param_1 + 0x58) = iVar6;
  sVar2 = FUN_08007c7c(iVar5,iVar6 + 0x800);
  if (sVar2 != 0) {
    *pbVar8 = ((char)((uVar7 - 0x40 & 0xff) >> 7) * -2 + '\x01') * '\b' + *pbVar8;
  }
  if ((*(char *)(param_1 + 0x73) == '\x03') || (*(char *)(param_1 + 0x12) == '\0')) {
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080dbe28);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
    FUN_080dbe2c(param_1);
  }
  return in_lr;
}


