// undefined FUN_080e2bec(void)
// entry 0x80e2bec


undefined4 FUN_080e2bec(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  iVar2 = DAT_080e2c60;
  iVar3 = DAT_080e2c5c;
  puVar1 = DAT_080e2c58;
  uVar4 = DAT_080e2c5c * *DAT_080e2c58 + DAT_080e2c60;
  *DAT_080e2c58 = uVar4 & 0x7fffffff;
  FUN_0801cf00(param_1,(uVar4 & 0x7fffffff) >> 0x10 & 1 | DAT_080e2c64);
  uVar4 = iVar3 * *puVar1 + iVar2;
  *(uint *)(param_1 + 0x5c) = ((uVar4 & 0x1ffffff) >> 0x10) - 0xff;
  uVar4 = iVar3 * (uVar4 & 0x7fffffff) + iVar2;
  *puVar1 = uVar4 & 0x7fffffff;
  iVar3 = (((uVar4 & 0x7fffffff) >> 0x10 & DAT_080e2c68) + 0x100) * -0x100;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar3 >> 8;
  *(undefined1 *)(param_1 + 0xd) = 2;
  return in_lr;
}


