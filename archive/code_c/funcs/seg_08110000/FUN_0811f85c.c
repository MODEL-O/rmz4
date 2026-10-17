// undefined FUN_0811f85c(void)
// entry 0x811f85c


undefined4 FUN_0811f85c(int param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + 4) = 0;
  iVar2 = param_1 + DAT_0811f96c;
  *(undefined1 *)(iVar2 + 2) = 0;
  *(undefined1 *)(iVar2 + 5) = 0;
  *(undefined1 *)(iVar2 + 0x11) = 0;
  *(undefined1 *)(iVar2 + 0x13) = 0;
  *(undefined1 *)(iVar2 + 0x14) = 0;
  FUN_0811fb7c(param_1);
  puVar1 = DAT_0811f970;
  *DAT_0811f970 = (ushort)DAT_0811f974 & *DAT_0811f970 & (ushort)DAT_0811f978 | 0x1300;
  puVar1[3] = (ushort)DAT_0811f97c;
  puVar1[8] = 0;
  puVar1[9] = 0;
  FUN_08001d30(DAT_0811f980,0x4000);
  FUN_08002208(DAT_0811f984,0);
  iVar2 = DAT_0811f988 + param_1;
  FUN_080027b8(iVar2,DAT_0811f98c,0x26,0,0);
  FUN_08001d30(DAT_0811f990,
               ((uint)*(ushort *)(DAT_0811f994 + 0x86) - (uint)(*(ushort *)(DAT_0811f990 + 6) >> 6))
               * 0x20 + 0x10000);
  FUN_08002208(DAT_0811f998,
               ((uint)*(ushort *)(DAT_0811f99c + 0x86) - (uint)*(byte *)(DAT_0811f998 + 7)) * 0x20 +
               0x200);
  FUN_0810c778(param_1,0,0);
  FUN_0810c778(param_1,1,0);
  FUN_0810c778(param_1,1,1);
  FUN_0810ca08(param_1,0);
  FUN_0810ca08(param_1,1);
  FUN_0810ca08(param_1,2);
  FUN_0810ca08(param_1,3);
  FUN_0800249c(0x2f,0);
  FUN_08001f1c(iVar2,(puVar1[3] & 0x1f00) << 3,0x1000);
  FUN_08002b10(0x95);
  *(undefined1 *)(param_1 + 1) = 1;
  FUN_0811f9a0(param_1);
  return in_lr;
}


