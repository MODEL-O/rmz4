// undefined FUN_08057ee8(void)
// entry 0x8057ee8


undefined4 FUN_08057ee8(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_08057f10);
    iVar1 = *(int *)(param_1 + 0xcc) + 0xf000;
    iVar3 = DAT_08057f14;
    if (iVar1 <= *(int *)(param_1 + 0x54)) {
      if (iVar1 < *(int *)(param_1 + 0x54)) {
        iVar3 = 0x400;
      }
      else {
        uVar2 = *DAT_08057fb4 * DAT_08057fb8 + DAT_08057fbc;
        *DAT_08057fb4 = uVar2 & 0x7fffffff;
        iVar3 = (((uVar2 & 0x7fffffff) >> 0x10 & 2) - 1) * 0x400;
      }
    }
    *(int *)(param_1 + 0x5c) = iVar3;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                                         *(undefined1 *)(param_1 + 0x70)) +
                                         DAT_08057fc4) * 4 + DAT_08057fc0)) * 0x18 + DAT_08057fc8);
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  if (0x23000 < (iVar3 - *(int *)(param_1 + 0xcc)) + 0x2800U) {
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


