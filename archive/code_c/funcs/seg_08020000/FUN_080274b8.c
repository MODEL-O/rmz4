// undefined FUN_080274b8(void)
// entry 0x80274b8


undefined4 FUN_080274b8(undefined1 *param_1,undefined1 param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 in_lr;
  
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[3] = 0;
  puVar2 = DAT_08027578;
  iVar1 = DAT_08027574;
  iVar4 = 0xb;
  puVar3 = (undefined4 *)(param_1 + 0xc0);
  do {
    *puVar3 = 0;
    puVar3 = puVar3 + -4;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined2 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined2 *)(param_1 + 0x14a) = 0;
  *(undefined2 *)(param_1 + 0x14c) = 0;
  *(undefined2 *)(param_1 + 0x14e) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0xffffffff;
  *(short *)(param_1 + 0x15e) = (short)DAT_0802757c;
  *(undefined2 *)(param_1 + 0x15c) = 0xffff;
  *(undefined4 *)(param_1 + 0x164) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x160) = 0xffffffff;
  *(undefined1 *)(iVar1 + 0x12) = 0;
  *puVar2 = 0;
  iVar1 = DAT_08027580;
  *(undefined1 *)((int)puVar2 + DAT_08027580) = 0;
  *(undefined1 *)((int)puVar2 + iVar1 + -1) = 0;
  *(undefined1 *)((int)puVar2 + iVar1 + -2) = 0;
  FUN_080029c0();
  return in_lr;
}


