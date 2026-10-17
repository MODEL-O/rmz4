// undefined FUN_080bbafc(void)
// entry 0x80bbafc


undefined4 FUN_080bbafc(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xf) == '\0') {
    local_10 = *(int *)(iVar2 + 0xb4) + 0x7800;
    local_c = *(int *)(iVar2 + 0xb8) + DAT_080bbb80;
    FUN_080d03dc(iVar2,&local_10,0,*(byte *)(param_1 + 10) >> 4 & 1);
    FUN_08005784(param_1 + 0x74,DAT_080bbb84);
    FUN_0801cf00(param_1,DAT_080bbb88);
    *(undefined1 *)(param_1 + 0x12) = 0x10;
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


