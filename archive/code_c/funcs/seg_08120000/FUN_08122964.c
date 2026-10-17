// undefined FUN_08122964(void)
// entry 0x8122964


undefined4 FUN_08122964(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar3 = DAT_08122a2c;
  iVar4 = DAT_08122a28;
  iVar2 = DAT_081229bc;
  iVar5 = DAT_081229b8;
  param_2 = param_2 & 0xff;
  bVar1 = *(byte *)(param_1 + 0xd + param_2);
  if (bVar1 == 1) {
    FUN_08122a34(param_2,*(undefined1 *)(param_1 + 0x28 + param_2 * 4),
                 *(undefined4 *)(param_1 + 0x14 + param_2 * 4),
                 *(undefined1 *)(param_1 + 0x3c + param_2),*(undefined1 *)(param_1 + 0x41 + param_2)
                 ,(param_3 & 0x7f) << 1);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar4 = (param_3 & 0xff) * 2 + 4;
      FUN_0810d85c((uint)*(ushort *)((param_2 + 0x1f) * 2 + DAT_081229b8) + DAT_081229bc,5,iVar4);
      FUN_0810d85c((uint)*(ushort *)(iVar5 + 2) + iVar2,8,iVar4);
    }
  }
  else if (bVar1 == 2) {
    iVar5 = (param_3 & 0xff) * 2 + 4;
    FUN_0810d85c((uint)*(ushort *)((param_2 + 0x1f) * 2 + DAT_08122a28) + DAT_08122a2c,5,iVar5);
    FUN_0810d85c((uint)*(ushort *)(iVar4 + DAT_08122a30) + iVar3,8,iVar5);
  }
  return in_lr;
}


