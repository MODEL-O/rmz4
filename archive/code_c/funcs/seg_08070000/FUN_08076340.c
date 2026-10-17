// undefined FUN_08076340(void)
// entry 0x8076340


undefined4 FUN_08076340(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801ce54();
    FUN_0801ceec(param_1);
    FUN_0801cf00(param_1,DAT_08076388);
    if (*(int *)(param_1 + 0xcc) < *(int *)(param_1 + 0x54)) {
      *(undefined1 *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      *(undefined1 *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + DAT_08076490;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined2 *)(param_1 + 0xd6) = 0;
    *(undefined1 *)(param_1 + 0x13) = 0;
    FUN_08005784(param_1 + 0x74,DAT_08076494);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar3 = *(int *)(param_1 + 0xd0);
  iVar2 = FUN_08129198(iVar3,6);
  *(int *)(param_1 + 0xd0) = iVar3 + 1;
  iVar1 = DAT_08076564;
  iVar3 = DAT_08076498;
  pbVar4 = (byte *)(param_1 + 0x24);
  if (iVar2 == 0) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_18 = *(int *)(param_1 + 0x54) +
                 *(short *)(((*pbVar4 + 0x20) * 0x1000000 + 0x40000000 >> 0x17) + DAT_08076564) *
                 0x14;
      local_14 = *(int *)(param_1 + 0x58) +
                 *(short *)((*pbVar4 + 0x20 & 0xff) * 2 + DAT_08076564) * 0x14;
      FUN_080cbf1c(&local_18,2,*pbVar4 + 0x30,0);
      local_18 = *(int *)(param_1 + 0x54) +
                 *(short *)(((*pbVar4 + 0xa0) * 0x1000000 + 0x40000000 >> 0x17) + iVar1) * 0x14;
      local_14 = *(int *)(param_1 + 0x58) + *(short *)((*pbVar4 + 0xa0 & 0xff) * 2 + iVar1) * 0x14;
      FUN_080cbf1c(&local_18,2,*pbVar4 + 0xb0,1);
    }
    else {
      local_18 = *(int *)(param_1 + 0x54) +
                 *(short *)(((0x60 - *pbVar4) * 0x1000000 + 0x40000000 >> 0x17) + DAT_08076498) *
                 0x14;
      local_14 = *(int *)(param_1 + 0x58) +
                 *(short *)((0x60 - *pbVar4 & 0xff) * 2 + DAT_08076498) * 0x14;
      FUN_080cbf1c(&local_18,2,'P' - *pbVar4,0);
      local_18 = *(int *)(param_1 + 0x54) +
                 *(short *)(((0xe0 - *pbVar4) * 0x1000000 + 0x40000000 >> 0x17) + iVar3) * 0x14;
      local_14 = *(int *)(param_1 + 0x58) + *(short *)((0xe0 - *pbVar4 & 0xff) * 2 + iVar3) * 0x14;
      FUN_080cbf1c(&local_18,2,-0x30 - *pbVar4,1);
    }
  }
  iVar3 = *(int *)(param_1 + 100) + 8;
  *(int *)(param_1 + 100) = iVar3;
  if (0x180 < iVar3) {
    *(undefined4 *)(param_1 + 100) = 0x180;
  }
  iVar3 = (uint)*(ushort *)(param_1 + 0xd6) + *(int *)(param_1 + 100);
  *(short *)(param_1 + 0xd6) = (short)iVar3;
  *pbVar4 = (byte)((uint)iVar3 >> 8);
  if (0x1000 < *(ushort *)(param_1 + 0xd6)) {
    *(undefined1 *)(param_1 + 0xd) = 0x14;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


