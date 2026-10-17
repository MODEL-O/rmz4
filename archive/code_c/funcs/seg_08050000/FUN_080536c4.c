// undefined FUN_080536c4(void)
// entry 0x80536c4


undefined4 FUN_080536c4(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  char acStack_1c [4];
  int local_18;
  int local_14;
  
  FUN_08129258(acStack_1c,DAT_08053748,4);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,0xb600);
    *(undefined4 *)(param_1 + 0xcc) = DAT_0805374c;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  piVar2 = (int *)(param_1 + 0xcc);
  iVar3 = *piVar2 + -1;
  *piVar2 = iVar3;
  iVar1 = FUN_08129050(iVar3,0x78);
  if (iVar1 == 0) {
    iVar1 = FUN_08128fb8(iVar3,0x78);
    local_18 = *(int *)(param_1 + 0xbc) + 0x1400;
    if (acStack_1c[3U - iVar1 & 0xff] == '\x03') {
      local_14 = *(int *)(param_1 + 0xb8) + DAT_08053750;
    }
    else {
      local_14 = *(int *)(param_1 + 0xb8);
    }
    FUN_08089ebc(&local_18,0);
  }
  if (*piVar2 == 0) {
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


