// undefined FUN_080535a0(void)
// entry 0x80535a0


undefined4 FUN_080535a0(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  undefined1 auStack_1c [4];
  int local_18;
  undefined4 local_14;
  
  FUN_08129258(auStack_1c,DAT_080535e4,4);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined4 *)(param_1 + 0xcc) = 0xa1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  piVar3 = (int *)(param_1 + 0xcc);
  iVar2 = *piVar3;
  *piVar3 = iVar2 + -1;
  if (*(int *)(param_1 + 200) == 0) {
    uVar1 = 4;
  }
  else {
    iVar2 = FUN_08129050(iVar2 + -1,0x50);
    if (iVar2 == 0) {
      FUN_08002b10(DAT_0805362c);
      local_18 = *(int *)(param_1 + 0x54) + DAT_08053630;
      local_14 = *(undefined4 *)(param_1 + 0x58);
      FUN_080bf530(param_1,&local_18,1,auStack_1c[*(byte *)(*(int *)(param_1 + 200) + 0xb5)]);
    }
    if (*piVar3 != 0) {
      return in_lr;
    }
    uVar1 = 3;
  }
  *(undefined1 *)(param_1 + 0xe) = uVar1;
  *(undefined1 *)(param_1 + 0xf) = 0;
  return in_lr;
}


