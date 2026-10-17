// undefined FUN_0805a1d4(void)
// entry 0x805a1d4


undefined4 FUN_0805a1d4(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_0805a220);
    if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != DAT_0805a224) {
      FUN_0801cf00(param_1);
      *(undefined1 *)(param_1 + 0xbd) = 1;
    }
    if ((bVar1 & 1) == 0) {
      iVar2 = FUN_0805c3a8(param_1);
      iVar4 = 0x2000;
    }
    else {
      iVar2 = FUN_0805c3a8(param_1);
      iVar4 = 0xd000;
    }
    *(int *)(param_1 + 100) = iVar2 + iVar4;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0xb4) + DAT_0805a2d4;
    iVar2 = *(int *)(param_1 + 100) - *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x5c) = iVar2;
    iVar2 = FUN_08128fb8(iVar2 * 0x100,((bVar1 & 1) * 2 + -1) * 0x240);
    *(int *)(param_1 + 0x60) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x60) = 1;
    }
    *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0x60) >> 8;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  piVar6 = (int *)(param_1 + 0xc0);
  if (*piVar6 != 0) {
    *piVar6 = *piVar6 + -1;
  }
  uVar5 = *(undefined4 *)(param_1 + 0x60);
  iVar2 = FUN_08128fb8(*(int *)(param_1 + 0x5c) * *piVar6 * 0x100,uVar5);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 100) - iVar2;
  uVar3 = FUN_08128fb8(*piVar6 << 0x11,uVar5);
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x68) + *(short *)((uVar3 & 0xff) * 2 + DAT_0805a2d8) * 0xc;
  if (*piVar6 == 0) {
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


