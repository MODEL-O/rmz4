// undefined FUN_080d07fc(void)
// entry 0x80d07fc


undefined4 FUN_080d07fc(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d0854);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_0801cf00(param_1,DAT_080d0858);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined4 *)(param_1 + 0x5c) = DAT_080d085c;
    iVar2 = *(int *)(param_1 + 0x54);
    iVar3 = DAT_080d0860;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0x140;
    iVar2 = *(int *)(param_1 + 0x54);
    iVar3 = 0x800;
  }
  *(int *)(param_1 + 0x54) = iVar2 + iVar3;
  *(undefined1 *)(param_1 + 0xb4) = 1;
  *(undefined1 *)(param_1 + 0xb5) = 1;
  *(undefined1 *)(param_1 + 0x12) = 0x14;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  FUN_080d0898(param_1);
  return in_lr;
}


