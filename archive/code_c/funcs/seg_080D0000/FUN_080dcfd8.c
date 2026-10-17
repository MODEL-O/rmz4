// undefined FUN_080dcfd8(void)
// entry 0x80dcfd8


undefined4 FUN_080dcfd8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_080dd03c);
  FUN_0801cff0(param_1);
  if (*(byte *)(param_1 + 0x11) == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined1 *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
  }
  else if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
    *(uint *)(param_1 + 0x54) = *(int *)(iVar4 + 0x54) + (uint)*(byte *)(param_1 + 0x11) * -0x400;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined1 *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  }
  else {
    *(uint *)(param_1 + 0x54) = *(int *)(iVar4 + 0x54) + (uint)*(byte *)(param_1 + 0x11) * 0x400;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined1 *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  }
  if ((*(byte *)(iVar4 + 10) & 0x20) == 0) {
    uVar1 = FUN_08008534(*(undefined4 *)(iVar4 + 0x54),*(undefined4 *)(iVar4 + 0x58));
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
    *(undefined1 *)(param_1 + 0x4d) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | 0x20;
    uVar1 = FUN_08008748(*(undefined4 *)(iVar4 + 0x54),*(undefined4 *)(iVar4 + 0x58));
  }
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  if ((*(byte *)(iVar4 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(param_1 + 0x54);
    iVar4 = DAT_080dd104;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x54);
    iVar4 = 0x600;
  }
  *(int *)(param_1 + 0x54) = iVar2 + iVar4;
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080dd108);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  FUN_080dcdd8(param_1);
  return in_lr;
}


