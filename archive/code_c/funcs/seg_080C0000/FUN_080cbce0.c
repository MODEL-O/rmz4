// undefined FUN_080cbce0(void)
// entry 0x80cbce0


undefined4 FUN_080cbce0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,0x9200);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x58);
    *(int *)(param_1 + 100) = *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0x58);
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  FUN_08005784(param_1 + 0x74,DAT_080cbd80);
  iVar2 = (int)*(short *)((0x10 - *(byte *)(param_1 + 0x12) & 0x3f) * 8 + DAT_080cbd84);
  iVar1 = iVar2 * *(int *)(param_1 + 100);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x5c) + (iVar1 >> 8);
  iVar2 = iVar2 * *(int *)(param_1 + 0x68);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x60) + (iVar2 >> 8);
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


