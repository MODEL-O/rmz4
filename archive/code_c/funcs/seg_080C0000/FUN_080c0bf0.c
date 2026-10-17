// undefined FUN_080c0bf0(void)
// entry 0x80c0bf0


undefined4 FUN_080c0bf0(int param_1)

{
  byte bVar1;
  byte bVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [8];
  undefined1 *local_20 [2];
  
  FUN_08129258(auStack_2c,DAT_080c0c68,3);
  FUN_08129258(auStack_28,DAT_080c0c6c,5);
  iVar4 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x11);
  bVar2 = *(byte *)(param_1 + 0xb4);
  if (*(char *)(param_1 + 0xf) == '\0') {
    local_20[0] = auStack_2c;
    local_20[1] = auStack_28;
    FUN_08005784(param_1 + 0x74,DAT_080c0c70);
    puVar3 = (ushort *)(iVar4 + 0xb4);
    *puVar3 = (ushort)(1 << local_20[bVar1][bVar2]) | *puVar3;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  return in_lr;
}


