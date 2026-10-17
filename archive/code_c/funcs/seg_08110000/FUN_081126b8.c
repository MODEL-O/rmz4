// undefined FUN_081126b8(void)
// entry 0x81126b8


undefined4
FUN_081126b8(uint param_1,uint param_2,undefined4 param_3,byte param_4,char param_5,
            undefined1 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar2 = DAT_08112848;
  iVar1 = DAT_08112844;
  FUN_0810d85c((uint)*(ushort *)((param_1 & 0xff) * 2 + 0x3e + DAT_08112844) + DAT_08112848,7,
               param_6);
  FUN_0810d85c((uint)*(ushort *)(((param_2 & 0xff) + 0x28) * 2 + iVar1) + iVar2,9,param_6);
  iVar3 = FUN_08129120(param_3,DAT_0811284c);
  FUN_0810d85c((uint)*(ushort *)((iVar3 + 0x1e) * 2 + iVar1) + iVar2,0xe,param_6);
  uVar4 = FUN_08129120(param_3,DAT_08112850);
  iVar3 = FUN_08129198(uVar4,10);
  FUN_0810d85c((uint)*(ushort *)((iVar3 + 0x1e) * 2 + iVar1) + iVar2,0xf,param_6);
  FUN_0810d85c((uint)*(ushort *)(iVar1 + 0xe) + iVar2,0x10,param_6);
  uVar4 = FUN_08129120(param_3,DAT_08112854);
  iVar3 = FUN_08129198(uVar4,6);
  FUN_0810d85c((uint)*(ushort *)((iVar3 + 0x1e) * 2 + iVar1) + iVar2,0x11,param_6);
  uVar4 = FUN_08129120(param_3,0xe10);
  iVar3 = FUN_08129198(uVar4,10);
  FUN_0810d85c((uint)*(ushort *)((iVar3 + 0x1e) * 2 + iVar1) + iVar2,0x12,param_6);
  FUN_0810d85c((uint)*(ushort *)(iVar1 + 0x10) + iVar2,0x13,param_6);
  uVar4 = FUN_08129120(param_3,600);
  iVar3 = FUN_08129198(uVar4,6);
  FUN_0810d85c((uint)*(ushort *)((iVar3 + 0x1e) * 2 + iVar1) + iVar2,0x14,param_6);
  uVar4 = FUN_08129120(param_3,0x3c);
  iVar3 = FUN_08129198(uVar4,10);
  FUN_0810d85c((uint)*(ushort *)((iVar3 + 0x1e) * 2 + iVar1) + iVar2,0x15,param_6);
  if (param_4 != 0) {
    if (9 < param_4) {
      uVar5 = FUN_08129120(param_4,10);
      FUN_0810d85c((uint)*(ushort *)((uVar5 & 0xff) * 2 + 0x3c + iVar1) + iVar2,0x17,param_6);
    }
    uVar5 = FUN_08129198(param_4,10);
    FUN_0810d85c((uint)*(ushort *)((uVar5 & 0xff) * 2 + 0x3c + iVar1) + iVar2,0x18,param_6);
  }
  if (param_5 == '\x01') {
    FUN_0810d85c((uint)*(ushort *)(DAT_08112844 + 6) + DAT_08112848,0x19,param_6);
  }
  else if (param_5 == '\x02') {
    FUN_0810d85c((uint)*(ushort *)(DAT_08112880 + 8) + DAT_08112884,0x19,param_6);
  }
  return in_lr;
}


