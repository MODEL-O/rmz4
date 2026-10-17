// undefined FUN_0805e2d0(void)
// entry 0x805e2d0


undefined4 FUN_0805e2d0(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08001d30(DAT_0805e39c,
                 ((uint)*(ushort *)(DAT_0805e3a0 + 0xa8) -
                 (uint)(*(ushort *)(DAT_0805e39c + 6) >> 6)) * 0x20 + 0x10000);
    FUN_08002208(DAT_0805e3a4,
                 ((uint)*(ushort *)(DAT_0805e3a8 + 0xa8) - (uint)*(byte *)(DAT_0805e3a4 + 7)) * 0x20
                 + 0x200);
    if (*(int *)(param_1 + 0xcc) == 0) {
      uVar3 = DAT_0805e3b0 * *DAT_0805e3ac + DAT_0805e3b4;
      *DAT_0805e3ac = uVar3 & 0x7fffffff;
      iVar2 = FUN_080c4bd4(param_1,(uVar3 & 0x7fffffff) >> 0x10 & 3);
      *(int *)(param_1 + 0xcc) = iVar2;
    }
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_0805e3bc) * 4 +
                               DAT_0805e3b8)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 + DAT_0805e3c0) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  iVar2 = *(int *)(param_1 + 0xcc);
  if (iVar2 != 0) {
    if (*(byte *)(iVar2 + 0xc) < 2) {
      if (*(char *)(iVar2 + 0xd) != '\x01') {
        return in_lr;
      }
    }
    else {
      *(int *)(param_1 + 0xcc) = 0;
    }
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


