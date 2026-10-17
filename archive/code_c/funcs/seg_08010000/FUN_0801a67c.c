// undefined FUN_0801a67c(void)
// entry 0x801a67c


undefined4 FUN_0801a67c(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  ushort *puVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  iVar2 = DAT_0801a6d4;
  puVar1 = DAT_0801a6d0;
  if (*(char *)(param_1 + 0xe) == '\0') {
    puVar3 = (ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + DAT_0801a6d8);
    *puVar3 = (ushort)DAT_0801a6dc & *puVar3 | 2;
    *puVar1 = (short)DAT_0801a6e0;
    *(undefined1 *)(iVar2 + DAT_0801a6e4) = 0x10;
    puVar1[1] = 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  pbVar4 = (byte *)(iVar2 + DAT_0801a6e4);
  puVar1[1] = *pbVar4 & 0x1f | (0x10 - (ushort)*pbVar4) * 0x100;
  return in_lr;
}


