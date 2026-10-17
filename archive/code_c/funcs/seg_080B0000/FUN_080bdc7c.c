// undefined FUN_080bdc7c(void)
// entry 0x80bdc7c


undefined4 FUN_080bdc7c(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080bdd44);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  iVar3 = DAT_080bdd48;
  iVar2 = *(short *)((*(byte *)(param_1 + 0x11) + 0x40 & 0xff) * 2 + DAT_080bdd48) * 0x2c0;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar2 >> 8;
  iVar3 = *(short *)((uint)*(byte *)(param_1 + 0x11) * 2 + iVar3) * 0x2c0;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar3 >> 8;
  *(undefined4 *)(param_1 + 0xb4) = 0x30;
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  FUN_0801cf00(param_1,DAT_080bdd4c);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080bdd50,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_080bde3c(param_1);
  return in_lr;
}


