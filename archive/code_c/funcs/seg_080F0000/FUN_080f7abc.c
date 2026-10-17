// undefined FUN_080f7abc(void)
// entry 0x80f7abc


undefined4 FUN_080f7abc(int param_1)

{
  int iVar1;
  byte bVar2;
  undefined2 uVar3;
  short sVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0xe) < 5) {
                    /* WARNING: Could not recover jumptable at 0x080f7ace. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(PTR_PTR_080f7ad0 + (uint)*(byte *)(param_1 + 0xe) * 4))();
    return uVar5;
  }
  sVar4 = *(short *)(*DAT_080f7b28 + DAT_080f7b2c);
  bVar2 = *(byte *)(param_1 + 0x11);
  if (bVar2 == 1) {
    uVar3 = FUN_08129120(sVar4,100);
    uVar6 = FUN_08129198(uVar3,10);
    uVar6 = uVar6 & 0xff;
    if (uVar6 != 0) goto LAB_080f7bb0;
    if (sVar4 != 1000) {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
      goto LAB_080f7bc4;
    }
    uVar6 = 0x6700;
LAB_080f7bb8:
    FUN_0801cf00(param_1,uVar6);
    bVar2 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    if (1 < bVar2) {
      if (bVar2 == 2) {
        sVar4 = FUN_08129120(sVar4,10);
      }
      else if (bVar2 != 4) goto LAB_080f7bc6;
      uVar6 = FUN_08129198(sVar4,10);
      uVar6 = uVar6 & 0xff;
LAB_080f7bb0:
      uVar6 = uVar6 | 0x6700;
      goto LAB_080f7bb8;
    }
    if (bVar2 != 0) goto LAB_080f7bc6;
    uVar6 = DAT_080f7b50;
    if (sVar4 == 1000) goto LAB_080f7bb8;
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  }
LAB_080f7bc4:
  *(byte *)(param_1 + 10) = bVar2;
LAB_080f7bc6:
  iVar1 = DAT_080f7bec;
  *(int *)(param_1 + 0x54) = *(int *)(DAT_080f7bec + 0x38) + *(int *)(param_1 + 0x5c) + DAT_080f7bf0
  ;
  *(int *)(param_1 + 0x58) = *(int *)(iVar1 + 0x3c) + *(int *)(param_1 + 0x60) + DAT_080f7bf4;
  FUN_0801cff0(param_1);
  return in_lr;
}


