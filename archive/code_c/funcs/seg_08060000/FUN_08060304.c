// undefined FUN_08060304(void)
// entry 0x8060304


undefined4 FUN_08060304(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0806032c);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_14 = *(int *)(param_1 + 0x54);
      iVar2 = DAT_080603a0;
    }
    else {
      local_14 = *(int *)(param_1 + 0x54);
      iVar2 = 0xf00;
    }
    local_14 = local_14 + iVar2;
    local_10 = *(int *)(param_1 + 0x58) + DAT_080603a4;
    FUN_08099e6c(&local_14,0,0,*(byte *)(param_1 + 10) >> 4 & 1);
    FUN_08099e6c(&local_14,0,1,*(byte *)(param_1 + 10) >> 4 & 1);
    FUN_08099e6c(&local_14,0,2,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined1 *)(param_1 + 0xd) = 10;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


