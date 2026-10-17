// undefined FUN_080b8b28(void)
// entry 0x80b8b28


undefined4 FUN_080b8b28(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  undefined1 local_1c [4];
  
  FUN_08129258(local_1c,DAT_080b8bc0,4);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x40);
    iVar2 = 0;
    do {
      FUN_080b9514(uVar3,param_1 + 0x54,0,local_1c[iVar2]);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    FUN_080b8d64(param_1);
    FUN_08005784(param_1 + 0x74,DAT_080b8bc4);
    FUN_0801cf00(param_1,DAT_080b8bc8);
    *(undefined1 *)(param_1 + 0x12) = 0x40;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 5;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


