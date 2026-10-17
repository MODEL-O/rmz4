// undefined FUN_080c1288(void)
// entry 0x80c1288


undefined4 FUN_080c1288(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080c1308);
    FUN_0801cf00(param_1,DAT_080c130c);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar3 = bVar1 + 1;
  iVar2 = iVar3 * (*(int *)(iVar4 + 0xb8) - *(int *)(iVar4 + 0x54));
  if (iVar2 < 0) {
    iVar2 = iVar2 + 3;
  }
  *(int *)(param_1 + 0x54) = *(int *)(iVar4 + 0x54) + (iVar2 >> 2);
  iVar3 = iVar3 * ((*(int *)(iVar4 + 0xbc) + 0x1800) - *(int *)(iVar4 + 0x58));
  if (iVar3 < 0) {
    iVar3 = iVar3 + 3;
  }
  *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + (iVar3 >> 2) + DAT_080c1310;
  if (1 < *(byte *)(iVar4 + 0xc)) {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


