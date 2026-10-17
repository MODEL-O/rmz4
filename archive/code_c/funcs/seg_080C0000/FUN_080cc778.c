// undefined FUN_080cc778(void)
// entry 0x80cc778


undefined4 FUN_080cc778(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(char *)(iVar4 + 0xd) == '\x14') {
    if (*(char *)(param_1 + 0x13) == *(char *)(param_1 + 0x12)) {
      FUN_08005784(param_1 + 0x74,(uint)*(byte *)(param_1 + 0x11) * 0x60 + DAT_080cc7c4);
    }
    else {
      FUN_08005784(param_1 + 0x74,DAT_080cc7f4);
    }
    *(byte *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + 1U & 1;
    if ((*(byte *)(iVar4 + 10) & 0x10) == 0) {
      uVar3 = (uint)*(byte *)(iVar4 + 0x24);
    }
    else {
      uVar3 = -(uint)*(byte *)(iVar4 + 0x24) & 0xff;
    }
    *(char *)(param_1 + 0x24) = (char)uVar3;
    uVar2 = *(undefined4 *)(iVar4 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    iVar4 = DAT_080cc844;
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         ((int)*(short *)(uVar3 * 2 + DAT_080cc844) * *(int *)(param_1 + 100) >> 8);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) -
         ((int)*(short *)((uVar3 + 0x40 & 0xff) * 2 + iVar4) * *(int *)(param_1 + 100) >> 8);
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cc7a0);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080cc0bc(param_1);
  }
  return in_lr;
}


