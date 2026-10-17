// undefined FUN_080b3dbc(void)
// entry 0x80b3dbc


undefined4 FUN_080b3dbc(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = FUN_0802b3e4(*(undefined4 *)(param_1 + 0x2c));
  if (iVar3 != 0) {
    FUN_08005784(param_1 + 0x74,DAT_080b3e20);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0x100;
    iVar4 = *(int *)(*DAT_080b3e24 + 0x54);
    iVar3 = *(int *)(param_1 + 0x54);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0xffffff00;
    }
    cVar1 = FUN_080b3eac(param_1);
    if ((cVar1 == '\0') || ((bool)(~(*(byte *)(param_1 + 10) >> 4) & 1) != iVar3 < iVar4)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
    }
    *(undefined1 *)(param_1 + 0xd) = uVar2;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


