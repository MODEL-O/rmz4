// undefined FUN_080cfdf8(void)
// entry 0x80cfdf8


undefined4 FUN_080cfdf8(int param_1)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int *piVar6;
  undefined4 in_lr;
  
  piVar6 = (int *)(param_1 + 0xb4);
  iVar3 = *piVar6 * -10;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar4 = *piVar6 + (iVar3 >> 8);
  *piVar6 = iVar4;
  iVar3 = DAT_080cfe7c;
  iVar4 = *(short *)((*(byte *)(param_1 + 0x10) + 0x40 & 0xff) * 2 + DAT_080cfe7c) * iVar4;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar4 >> 8);
  iVar3 = (int)*(short *)((uint)*(byte *)(param_1 + 0x10) * 2 + iVar3) * *piVar6;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar3 >> 8);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    piVar6 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cfe80);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar6 + 8);
    FUN_080cfee0(param_1);
  }
  else {
    puVar5 = (ushort *)(param_1 + 0xb8);
    iVar3 = (0x1c0 - (uint)*puVar5) * 0x14;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    uVar1 = *puVar5 + (short)((uint)iVar3 >> 8);
    *puVar5 = uVar1;
    *(ushort *)(param_1 + 0x50) = uVar1;
    *(ushort *)(param_1 + 0x52) = *puVar5;
    if ((*(char *)(param_1 + 0xd) == '\0') && (0x1a0 < *puVar5)) {
      FUN_08005784(param_1 + 0x74,DAT_080cfedc);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    FUN_0801cff0(param_1);
  }
  return in_lr;
}


