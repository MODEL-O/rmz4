// undefined FUN_080cf010(void)
// entry 0x80cf010


undefined4 FUN_080cf010(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_080cf060);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar1 = *(int *)(param_1 + 0x54);
    iVar3 = DAT_080cf08c;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x54);
    iVar3 = 0x1600;
  }
  *(int *)(param_1 + 0x54) = iVar1 + iVar3;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cf090);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_080ceef4(param_1);
  return in_lr;
}


