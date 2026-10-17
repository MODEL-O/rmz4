// undefined FUN_080b9aa4(void)
// entry 0x80b9aa4


undefined4 FUN_080b9aa4(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 in_lr;
  char acStack_10 [4];
  
  FUN_08129258(acStack_10,DAT_080b9ad0,4);
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xb4) == '\0') {
      iVar1 = *(int *)(param_1 + 0x54) + DAT_080b9ad4;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x54) + 0x1600;
    }
    *(int *)(param_1 + 0xb8) = iVar1;
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x58);
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(undefined1 *)(param_1 + 0x13) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(char *)(param_1 + 0x12) == '\0') || (*(char *)(param_1 + 0x12) == -1)) {
    FUN_080b9dcc(param_1);
  }
  cVar3 = acStack_10[(uint)*(byte *)(param_1 + 0xf) * 2] + *(char *)(param_1 + 0x12);
  *(char *)(param_1 + 0x12) = cVar3;
  if (*(char *)(param_1 + 0xb4) == '\x01') {
    iVar2 = *(int *)(param_1 + 0xb8) +
            *(short *)((uint)(byte)(cVar3 + 0x40) * 2 + DAT_080b9b44) * -0x16;
    iVar1 = DAT_080b9b44;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xb8) +
            *(short *)((uint)(byte)(cVar3 + 0x40) * 2 + DAT_080b9b88) * 0x16;
    iVar1 = DAT_080b9b88;
  }
  *(int *)(param_1 + 0x54) = iVar2;
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0xbc) + *(short *)((uint)*(byte *)(param_1 + 0x12) * 2 + iVar1) * 0x16;
  return in_lr;
}


