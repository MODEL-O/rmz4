// undefined FUN_080c5d70(void)
// entry 0x80c5d70


undefined4 FUN_080c5d70(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  int local_1c;
  undefined4 local_18;
  
  uVar3 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080c5e44);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 100) = 0x20;
    *(uint *)(param_1 + 0x68) = (uint)*(byte *)(param_1 + 0xb8);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  iVar4 = uVar3 * 2 + -1;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4 * *(int *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar2;
  if (*(int *)(param_1 + 0xb4) < iVar2) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0xb4);
  }
  iVar2 = FUN_08129050(*(undefined4 *)(param_1 + 0x68),9);
  if (iVar2 == 0) {
    local_1c = *(int *)(param_1 + 0x54) + iVar4 * -0x1000;
    local_18 = *(undefined4 *)(param_1 + 0x58);
    FUN_080de468(&local_1c,0,uVar3);
  }
  uVar3 = FUN_0801fb14(DAT_080c5e48,param_1 + 0x54);
  if (0x2000 < uVar3) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c5e4c);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0xc);
  }
  return in_lr;
}


