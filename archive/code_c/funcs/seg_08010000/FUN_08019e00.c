// undefined FUN_08019e00(void)
// entry 0x8019e00


undefined4 FUN_08019e00(int param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  puVar2 = DAT_08019e40;
  iVar1 = DAT_08019e3c;
  if (*(char *)(param_1 + 0xe) == '\0') {
    *DAT_08019e40 = (short)DAT_08019e44;
    puVar2[1] = (short)DAT_08019e48;
    *(undefined4 *)(iVar1 + DAT_08019e4c) = 0x280000;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  if (DAT_08019e54 < (uint)(*(int *)(param_1 + 0x34) + DAT_08019e50)) {
    uVar3 = 0x280000;
    iVar4 = DAT_08019e68;
  }
  else {
    uVar3 = 0x5f000;
    iVar4 = DAT_08019e4c;
  }
  *(undefined4 *)(iVar1 + iVar4) = uVar3;
  return in_lr;
}


