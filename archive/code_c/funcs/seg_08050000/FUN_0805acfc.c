// undefined FUN_0805acfc(void)
// entry 0x805acfc


undefined4 FUN_0805acfc(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_0805add0);
    if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != DAT_0805add4) {
      FUN_0801cf00(param_1);
      *(undefined1 *)(param_1 + 0xbd) = 1;
    }
    iVar2 = FUN_0805c3a8(param_1);
    iVar2 = (iVar2 + ((bVar1 >> 4 & 1) * -2 + 1) * 0x4000 + 0x7800) - *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x5c) = iVar2;
    iVar4 = *(int *)(param_1 + 0xb4) - (*(int *)(param_1 + 0x58) + DAT_0805add8);
    *(int *)(param_1 + 0x60) = iVar4;
    *(int *)(param_1 + 100) = *(int *)(param_1 + 0x54) + iVar2;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x58) + iVar4;
    *(undefined1 *)(param_1 + 0x12) = 0x28;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar5 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar5;
  uVar3 = FUN_08128fb8((uint)*(byte *)(param_1 + 0x12) << 6,0x28);
  iVar4 = (int)*(short *)((uVar3 & 0xff) * 2 + DAT_0805addc);
  iVar2 = iVar4 * *(int *)(param_1 + 0x5c);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 100) - (iVar2 >> 8);
  iVar4 = iVar4 * *(int *)(param_1 + 0x60);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68) - (iVar4 >> 8);
  if (cVar5 == '\0') {
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


