// undefined FUN_0801f134(void)
// entry 0x801f134


undefined4 FUN_0801f134(uint param_1,undefined1 param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 in_lr;
  
  puVar1 = DAT_0801f180;
  param_1 = param_1 & 0xff;
  *DAT_0801f180 = (short)param_1;
  *(undefined1 *)(puVar1 + 1) = param_2;
  *(undefined1 *)((int)puVar1 + 3) = 0xff;
  puVar1[5] = 0;
  iVar2 = DAT_0801f184;
  FUN_08038354(DAT_0801f184);
  FUN_0801e9ac(param_1,iVar2 + -0x48);
  if ((*(uint *)(*DAT_0801f188 + 0x10) & 1 << *(sbyte *)(param_1 + DAT_0801f18c)) == 0) {
    *(byte *)(iVar2 + -0xd8) = *(byte *)(iVar2 + -0xd8) & 0xdf;
  }
  else {
    *(byte *)(iVar2 + -0xd8) = *(byte *)(iVar2 + -0xd8) | 0x20;
  }
  iVar2 = DAT_0801f210;
  FUN_0801e878(param_1,DAT_0801f210);
  FUN_08128be0(iVar2 + 0xd8,iVar2 + 0x11c,0);
  FUN_08128be4(iVar2 + 0xd8,iVar2 + 0x11c,DAT_0801f214);
  *(ushort *)(iVar2 + -0xe) = (ushort)*(byte *)(*DAT_0801f218 + 1);
  FUN_0801e918(iVar2 + 0x24);
  FUN_08128be0(iVar2 + 0x48,iVar2 + 100,0);
  FUN_08128be4(iVar2 + 0x48,iVar2 + 100,DAT_0801f21c);
  FUN_08128be0(iVar2 + 0x80,iVar2 + 0x88,0);
  FUN_08128be4(iVar2 + 0x80,iVar2 + 0x88,DAT_0801f220);
  return in_lr;
}


