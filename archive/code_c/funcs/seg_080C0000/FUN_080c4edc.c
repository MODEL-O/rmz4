// undefined FUN_080c4edc(void)
// entry 0x80c4edc


undefined4 FUN_080c4edc(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(iVar5 + 10) >> 4;
  uVar4 = bVar1 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(param_1 + 0x12) =
         **(undefined1 **)((uint)*(byte *)(param_1 + 0x11) * 4 + DAT_080c4f1c);
    *(undefined1 *)(param_1 + 0x13) = 3;
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  iVar3 = DAT_080c4fcc;
  if ((*(byte *)(iVar5 + 10) & 0x10) != 0) {
    iVar3 = 0x3c00;
  }
  iVar3 = *(int *)(iVar5 + 0x54) + iVar3;
  *(int *)(param_1 + 0x54) = iVar3;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar5 + 0x58);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    iVar6 = (uint)*(byte *)(param_1 + 0x11) * 4;
    iVar5 = FUN_080c4c20(param_1,param_1 + 0x54,
                         (0x7800 - *(int *)((3 - (uint)*(byte *)(param_1 + 0x13)) * 4 +
                                           *(int *)(iVar6 + DAT_080c4fd0))) +
                         (*(int *)(iVar5 + 0xd0) - iVar3) * (uVar4 * 2 + -1));
    if (iVar5 != 0) {
      *(char *)(param_1 + 0xb4) = *(char *)(param_1 + 0xb4) + '\x01';
    }
    cVar2 = *(char *)(param_1 + 0x13);
    *(char *)(param_1 + 0x13) = cVar2 + -1;
    if (cVar2 == '\x01') {
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x12) =
           *(undefined1 *)(*(int *)(iVar6 + DAT_080c4ff4) + (3 - (uint)*(byte *)(param_1 + 0x13)));
    }
  }
  return in_lr;
}


