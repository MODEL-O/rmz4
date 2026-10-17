// undefined FUN_08118d4c(void)
// entry 0x8118d4c


undefined4 FUN_08118d4c(int param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar2 = DAT_0811906c;
  iVar1 = DAT_08119064;
  iVar6 = *(int *)(param_1 + DAT_08118d74);
  if (5 < *(byte *)(param_1 + DAT_08118d78)) {
    if (*(char *)(param_1 + DAT_0811901c) != '\x01') {
      if (((*(char *)(param_1 + DAT_08119018 + 1) == '\x02') &&
          (bVar3 = *(byte *)(iVar6 + 0xc1), 2 < bVar3)) ||
         (bVar3 = *(byte *)(iVar6 + 0xc0), 2 < bVar3)) {
        uVar5 = FUN_081199f0(iVar6,bVar3);
        iVar2 = DAT_08119024;
        iVar1 = DAT_08119020;
        FUN_0810d85c((uint)*(ushort *)((uVar5 & 0xffff) * 2 + DAT_08119020) + DAT_08119024,1,0x10);
        FUN_0810d85c((uint)*(ushort *)(iVar1 + 0xea) + iVar2,1,0x12);
      }
      else {
        param_1 = param_1 + DAT_08119068;
        FUN_0810d85c((uint)*(ushort *)((*(byte *)(param_1 + 1) + 0x6e) * 2 + DAT_08119064) +
                     DAT_0811906c,1,0x10);
        FUN_0810d85c((uint)*(ushort *)((*(byte *)(param_1 + 1) + 0x71) * 2 + iVar1) + iVar2,1,0x12);
      }
    }
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x08118d72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(PTR_PTR_08118d7c + (uint)*(byte *)(param_1 + DAT_08118d78) * 4))();
  return uVar4;
}


