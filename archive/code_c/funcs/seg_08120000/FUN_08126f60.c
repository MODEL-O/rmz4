// undefined FUN_08126f60(void)
// entry 0x8126f60


undefined4 FUN_08126f60(undefined4 param_1,int param_2)

{
  uint3 *puVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined8 uVar3;
  
  puVar1 = (uint3 *)(*(int *)(param_2 + 0x40) + 1);
  uVar2 = (uint)*(byte *)puVar1;
  uVar3 = FUN_08126f38((uint)*puVar1 << 8);
  *(uint *)((int)((ulonglong)uVar3 >> 0x20) + 0x40) = (uint)uVar3 | uVar2;
  return in_lr;
}


