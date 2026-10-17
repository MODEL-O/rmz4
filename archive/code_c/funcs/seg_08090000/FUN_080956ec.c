// undefined FUN_080956ec(void)
// entry 0x80956ec


undefined4 FUN_080956ec(int param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  undefined1 auStack_1c [4];
  byte abStack_18 [4];
  
  FUN_08129258(auStack_1c,PTR_DAT_080957c4,4);
  FUN_08129258(abStack_18,PTR_DAT_080957c8,4);
  puVar2 = PTR_DAT_080957cc;
  uVar5 = (uint)abStack_18[*(byte *)(param_1 + 0x11)];
  uVar5 = uVar5 + (0x140 - uVar5) * (*(byte *)(param_1 + 10) >> 4 & 1) * 2 & 0xff;
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar4 = *(short *)(PTR_DAT_080957cc + (uVar5 + 0x40 & 0xff) * 2) * 0x180;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar4 >> 8;
    iVar4 = *(short *)(puVar2 + uVar5 * 2) * 0x180;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar4 >> 8;
    uVar1 = auStack_1c[*(byte *)(param_1 + 0x11)];
    *(undefined1 *)(param_1 + 0x12) = uVar1;
    *(undefined1 *)(param_1 + 0x13) = uVar1;
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  FUN_0801cff0(param_1);
  iVar4 = FUN_08128fb8((uint)*(byte *)(param_1 + 0x12) * *(int *)(param_1 + 0x5c),
                       *(undefined1 *)(param_1 + 0x13));
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
  iVar4 = FUN_08128fb8((uint)*(byte *)(param_1 + 0x12) * *(int *)(param_1 + 0x60),
                       *(undefined1 *)(param_1 + 0x13));
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
  FUN_08095cd8(param_1);
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


