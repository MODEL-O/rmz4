// undefined FUN_080c8504(void)
// entry 0x80c8504


undefined4 FUN_080c8504(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080c8544);
    FUN_0801cf00(param_1,DAT_080c8548);
    *(undefined1 *)(param_1 + 0x12) = 0x30;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar3 = DAT_080c857c;
  if ((*(byte *)(iVar4 + 10) & 0x10) != 0) {
    iVar3 = 0x800;
  }
  *(int *)(param_1 + 0x54) = *(int *)(iVar4 + 0x54) + iVar3;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar4 + 0x58);
  if ((*(byte *)(iVar4 + 0xc) < 2) && (*(int *)(iVar4 + 0x2c) == 0)) {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
  }
  else {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c8580);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_080c870c(param_1);
  }
  return in_lr;
}


