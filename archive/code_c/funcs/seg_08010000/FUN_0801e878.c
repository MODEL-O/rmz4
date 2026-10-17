// undefined FUN_0801e878(void)
// entry 0x801e878


undefined4 FUN_0801e878(ushort param_1,int param_2)

{
  ushort *puVar1;
  undefined4 in_lr;
  
  puVar1 = DAT_0801e8d0;
  *DAT_0801e8d0 = param_1 & 0xff;
  FUN_08128be0(param_2,puVar1 + 2,8);
  FUN_08128be4(param_2 + 0x20,puVar1 + 0x12,DAT_0801e8d4);
  *(byte *)((int)puVar1 + 0x15) = *(byte *)((int)puVar1 + 0x15) & 0xfe;
  *(byte *)(puVar1 + 4) = (byte)puVar1[4] & 0x1f;
  *(byte *)((int)puVar1 + 9) = *(byte *)((int)puVar1 + 9) & 0xf8;
  *(undefined1 *)((int)puVar1 + 0x25) = 0;
  return in_lr;
}


