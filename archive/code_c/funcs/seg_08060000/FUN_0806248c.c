// undefined FUN_0806248c(void)
// entry 0x806248c


undefined4 FUN_0806248c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08065a94(param_1,5);
    iVar1 = *(int *)(param_1 + 0xd0) + 0xc800;
    *(int *)(param_1 + 0x5c) = iVar1;
    *(int *)(param_1 + 100) = iVar1 - *(int *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0xfffffff8;
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0x58);
    *(undefined1 *)(param_1 + 0x12) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb4) * 2 + DAT_080625c8) * 4 +
                               DAT_080625c4)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 + DAT_080625cc))
                              + (int)*(char *)(param_1 + 0x71)) * 0x18);
  piVar4 = (int *)(param_1 + 0xd4);
  if (*(char *)(param_1 + 0x12) != '\0') {
    iVar3 = *(int *)(param_1 + 0x60);
    iVar1 = -*(int *)(param_1 + 0x68);
    iVar2 = FUN_08128fb8(-iVar3,iVar1);
    if (*(int *)(param_1 + 0x58) + ((iVar3 * 2 + iVar1 * iVar2) * (iVar2 + 1) >> 1) <=
        *piVar4 + 0x8800) {
      *(int *)(param_1 + 0x68) = iVar1;
      *(undefined1 *)(param_1 + 0x12) = 0;
    }
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar1 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x60) = iVar1;
  if (iVar1 < DAT_080625d0) {
    *(int *)(param_1 + 0x60) = DAT_080625d0;
  }
  if (*(int *)(param_1 + 0x58) <= *piVar4 + 0x8800) {
    *(int *)(param_1 + 0x58) = *piVar4 + 0x8800;
  }
  iVar1 = (*(int *)(param_1 + 0xdc) + DAT_080625d4) - *piVar4;
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  iVar2 = *(int *)(param_1 + 0x58);
  iVar1 = FUN_08128fb8(((iVar2 + DAT_080625d4) - *piVar4) * -*(int *)(param_1 + 100),iVar1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x5c) + iVar1;
  if (iVar2 == *piVar4 + 0x8800) {
    *(undefined1 *)(param_1 + 0xe) = 3;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


