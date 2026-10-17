// undefined FUN_08118348(void)
// entry 0x8118348


undefined4 FUN_08118348(short param_1,uint param_2,undefined1 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_08118398;
  uVar3 = 0;
  while( true ) {
    uVar2 = FUN_08129198(param_1,10);
    FUN_0810d85c((uint)*(ushort *)((uVar2 & 0xffff) * 2 + 0x3c + iVar1) + DAT_0811839c,
                 (param_2 & 0xff) - uVar3,param_3);
    param_1 = FUN_08129120(param_1,10);
    if (param_1 == 0) break;
    uVar3 = uVar3 + 1 & 0xff;
  }
  return in_lr;
}


