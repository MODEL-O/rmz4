// undefined FUN_08107848(void)
// entry 0x8107848


undefined4 FUN_08107848(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    uVar2 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(undefined2 *)(DAT_081078bc + 0x1c) = 0x348;
    iVar1 = DAT_081078c0;
    *(undefined2 *)(DAT_081078c0 + 0x1c) = 8;
    FUN_08001d30(DAT_081078c4,(0x348 - (uint)(*(ushort *)(DAT_081078c4 + 6) >> 6)) * 0x20 + 0x10000)
    ;
    FUN_08002208(DAT_081078c8,
                 ((uint)*(ushort *)(iVar1 + 0x1c) - (uint)*(byte *)(DAT_081078c8 + 7)) * 0x20 +
                 0x200);
    FUN_0801cf00(param_1,DAT_081078cc);
    *(undefined1 *)(param_1 + 0x25) = 0x1f;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') {
    return in_lr;
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


