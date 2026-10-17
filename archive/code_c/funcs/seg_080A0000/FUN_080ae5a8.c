// undefined FUN_080ae5a8(void)
// entry 0x80ae5a8


undefined4 FUN_080ae5a8(int param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cc9c(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    FUN_0801cf00(param_1,0xa200);
    FUN_08005784(param_1 + 0x74,DAT_080ae660);
    *(int *)(param_1 + 0x54) = *(int *)(iVar3 + 0x54) + DAT_080ae664;
    *(int *)(param_1 + 0x58) = *(int *)(iVar3 + 0x58) + DAT_080ae668;
    iVar3 = DAT_080ae66c;
    *(int *)(param_1 + 0x5c) =
         *(short *)((*(byte *)(param_1 + 0xbe) + 0x40 & 0xff) * 2 + DAT_080ae66c) * 7 >> 1;
    *(int *)(param_1 + 0x60) = *(short *)((uint)*(byte *)(param_1 + 0xbe) * 2 + iVar3) * 7 >> 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (((*(uint *)(param_1 + 0x8c) & 1) == 0) || ((*(byte *)(param_1 + 0x97) & 0xf0) != 0x30)) {
    sVar1 = FUN_08007020(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar1 != 0) {
      piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ae69c);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
      FUN_080ae25c(param_1);
    }
  }
  else {
    FUN_08002b10(0x40);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


