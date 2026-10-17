// undefined FUN_080aee28(void)
// entry 0x80aee28


undefined4 FUN_080aee28(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined1 *)(param_1 + 0x12) = 0x3c;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  FUN_0801cff0(param_1);
  iVar5 = *(int *)(iVar4 + 0x58) + DAT_080aeec0;
  iVar3 = *(int *)(param_1 + 0x54);
  iVar4 = FUN_08128fb8((*(int *)(iVar4 + 0x54) + DAT_080aeebc) - iVar3,
                       *(undefined1 *)(param_1 + 0x12));
  *(int *)(param_1 + 0x5c) = iVar4;
  iVar6 = *(int *)(param_1 + 0x58);
  iVar5 = FUN_08128fb8(iVar5 - iVar6,*(undefined1 *)(param_1 + 0x12));
  *(int *)(param_1 + 0x60) = iVar5;
  iVar3 = iVar3 + iVar4;
  *(int *)(param_1 + 0x54) = iVar3;
  *(int *)(param_1 + 0x58) = iVar6 + iVar5;
  if (((*(uint *)(param_1 + 0x8c) & 0x800) == 0) ||
     (uVar2 = *(ushort *)(DAT_080aeec4 + 8) & 8, (*(ushort *)(DAT_080aeec4 + 8) & 8) != 0)) {
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  else {
    iVar4 = *DAT_080aeefc;
    *(int *)(iVar4 + 0x54) = iVar3;
    *(int *)(iVar4 + 0x58) = *(int *)(param_1 + 0x58) + 0x1300;
    *(uint *)(iVar4 + 0x60) = uVar2;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(char *)(param_1 + 0xe) = (char)uVar2;
    }
  }
  return in_lr;
}


