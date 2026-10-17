// undefined FUN_08018a58(void)
// entry 0x8018a58


undefined4 FUN_08018a58(int param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    puVar1 = (ushort *)(((*(uint *)(param_1 + 0x5c) & 0xffff) >> 4) * 2 + DAT_08018b10);
    *puVar1 = (ushort)DAT_08018b14 & *puVar1 | 3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  pbVar4 = (byte *)(DAT_08018b18 + DAT_08018b1c);
  if ((((*pbVar4 & 1) == 0) && (DAT_08018b20 < *(int *)(param_1 + 0x34))) &&
     (0x1e0 < *(int *)(param_1 + 0x38))) {
    FUN_08002b10(0x176);
    *pbVar4 = *pbVar4 | 1;
    FUN_0801fe64(8,*(int *)(DAT_08018b24 + DAT_08018b28) + 0x54);
  }
  pbVar4 = (byte *)(DAT_08018b18 + DAT_08018b1c);
  if ((((*pbVar4 & 2) == 0) && (DAT_08018b2c < *(int *)(param_1 + 0x34))) &&
     (*(int *)(param_1 + 0x38) <= DAT_08018b30)) {
    FUN_08002b10(DAT_08018b30 + -0x69);
    *pbVar4 = *pbVar4 | 2;
    FUN_0801fe64(8,*(int *)(DAT_08018b24 + DAT_08018b28) + 0x54);
  }
  iVar2 = DAT_08018b4c;
  iVar3 = DAT_08018b50;
  if (0x1e0 < *(int *)(param_1 + 0x38)) {
    iVar2 = DAT_08018b18;
    iVar3 = DAT_08018b34;
  }
  *(int *)(param_1 + 0x50) = (int)((uint)*(ushort *)(iVar2 + iVar3) << 0x10) >> 0x14;
  return in_lr;
}


