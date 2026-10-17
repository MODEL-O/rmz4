// undefined FUN_0805e478(void)
// entry 0x805e478


undefined4 FUN_0805e478(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0805ee6c(param_1,0x11);
    *(undefined4 *)(param_1 + 0x60) = 0x280;
    *(undefined4 *)(param_1 + 0x68) = 0x20;
    *(uint *)(param_1 + 0x5c) =
         (uint)(*(int *)(param_1 + 0xb4) + DAT_0805e554 <= *(int *)(param_1 + 0x58));
    *(int *)(param_1 + 100) = *(int *)(param_1 + 0x58);
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_0805e55c) * 4 +
                               DAT_0805e558)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 + DAT_0805e560) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  piVar1 = (int *)(param_1 + 0xcc);
  if ((*piVar1 != 0) && (1 < *(byte *)(*piVar1 + 0xc))) {
    *piVar1 = 0;
  }
  uVar3 = (uint)*(byte *)(param_1 + 0x13) -
          (*(int *)(param_1 + 100) - (*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x5c)) >> 0x1f)
          & 1;
  iVar2 = *(int *)(param_1 + 0x60);
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2 * (uVar3 * 2 + -1);
  if (*(byte *)(param_1 + 0x13) == 0) {
    iVar2 = iVar2 - *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar2;
    if (iVar2 < 0x20) {
      *(undefined4 *)(param_1 + 0x60) = 0x20;
      *(undefined1 *)(param_1 + 0x13) = 1;
      *(uint *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1U & 1;
    }
  }
  else {
    iVar2 = iVar2 + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x280 < iVar2) {
      if ((uVar3 == 0) || (*piVar1 != 0)) {
        *(undefined4 *)(param_1 + 0x60) = 0x280;
        *(undefined1 *)(param_1 + 0x13) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0xd) = 0;
        *(undefined1 *)(param_1 + 0xe) = 0;
        *(undefined1 *)(param_1 + 0xf) = 0;
      }
    }
  }
  return in_lr;
}


