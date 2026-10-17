// undefined FUN_08002664(void)
// entry 0x8002664


undefined4 FUN_08002664(void)

{
  ushort *puVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 local_8;
  undefined4 uStack_4;
  
  puVar1 = 0x02000a00;
  (*(ushort *)0x02000a00) = (ushort)0x0000fff8 & (*(ushort *)0x02000a00) & (ushort)0x0000b0ff;
  iVar2 = 0x040000d4;
  local_8 = 0;
  *(undefined4 **)0x040000d4 = &local_8;
  *(ushort **)(iVar2 + 4) = puVar1 + 2;
  *(undefined4 *)(iVar2 + 8) = 0x8500000e;
  puVar1[2] = (ushort)0x0000c008;
  puVar1[3] = (ushort)0x00004205;
  puVar1[4] = (ushort)0x00004406;
  puVar1[5] = (ushort)0x00004807;
  uStack_4 = in_lr;
  FUN_080026d0();
  return uStack_4;
}


