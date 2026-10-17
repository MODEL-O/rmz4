// undefined FUN_08058e74(void)
// entry 0x8058e74


undefined4 FUN_08058e74(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    FUN_0801cf00(param_1,DAT_08058ea4);
    uVar1 = DAT_08058f5c;
    if (*(int *)(param_1 + 0xbc) < *(int *)(param_1 + 0xb8)) {
      uVar1 = 0x200;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                                         *(undefined1 *)(param_1 + 0x70)) +
                                         DAT_08058f64) * 4 + DAT_08058f60)) * 0x18 + DAT_08058f68);
  piVar2 = (int *)(param_1 + 0xbc);
  iVar3 = *piVar2 + *(int *)(param_1 + 0x60);
  *piVar2 = iVar3;
  *(int *)(param_1 + 0x58) =
       iVar3 + *(short *)((uint)*(byte *)(param_1 + 0xb5) * 2 + DAT_08058f6c) * 2;
  if (((*(int *)(param_1 + 0x60) < 0) && (iVar3 <= *(int *)(param_1 + 0xb8))) ||
     ((0 < *(int *)(param_1 + 0x60) && (*(int *)(param_1 + 0xb8) <= iVar3)))) {
    *piVar2 = *(int *)(param_1 + 0xb8);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0xb8) +
         *(short *)((uint)*(byte *)(param_1 + 0xb5) * 2 + DAT_08058f6c) * 2;
    FUN_08059548(param_1);
  }
  return in_lr;
}


