// undefined FUN_08122a34(void)
// entry 0x8122a34


undefined4
FUN_08122a34(uint param_1,uint param_2,undefined4 param_3,byte param_4,char param_5,int param_6)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 in_lr;
  
  iVar3 = DAT_08122bbc;
  iVar2 = DAT_08122bb8;
  uVar7 = param_6 * 0x1000000 + 0x4000000U >> 0x18;
  FUN_0810d85c((uint)*(ushort *)((param_1 & 0xff) * 2 + 0x3e + DAT_08122bb8) + DAT_08122bbc,5,uVar7)
  ;
  FUN_0810d85c((uint)*(ushort *)(((param_2 & 0xff) + 0x28) * 2 + iVar2) + iVar3,8,uVar7);
  iVar4 = FUN_08129120(param_3,DAT_08122bc0);
  FUN_0810d85c((uint)*(ushort *)((iVar4 + 0x1e) * 2 + iVar2) + iVar3,0xd,uVar7);
  uVar5 = FUN_08129120(param_3,DAT_08122bc4);
  iVar4 = FUN_08129198(uVar5,10);
  FUN_0810d85c((uint)*(ushort *)((iVar4 + 0x1e) * 2 + iVar2) + iVar3,0xe,uVar7);
  FUN_0810d85c((uint)*(ushort *)(iVar2 + 0xe) + iVar3,0xf,uVar7);
  uVar5 = FUN_08129120(param_3,DAT_08122bc8);
  iVar4 = FUN_08129198(uVar5,6);
  FUN_0810d85c((uint)*(ushort *)((iVar4 + 0x1e) * 2 + iVar2) + iVar3,0x10,uVar7);
  uVar5 = FUN_08129120(param_3,0xe10);
  iVar4 = FUN_08129198(uVar5,10);
  FUN_0810d85c((uint)*(ushort *)((iVar4 + 0x1e) * 2 + iVar2) + iVar3,0x11,uVar7);
  FUN_0810d85c((uint)*(ushort *)(iVar2 + 0x10) + iVar3,0x12,uVar7);
  uVar5 = FUN_08129120(param_3,600);
  iVar4 = FUN_08129198(uVar5,6);
  FUN_0810d85c((uint)*(ushort *)((iVar4 + 0x1e) * 2 + iVar2) + iVar3,0x13,uVar7);
  uVar5 = FUN_08129120(param_3,0x3c);
  iVar4 = FUN_08129198(uVar5,10);
  FUN_0810d85c((uint)*(ushort *)((iVar4 + 0x1e) * 2 + iVar2) + iVar3,0x14,uVar7);
  if (param_4 != 0) {
    if (9 < param_4) {
      uVar6 = FUN_08129120(param_4,10);
      FUN_0810d85c((uint)*(ushort *)((uVar6 & 0xff) * 2 + 0x3c + iVar2) + iVar3,0x16,uVar7);
    }
    uVar6 = FUN_08129198(param_4,10);
    FUN_0810d85c((uint)*(ushort *)((uVar6 & 0xff) * 2 + 0x3c + iVar2) + iVar3,0x17,uVar7);
  }
  if (param_5 == '\x01') {
    uVar1 = *(ushort *)(DAT_08122bb8 + 6);
  }
  else {
    if (param_5 != '\x02') {
      if (param_5 != '\x03') {
        return in_lr;
      }
      FUN_0810d85c((uint)*(ushort *)(DAT_08122c18 + 0x16) + DAT_08122c1c,0x19,uVar7);
      return in_lr;
    }
    uVar1 = *(ushort *)(DAT_08122be8 + 8);
  }
  FUN_0810d85c((uint)uVar1 + DAT_08122bec,0x19,uVar7);
  return in_lr;
}


