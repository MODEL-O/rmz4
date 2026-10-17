// undefined FUN_080b98c0(void)
// entry 0x80b98c0


undefined4 FUN_080b98c0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb6) == '\0') {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080b98e0));
  }
  else {
    FUN_080b9d6c(param_1);
  }
  cVar1 = FUN_080b9e18(param_1);
  if (cVar1 != '\0') {
    FUN_080e67ac(param_1 + 0x54,0,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined1 *)(param_1 + 0x13) = 0x1e;
  }
  cVar1 = FUN_080b9e58(param_1);
  if (cVar1 != '\0') {
    iVar3 = *(int *)(param_1 + 0x2c) + DAT_080b9998;
    *(uint *)(iVar3 + 0x24) = *(uint *)(iVar3 + 0x24) & 0xfffffffe | 2;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b999c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_08002b10(0x1a2);
  }
  if ((*(uint *)(*(int *)(param_1 + 0x2c) + DAT_080b9998 + 0x24) & 4) != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b999c);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


