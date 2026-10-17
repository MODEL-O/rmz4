// undefined FUN_08119070(void)
// entry 0x8119070


undefined4 FUN_08119070(int param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar2 = DAT_08119394;
  iVar1 = DAT_0811938c;
  iVar6 = *(int *)(param_1 + DAT_08119098);
  if (5 < *(byte *)(param_1 + DAT_0811909c)) {
    if (*(char *)(param_1 + DAT_08119344) != '\x01') {
      if (((*(char *)(param_1 + DAT_08119340 + 1) == '\x02') &&
          (bVar3 = *(byte *)(iVar6 + 0xc0), 2 < bVar3)) ||
         (bVar3 = *(byte *)(iVar6 + 0xc1), 2 < bVar3)) {
        uVar5 = FUN_081199f0(iVar6,bVar3);
        iVar2 = DAT_0811934c;
        iVar1 = DAT_08119348;
        FUN_0810d85c((uint)*(ushort *)((uVar5 & 0xffff) * 2 + DAT_08119348) + DAT_0811934c,1,0x10);
        FUN_0810d85c((uint)*(ushort *)(iVar1 + 0xea) + iVar2,1,0x12);
      }
      else {
        param_1 = param_1 + DAT_08119390;
        FUN_0810d85c((uint)*(ushort *)((*(byte *)(param_1 + 1) + 0x6e) * 2 + DAT_0811938c) +
                     DAT_08119394,1,0x10);
        FUN_0810d85c((uint)*(ushort *)((*(byte *)(param_1 + 1) + 0x71) * 2 + iVar1) + iVar2,1,0x12);
      }
    }
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x08119096. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(PTR_PTR_081190a0 + (uint)*(byte *)(param_1 + DAT_0811909c) * 4))();
  return uVar4;
}


