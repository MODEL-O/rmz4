// undefined FUN_080f845c(void)
// entry 0x80f845c


undefined4 FUN_080f845c(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x11) * 2 + DAT_080f8498));
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined4 *)(param_1 + 0x30) = DAT_080f849c;
    uVar1 = 0xf;
  }
  else {
    if ((*(ushort *)(DAT_080f84c0 + 0x1d0) & 0x7f) == 0xf) {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
      uVar2 = DAT_080f84c4;
    }
    else {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
      uVar2 = DAT_080f8508;
    }
    *(undefined4 *)(param_1 + 0x30) = uVar2;
    uVar1 = (undefined2)DAT_080f850c;
  }
  *(undefined2 *)(param_1 + 0x26) = uVar1;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_080f8510));
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080f8514);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  FUN_080f8518(param_1);
  return in_lr;
}


