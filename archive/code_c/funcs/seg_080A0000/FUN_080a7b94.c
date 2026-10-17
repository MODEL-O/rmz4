// undefined FUN_080a7b94(void)
// entry 0x80a7b94


undefined4 FUN_080a7b94(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined1 *)(param_1 + 0x22) = 1;
  FUN_0801cf00(param_1,DAT_080a7bd0);
  FUN_0801cff0(param_1);
  if (*(byte *)(param_1 + 0x11) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  bVar1 = *(byte *)(param_1 + 0x11) & 1;
  *(byte *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  *(undefined1 *)(param_1 + 0x25) = 0x14;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080a7c30,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_080a7c34;
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar2 = *(int *)(param_1 + 0x54);
    iVar4 = DAT_080a7c90;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x54);
    iVar4 = 0x3000;
  }
  *(int *)(param_1 + 0x54) = iVar2 + iVar4;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x2800;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined2 *)(param_1 + 0xbc) = 0x800;
  *(undefined1 *)(param_1 + 0xbe) = 0;
  *(undefined1 *)(param_1 + 0xbf) = 0;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a7c94);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  FUN_080a7c98(param_1);
  return in_lr;
}


