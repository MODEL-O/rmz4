// undefined FUN_08019460(void)
// entry 0x8019460


undefined4 FUN_08019460(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined4 local_28 [2];
  
  iVar2 = DAT_08019504;
  iVar1 = DAT_080194f4;
  uVar3 = *(uint *)(param_1 + 0x5c);
  if (*(short *)(DAT_080194f8 + DAT_080194f4) != 0) {
    FUN_08128be0(*DAT_080194fc + DAT_08019500,
                 (*(ushort *)((uVar3 >> 4) * 2 + DAT_08019504) & 0x1f00) * 8 + 0x6000000,0x200);
    local_28[0] = 0;
    FUN_08128be0(local_28,(*(ushort *)(((uVar3 & 0xffff) >> 4) * 2 + iVar2) & 0x1f00) * 8 +
                          DAT_08019508,0x1000200);
  }
  if (*(char *)(DAT_0801950c + iVar1) != '\b') {
    FUN_08007638(param_1,param_2);
  }
  return in_lr;
}


