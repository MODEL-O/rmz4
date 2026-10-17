// undefined FUN_080053ac(void)
// entry 0x80053ac


undefined8 FUN_080053ac(int *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08129120(param_2,0xf);
  iVar3 = FUN_08129120(param_3,10);
  bVar1 = ((byte *)param_1[3])[(uint)*(byte *)param_1[3] * iVar3 + iVar2 + 4];
  iVar2 = FUN_08129198(param_2,0xf);
  iVar3 = FUN_08129198(param_3,10);
  return CONCAT44(in_lr,(uint)*(byte *)((uint)*(ushort *)
                                               ((iVar3 * 0xf + (uint)bVar1 * 0x96 + iVar2) * 2 +
                                               param_1[2]) * 2 + *param_1));
}


