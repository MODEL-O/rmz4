// undefined FUN_0805c8dc(void)
// entry 0x805c8dc


undefined4 FUN_0805c8dc(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined1 auStack_14 [8];
  
  FUN_08129258(auStack_14,DAT_0805c9cc,6);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0805ee6c(param_1,auStack_14[(uint)*(byte *)(param_1 + 0x10) * 2]);
    *(undefined4 *)(param_1 + 0x60) = 0x280;
    *(undefined4 *)(param_1 + 0x68) = 0x20;
    *(uint *)(param_1 + 0x5c) =
         (uint)(*(int *)(param_1 + 0xb4) + DAT_0805c9d0 <= *(int *)(param_1 + 0x58));
    *(int *)(param_1 + 100) = *(int *)(param_1 + 0x58);
    *(undefined1 *)(param_1 + 0x12) = 0x50;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_0805c9d8) * 4 +
                               DAT_0805c9d4)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 + DAT_0805c9dc) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  iVar1 = *(int *)(param_1 + 0x60);
  *(uint *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) +
       iVar1 * (((uint)*(byte *)(param_1 + 0x13) -
                 (*(int *)(param_1 + 100) - (*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x5c)) >>
                 0x1f) & 1) * 2 + -1);
  if (*(byte *)(param_1 + 0x13) == 0) {
    iVar1 = iVar1 - *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar1;
    if (iVar1 < 0x20) {
      *(undefined4 *)(param_1 + 0x60) = 0x20;
      *(undefined1 *)(param_1 + 0x13) = 1;
      *(uint *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1U & 1;
    }
  }
  else {
    iVar1 = iVar1 + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar1;
    if (0x280 < iVar1) {
      if (((*(byte *)(DAT_0805c9e0 + 0x12) & 1) == 0) && (*(char *)(param_1 + 0x12) == '\0')) {
        FUN_0805ef70(param_1);
      }
      else {
        *(undefined4 *)(param_1 + 0x60) = 0x280;
        *(undefined1 *)(param_1 + 0x13) = 0;
      }
    }
  }
  return in_lr;
}


