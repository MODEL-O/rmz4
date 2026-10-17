// undefined FUN_08109388(void)
// entry 0x8109388


undefined4 FUN_08109388(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  iVar2 = *(int *)((uint)*(byte *)(iVar5 + 0x174) * 8 + DAT_08109478);
  uVar4 = (uint)*(byte *)(iVar5 + 0xf1);
  if (uVar4 < *(byte *)(iVar5 + 0xf2)) {
    uVar4 = (uint)*(byte *)(iVar5 + 0xf2);
  }
  if (uVar4 < *(byte *)(iVar5 + 0xf3)) {
    uVar4 = (uint)*(byte *)(iVar5 + 0xf3);
  }
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,uVar4 | 0x9400);
  FUN_0801cff0(param_1);
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  iVar3 = *(int *)(iVar5 + 0x54) + (int)(short)iVar2;
  *(int *)(param_1 + 0x54) = iVar3;
  *(int *)(param_1 + 0x58) = *(int *)(iVar5 + 0x58) + (iVar2 >> 0x10);
  *(int *)(param_1 + 0xb4) = iVar3;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x60) = 0x200;
  *(undefined1 *)(param_1 + 0xbc) = 0;
  *(undefined1 *)(param_1 + 0xbd) = 0x20;
  *(undefined1 *)(param_1 + 0x12) = 0x3c;
  *(undefined2 *)(param_1 + 0xc0) = 0;
  *(undefined2 *)(param_1 + 0xc2) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0810947c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_08109480(param_1);
  return in_lr;
}


