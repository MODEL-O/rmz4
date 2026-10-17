// undefined FUN_080b8060(void)
// entry 0x80b8060


undefined4 FUN_080b8060(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_08002b10(0x59);
    *(undefined1 *)(param_1 + 0x12) = 0x22;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  uVar3 = *(uint *)(param_1 + 100);
  *(uint *)(param_1 + 100) = uVar3 + 1;
  if ((uVar3 & 3) == 0) {
    FUN_080e41b8(param_1 + 0x54,3,0);
  }
  iVar6 = *(int *)(param_1 + 0x54);
  iVar4 = FUN_08128fb8(*(int *)(iVar2 + 0x54) - (iVar6 + 0x200),*(undefined1 *)(param_1 + 0x12));
  *(int *)(param_1 + 0x5c) = iVar4;
  iVar5 = *(int *)(param_1 + 0x58);
  iVar2 = FUN_08128fb8(*(int *)(iVar2 + 0x58) - (iVar5 + DAT_080b80f8),
                       *(undefined1 *)(param_1 + 0x12));
  *(int *)(param_1 + 0x60) = iVar2;
  *(int *)(param_1 + 0x54) = iVar6 + iVar4;
  *(int *)(param_1 + 0x58) = iVar5 + iVar2;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  *(char *)(param_1 + 0x24) = -cVar1;
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


