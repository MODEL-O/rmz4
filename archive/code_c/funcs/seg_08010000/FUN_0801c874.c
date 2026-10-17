// undefined FUN_0801c874(void)
// entry 0x801c874


undefined4 FUN_0801c874(int param_1)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  uint *puVar6;
  undefined4 in_lr;
  
  FUN_080054b4();
  iVar5 = *(int *)(*(int *)(param_1 + 0xc) + 4);
  *(int *)(param_1 + 0xc) = iVar5;
  puVar4 = DAT_0801c920;
  pcVar3 = DAT_0801c91c;
  iVar2 = DAT_0801c918;
  uVar1 = DAT_0801c914;
  if (iVar5 != param_1 + 0x14) {
    do {
      if ((uVar1 & *(ushort *)(iVar5 + 10)) == uVar1) {
        if ((((*(uint *)(iVar5 + 0x8c) & 1) != 0) || ((*(uint *)(iVar5 + 0x90) & 1) != 0)) ||
           ((*(byte *)(iVar5 + 0x94) & 2) != 0)) {
          puVar6 = (uint *)((uint)(*(byte *)(iVar5 + 0x1d) >> 5) * 4 + iVar2);
          *puVar6 = *puVar6 | 1 << (*(byte *)(iVar5 + 0x1d) & 0x1f);
        }
        if (((*pcVar3 == '\0') && ((*(uint *)(iVar5 + 0x8c) & 1) != 0)) &&
           (*(char *)(*(int *)(iVar5 + 0x74) + 1) != '\0')) {
          *puVar4 = 1;
        }
      }
      iVar5 = *(int *)(*(int *)(param_1 + 0xc) + 4);
      *(int *)(param_1 + 0xc) = iVar5;
    } while (iVar5 != param_1 + 0x14);
  }
  return in_lr;
}


