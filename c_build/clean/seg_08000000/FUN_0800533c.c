// undefined FUN_0800533c(void)
// entry 0x800533c


undefined4 FUN_0800533c(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uVar2 = *param_2;
  iVar3 = FUN_08128fb8(uVar2,0xf0);
  uVar5 = param_2[1];
  iVar4 = FUN_08128fb8(uVar5,0xa0);
  bVar1 = ((byte *)param_1[3])[(uint)*(byte *)param_1[3] * iVar4 + iVar3 + 4];
  iVar3 = FUN_08129050(uVar2,0xf0);
  iVar4 = FUN_08129050(uVar5,0xa0);
  return (uint)*(byte *)((uint)*(ushort *)
                                               (((iVar4 >> 4) * 0xf +
                                                (uint)bVar1 * 0x96 + (iVar3 >> 4)) * 2 + param_1[2])
                                        * 2 + *param_1);
}


