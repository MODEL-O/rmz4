// undefined FUN_08002664(void)
// entry 0x8002664


undefined4 FUN_08002664(void)

{
  ushort *puVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 local_8;
  undefined4 uStack_4;
  
  puVar1 = DAT_080026ac;
  *(int *)DAT_080026ac = (ushort)DAT_080026b0 & *(int *)DAT_080026ac & (ushort)DAT_080026b4;
  iVar2 = DAT_080026b8;
  local_8 = 0;
  *(undefined4 **)DAT_080026b8 = &local_8;
  *(ushort **)(iVar2 + 4) = puVar1 + 2;
  *(undefined4 *)(iVar2 + 8) = DAT_080026bc;
  puVar1[2] = (ushort)DAT_080026c0;
  puVar1[3] = (ushort)DAT_080026c4;
  puVar1[4] = (ushort)DAT_080026c8;
  puVar1[5] = (ushort)DAT_080026cc;
  uStack_4 = in_lr;
  FUN_080026d0();
  return uStack_4;
}


