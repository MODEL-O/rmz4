// undefined FUN_08092a6c(void)
// entry 0x8092a6c


undefined4 FUN_08092a6c(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_08092b0c);
    FUN_0801cf00(param_1,*(undefined2 *)
                          (((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 2U) + DAT_08092b10));
    FUN_0801cff0(param_1);
    iVar3 = *DAT_08092b14;
    iVar4 = *(int *)(param_1 + 0x54) - *(int *)(iVar3 + 0x54);
    *(int *)(param_1 + 0x5c) = iVar4;
    iVar3 = (*(int *)(param_1 + 0x58) + DAT_08092b18) - *(int *)(iVar3 + 0x58);
    *(int *)(param_1 + 0x60) = iVar3;
    iVar4 = iVar4 >> 8;
    iVar3 = iVar3 >> 8;
    uVar2 = FUN_08128bf4(iVar4 * iVar4 + iVar3 * iVar3);
    iVar3 = (uVar2 & 0xffff) * 0x100;
    if ((uVar2 & 0xffff) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x600;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    else {
      iVar4 = FUN_08128fb8(*(int *)(param_1 + 0x5c) << 8,iVar3);
      *(int *)(param_1 + 0x5c) = iVar4;
      iVar3 = FUN_08128fb8(*(int *)(param_1 + 0x60) << 8,iVar3);
      *(int *)(param_1 + 0x5c) = iVar4 * 6;
      *(int *)(param_1 + 0x60) = iVar3 * 6;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar3 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54));
  if ((sVar1 != 0) || ((*(uint *)(param_1 + 0x8c) & 4) != 0)) {
    FUN_080928a4(param_1);
  }
  return in_lr;
}


