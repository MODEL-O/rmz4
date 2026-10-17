// undefined FUN_08084020(void)
// entry 0x8084020


undefined4 FUN_08084020(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,0x1c00);
    piVar3 = DAT_08084090;
    iVar5 = *DAT_08084090;
    iVar4 = *(int *)(param_1 + 0x54) - *(int *)(iVar5 + 0x54);
    *(int *)(param_1 + 0x5c) = iVar4;
    iVar5 = (*(int *)(param_1 + 0x58) - *(int *)(iVar5 + 0x58)) + DAT_08084094;
    *(int *)(param_1 + 0x60) = iVar5;
    iVar4 = iVar4 >> 8;
    iVar5 = iVar5 >> 8;
    sVar1 = FUN_08128bf4(iVar4 * iVar4 + iVar5 * iVar5);
    if (sVar1 == 0) {
      uVar2 = DAT_080840d8;
      if ((*(byte *)(*piVar3 + 10) & 0x10) != 0) {
        uVar2 = 0x600;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar2;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    else {
      iVar5 = FUN_08128fb8(*(undefined4 *)(param_1 + 0x5c),sVar1);
      *(int *)(param_1 + 0x5c) = iVar5;
      iVar4 = FUN_08128fb8(*(undefined4 *)(param_1 + 0x60),sVar1);
      *(int *)(param_1 + 0x5c) = iVar5 * 6;
      *(int *)(param_1 + 0x60) = iVar4 * 6;
    }
    if (*(int *)(param_1 + 0x5c) < 1) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined1 *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined1 *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    }
    FUN_08005784(param_1 + 0x74,DAT_08084168);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar5;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  sVar1 = FUN_08007c7c(iVar5 + *(int *)(param_1 + 0x5c));
  if ((sVar1 != 0) ||
     (sVar1 = FUN_08007c7c(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c),
                           *(int *)(param_1 + 0x58) + DAT_0808416c), sVar1 != 0)) {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08084170);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_080839a8(param_1);
  }
  return in_lr;
}


