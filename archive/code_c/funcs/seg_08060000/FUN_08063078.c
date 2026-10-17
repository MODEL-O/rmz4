// undefined FUN_08063078(void)
// entry 0x8063078


undefined4 FUN_08063078(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(int *)(param_1 + 200) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 200) + 0xbc) = 1;
    }
    FUN_08065a94(param_1,8);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb4) * 2 + DAT_08063120) * 4 +
                               DAT_0806311c)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 + DAT_08063124))
                              + (int)*(char *)(param_1 + 0x71)) * 0x18);
  piVar1 = (int *)(param_1 + 200);
  if (*piVar1 != 0) {
    if (1 < *(byte *)(*piVar1 + 0xc)) {
      *piVar1 = 0;
    }
    if (*piVar1 != 0) {
      return in_lr;
    }
  }
  *(undefined1 *)(param_1 + 0xe) = 4;
  *(undefined1 *)(param_1 + 0xf) = 0;
  return in_lr;
}


