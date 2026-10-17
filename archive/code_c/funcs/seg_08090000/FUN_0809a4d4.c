// undefined FUN_0809a4d4(void)
// entry 0x809a4d4


undefined4 FUN_0809a4d4(int param_1)

{
  short sVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  FUN_0801cff0();
  uVar2 = FUN_08128bdc((int)(short)*(undefined4 *)(param_1 + 0x5c),
                       (int)(short)*(undefined4 *)(param_1 + 0x60));
  *(char *)(param_1 + 0x24) = (char)((uVar2 & 0xffff) + 0x4000 >> 8);
  iVar6 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar6;
  iVar5 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar5;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  if ((*(uint *)(param_1 + 0x8c) & 4) == 0) {
    sVar1 = FUN_08007020(iVar6,iVar5);
    if (sVar1 != 0) {
      uVar4 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar4;
      *(undefined1 *)(param_1 + 0x12) = 1;
      piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809a57c);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
      FUN_08099ff4(param_1);
    }
  }
  else {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809a53c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_08099ff4(param_1);
  }
  return in_lr;
}


