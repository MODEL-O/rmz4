// undefined FUN_080b7fa8(void)
// entry 0x80b7fa8


undefined4 FUN_080b7fa8(char param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_0000001c;
  
  if (param_1 == '\0') {
    *(int *)(unaff_r7 + 0x54) = *(int *)(*(int *)(unaff_r7 + 0x28) + 0x54) + 0xe00;
    *(int *)(unaff_r7 + 0x58) = *(int *)(*(int *)(unaff_r7 + 0x28) + 0x58) + 0x2800;
  }
  else {
    uVar2 = *(uint *)(unaff_r7 + 100);
    *(uint *)(unaff_r7 + 100) = uVar2 + 1;
    if ((uVar2 & 3) == 0) {
      FUN_080e41b8(unaff_r7 + 0x54,3,0);
    }
    iVar4 = *(int *)(unaff_r7 + 0x28);
    iVar5 = *(int *)(unaff_r7 + 0x54);
    iVar3 = FUN_08128fb8(*(int *)(iVar4 + 0x54) - (DAT_080b8004 + iVar5),
                         *(undefined1 *)(unaff_r7 + 0x13));
    *(int *)(unaff_r7 + 0x5c) = iVar3;
    iVar6 = *(int *)(unaff_r7 + 0x58);
    iVar4 = FUN_08128fb8(*(int *)(iVar4 + 0x58) - (iVar6 + DAT_080b8008),
                         *(undefined1 *)(unaff_r7 + 0x13));
    *(int *)(unaff_r7 + 0x60) = iVar4;
    *(int *)(unaff_r7 + 0x54) = iVar3 + iVar5;
    *(int *)(unaff_r7 + 0x58) = iVar6 + iVar4;
  }
  bVar1 = *(char *)(unaff_r7 + 0x12) + 1;
  *(byte *)(unaff_r7 + 0x12) = bVar1;
  if (0x22 < bVar1) {
    *(undefined1 *)(unaff_r7 + 0x12) = 0x22;
  }
  *(char *)(unaff_r7 + 0x24) = -*(char *)(unaff_r7 + 0x12);
  if (*(char *)(unaff_r10 + 0xd6) == '\0') {
    *(char *)(unaff_r7 + 0xd) = *(char *)(unaff_r7 + 0xd) + '\x01';
    *(undefined1 *)(unaff_r7 + 0xe) = 0;
  }
  return in_stack_0000001c;
}


