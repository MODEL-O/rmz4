// undefined FUN_0805dcd8(void)
// entry 0x805dcd8


undefined4 FUN_0805dcd8(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [4];
  
  FUN_08129258(auStack_20,DAT_0805dda0,6);
  FUN_081292b8(auStack_18,0,3);
  bVar1 = *(byte *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0805ee6c(param_1,auStack_20[(uint)bVar1 * 2]);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0xb4) + DAT_0805dda4;
    *(undefined4 *)(param_1 + 0x60) = 0x20;
    *(undefined4 *)(param_1 + 0x68) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_0805ddac) * 4 +
                               DAT_0805dda8)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 + DAT_0805ddb0) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x280 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x280;
  }
  if (*(int *)(param_1 + 0x5c) <= *(int *)(param_1 + 0x58)) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x5c);
    *(undefined1 *)(param_1 + 0xd) = auStack_18[bVar1];
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


