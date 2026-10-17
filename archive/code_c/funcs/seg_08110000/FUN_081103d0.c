// undefined FUN_081103d0(void)
// entry 0x81103d0


undefined4 FUN_081103d0(int param_1)

{
  ushort *puVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 local_2c [2];
  undefined2 local_24;
  
  puVar1 = DAT_081104b0;
  FUN_08001fd4(DAT_081104ac,(*DAT_081104b0 & 0x1f00) << 3,0x580,0x3c0);
  *DAT_081104b4 = 0;
  local_24 = 0;
  puVar1[-2] = (ushort)DAT_081104b8 & puVar1[-2] & (ushort)DAT_081104bc | 0x1200;
  uVar2 = DAT_081104c0;
  puVar1[1] = (ushort)DAT_081104c0;
  local_2c[0] = 0;
  FUN_08128be0(local_2c,(uVar2 & 0x1f00) * 8 + 0x6000000,uVar2 & 0x1f00 | 0x1000000);
  puVar1[6] = 0;
  puVar1[7] = 0;
  FUN_08003384(param_1 + 0x14);
  FUN_08002c0c(param_1 + 0x220,(undefined4 *)(param_1 + 0x22c),0,0);
  FUN_080033bc(param_1 + 0x14,param_1 + 0x220);
  *(undefined4 *)(param_1 + 0x22c) = 0x7800;
  *(undefined4 *)(param_1 + 0x230) = 0x5000;
  FUN_0801c734();
  *DAT_081104c4 = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 7) = (undefined1)local_24;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 5) * 4 + DAT_081104c8));
  return in_lr;
}


