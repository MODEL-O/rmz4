// undefined FUN_080493ac(void)
// entry 0x80493ac


undefined4 FUN_080493ac(int param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 in_lr;
  
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080493ec);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_0801cf00(param_1,DAT_080493f0);
  }
  else {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfb;
    *(undefined2 *)(param_1 + 0x20) = 0;
    *(undefined1 *)(param_1 + 0x22) = 0;
    FUN_0801cf00(param_1,DAT_08049458);
  }
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_0804945c,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_08049460;
  puVar5 = DAT_0804950c;
  puVar1 = DAT_080494ac;
  if (*(char *)(param_1 + 0x10) == '\0') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar3 = (uint)*(byte *)(param_1 + 0x11) * 0xc0 + DAT_08049478;
    }
    else {
      iVar3 = (uint)*(byte *)(param_1 + 0x11) * -0xc0 + 0x2c0;
    }
    *(int *)(param_1 + 0x5c) = iVar3;
    iVar3 = DAT_0804947c;
  }
  else {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar4 = DAT_08049510 * *DAT_0804950c + DAT_08049514;
      *DAT_0804950c = uVar4 & 0x7fffffff;
      iVar3 = DAT_08049518 + ((uVar4 & 0x7fffffff) >> 0x10 & 3) * -0x20;
    }
    else {
      uVar4 = *DAT_080494ac * DAT_080494b0 + DAT_080494b4;
      *DAT_080494ac = uVar4 & 0x7fffffff;
      iVar3 = ((uVar4 & 0x7fffffff) >> 0x10 & 3) * 0x20 + 0x2c0;
      puVar5 = puVar1;
    }
    *(int *)(param_1 + 0x5c) = iVar3;
    uVar4 = *puVar5 * DAT_08049510 + DAT_08049514;
    *puVar5 = uVar4 & 0x7fffffff;
    iVar3 = (((uVar4 & 0x7fffffff) >> 0x10 & 7) + 2) * -0x40;
  }
  *(int *)(param_1 + 0x60) = iVar3;
  *(undefined4 *)(param_1 + 0x68) = 0x40;
  *(undefined1 *)(param_1 + 0x12) = 0x78;
  FUN_0804951c(param_1);
  return in_lr;
}


