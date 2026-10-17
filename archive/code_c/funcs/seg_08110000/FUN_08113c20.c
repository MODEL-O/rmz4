// undefined FUN_08113c20(void)
// entry 0x8113c20


undefined4 FUN_08113c20(int param_1)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar2 = DAT_08113f90;
  iVar1 = DAT_08113f8c;
  if (4 < *(byte *)(param_1 + 2)) {
    iVar5 = 0x410;
    if (*(short *)(param_1 + 6) != 0) {
      iVar5 = 0x412;
    }
    FUN_0810d85c((uint)*(ushort *)(iVar5 + DAT_08113f8c) + DAT_08113f90,0,8);
    iVar5 = DAT_08113f94;
    if (*(short *)(param_1 + 6) != 1) {
      iVar5 = DAT_08113f94 + 2;
    }
    FUN_0810d85c((uint)*(ushort *)(iVar5 + iVar1) + iVar2,0,10);
    iVar5 = 0x418;
    if (*(short *)(param_1 + 6) != 2) {
      iVar5 = 0x41a;
    }
    FUN_0810d85c((uint)*(ushort *)(iVar5 + iVar1) + iVar2,0,0xc);
    psVar3 = DAT_08113f9c;
    if ((*(uint *)(DAT_08113f98 + 0x1300) & 1) != 0) {
      *DAT_08113f9c = *DAT_08113f9c + 1;
      psVar3[1] = psVar3[1] + -1;
    }
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x08113c36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(PTR_PTR_08113c38 + (uint)*(byte *)(param_1 + 2) * 4))();
  return uVar4;
}


