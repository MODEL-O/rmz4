// undefined FUN_08062b90(void)
// entry 0x8062b90


undefined4 FUN_08062b90(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  byte abStack_28 [8];
  int local_20;
  int local_1c;
  
  FUN_08129258(abStack_28,DAT_08062ccc,4);
  FUN_08129258(abStack_28 + 4,DAT_08062cd0,4);
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x10c);
    iVar3 = (uint)(DAT_08062cdc <
                  (uint)((*(int *)(*DAT_08062cd4 + 0x54) - *(int *)(param_1 + 0x54)) + DAT_08062cd8)
                  ) * 2;
    FUN_0806635c(abStack_28 + 4 + iVar3,2);
    iVar4 = (bVar1 >> 4 & 1) * 2;
    local_20 = *(int *)(param_1 + 0x54) + (iVar4 + -1) * 0x800;
    local_1c = *(int *)(param_1 + 0x58) + DAT_08062ce0;
    FUN_080c71c8(param_1,&local_20,
                 (uint)abStack_28[iVar3] + iVar4 * (0x140 - (uint)abStack_28[iVar3]) & 0xff);
    FUN_080c71c8(param_1,&local_20,
                 (uint)abStack_28[iVar3 + 1] + iVar4 * (0x140 - (uint)abStack_28[iVar3 + 1]) & 0xff)
    ;
    FUN_08065a94(param_1,6);
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb4) * 2 + DAT_08062ce8) * 4 +
                               DAT_08062ce4)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 + DAT_08062cec))
                              + (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (((*(char *)(param_1 + 0x12) == '\0') ||
      (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) &&
     (*(char *)(param_1 + 0x73) == '\x03')) {
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


