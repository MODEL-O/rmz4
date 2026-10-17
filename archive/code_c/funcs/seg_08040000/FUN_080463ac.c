// undefined FUN_080463ac(void)
// entry 0x80463ac


undefined4 FUN_080463ac(int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08046418);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_0804641c);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_08046420,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_08046424;
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar3 = *(int *)(param_1 + 0x58) + DAT_08046444;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x58) + 0xa00;
  }
  *(int *)(param_1 + 0x58) = iVar3;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (*(char *)(param_1 + 0x11) == '\0') {
      uVar1 = 0x94;
    }
    else {
      uVar1 = 0x6c;
    }
  }
  else if (*(char *)(param_1 + 0x11) == '\0') {
    uVar1 = 0xec;
  }
  else {
    uVar1 = 0x14;
  }
  *(undefined1 *)(param_1 + 0x12) = uVar1;
  iVar3 = DAT_080464b8;
  *(int *)(param_1 + 0x5c) =
       *(short *)((*(byte *)(param_1 + 0x12) + 0x40 & 0xff) * 2 + DAT_080464b8) * 6;
  *(int *)(param_1 + 0x60) = *(short *)((uint)*(byte *)(param_1 + 0x12) * 2 + iVar3) * 6;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x58);
  FUN_08046274(*(undefined4 *)(param_1 + 0x2c),param_1,0);
  FUN_08046330(param_1);
  return in_lr;
}


