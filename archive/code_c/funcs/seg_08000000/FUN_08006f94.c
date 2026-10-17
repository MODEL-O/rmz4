// undefined FUN_08006f94(void)
// entry 0x8006f94


undefined8 FUN_08006f94(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar7 = param_1 * 0x88 + DAT_0800701c;
  iVar8 = *param_2;
  iVar5 = param_2[1];
  iVar2 = FUN_08128fb8(iVar8 >> 8,0xf0);
  iVar3 = FUN_08128fb8(iVar5 >> 8,0xa0);
  pbVar6 = *(byte **)(iVar7 + 0x28);
  bVar1 = pbVar6[(uint)*pbVar6 * iVar3 + iVar2 + 4];
  uVar4 = FUN_08129050(iVar8 >> 8,0xf0);
  iVar2 = FUN_08129050(iVar5 >> 8,0xa0);
  return CONCAT44(in_lr,(uint)*(ushort *)
                               (((iVar2 << 0xc) >> 0x10) * 0x1e +
                               ((int)(((uVar4 & 0xfffff) >> 4) << 0x10) >> 0xf) +
                               (uint)bVar1 * 300 + *(int *)(iVar7 + 0x24)));
}


