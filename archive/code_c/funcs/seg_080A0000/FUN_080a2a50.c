// undefined FUN_080a2a50(void)
// entry 0x80a2a50


undefined4 FUN_080a2a50(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(param_1 + 0x25) = 0x18;
    FUN_08005784(param_1 + 0x74,DAT_080a2abc);
    FUN_0801cf00(param_1,DAT_080a2ac0);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 100) = 8;
    *(undefined4 *)(param_1 + 0x60) = 0x300;
    *(uint *)(param_1 + 0x68) = (bVar1 >> 4 & 1) * 2 + -1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x68) * *(int *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar2;
  if (*(int *)(param_1 + 0x60) < iVar2) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x60);
  }
  return in_lr;
}


