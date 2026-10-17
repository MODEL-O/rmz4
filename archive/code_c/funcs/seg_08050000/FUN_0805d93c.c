// undefined FUN_0805d93c(void)
// entry 0x805d93c


undefined4 FUN_0805d93c(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [4];
  
  FUN_08129258(auStack_20,DAT_0805da20,6);
  FUN_08129258(auStack_18,DAT_0805da24,3);
  bVar1 = *(byte *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(param_1 + 0x25) = 0x18;
    FUN_0805ee6c(param_1,auStack_20[(uint)bVar1 * 2]);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0xffffffe0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_0805da2c) * 4 +
                               DAT_0805da28)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 + DAT_0805da30) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x60) = iVar2;
  if (iVar2 < DAT_0805da34) {
    *(int *)(param_1 + 0x60) = DAT_0805da34;
  }
  if ((0x19000 < (*(int *)(DAT_0805da38 + 0x38) - *(int *)(param_1 + 0x54)) + 0xc800U) ||
     (0x16000 < (*(int *)(DAT_0805da38 + 0x3c) - *(int *)(param_1 + 0x58)) + 0xb000U)) {
    *(undefined1 *)(param_1 + 0xd) = auStack_18[bVar1];
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


