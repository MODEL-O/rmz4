// undefined FUN_0805c7e8(void)
// entry 0x805c7e8


undefined4 FUN_0805c7e8(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  undefined1 auStack_14 [8];
  
  FUN_08129258(auStack_14,DAT_0805c8c0,6);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    FUN_0805ee6c(param_1,auStack_14[(uint)*(byte *)(param_1 + 0x10) * 2]);
    iVar3 = *(int *)(DAT_0805c8c4 + 0x38);
    *(int *)(param_1 + 0xd0) = iVar3;
    iVar3 = iVar3 + ((bVar1 & 1) * 2 + -1) * 0x4800;
    *(int *)(param_1 + 0xd4) = iVar3;
    *(int *)(param_1 + 0x54) = iVar3;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb4) + DAT_0805c8c8;
    *(undefined4 *)(param_1 + 0x60) = 0x280;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_0805c8d0) * 4 +
                               DAT_0805c8cc)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 + DAT_0805c8d4) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar2;
  iVar3 = *(int *)(param_1 + 0xb4) + DAT_0805c8d8;
  if (iVar3 <= iVar2) {
    *(int *)(param_1 + 0x58) = iVar3;
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


