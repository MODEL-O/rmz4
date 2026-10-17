// undefined FUN_080ab8ec(void)
// entry 0x80ab8ec


undefined4 FUN_080ab8ec(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  FUN_0801cc9c();
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_080ab930);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(iVar3 + 0x1c);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0x80;
    uVar1 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0xffffff80;
    uVar1 = 2;
  }
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined1 *)(param_1 + 0x12) = 0;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ab960);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_080ab964(param_1);
  return in_lr;
}


