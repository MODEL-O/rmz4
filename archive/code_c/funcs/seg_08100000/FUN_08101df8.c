// undefined FUN_08101df8(void)
// entry 0x8101df8


undefined4 FUN_08101df8(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xb8) = **(undefined4 **)(param_1 + 0x28);
  FUN_08101d54(param_1,0);
  FUN_08101d54(param_1,1);
  FUN_08101d54(param_1,2);
  bVar1 = *(byte *)(DAT_08101e5c + 0xce);
  *(undefined4 *)(param_1 + 0xbc) = 0xa6;
  FUN_0800249c(0xa6,(uint)bVar1 << 5 | 0x200);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08101e60);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_08101dc8(param_1);
  return in_lr;
}


