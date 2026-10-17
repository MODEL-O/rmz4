// undefined FUN_08003b58(void)
// entry 0x8003b58


void FUN_08003b58(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 local_20 [2];
  
  uVar2 = 0;
  do {
    uVar5 = 0;
    iVar1 = (int)(short)uVar2;
    do {
      iVar4 = (int)(short)uVar5;
      puVar6 = (undefined4 *)((iVar1 * 0x40 + iVar4 * 2) * 2 + param_1);
      puVar3 = (ushort *)((iVar1 * 0xf + iVar4) * 2 + param_3);
      *puVar6 = *(undefined4 *)((uint)*puVar3 * 8 + param_2);
      puVar6[0x10] = *(undefined4 *)((uint)*puVar3 * 8 + param_2 + 4);
      uVar5 = iVar4 + 1U & 0xffff;
      iVar4 = (int)((iVar4 + 1U) * 0x10000) >> 0x10;
    } while (iVar4 < 0xf);
    puVar6 = (undefined4 *)((iVar1 * 0x40 + iVar4 * 2) * 2 + param_1);
    *puVar6 = 0;
    puVar6[0x10] = 0;
    uVar2 = iVar1 + 1U & 0xffff;
  } while ((int)((iVar1 + 1U) * 0x10000) >> 0x10 < 10);
  local_20[0] = 0;
  FUN_08128be0(local_20,param_1 + 0x500,0x010000c0);
  return;
}


