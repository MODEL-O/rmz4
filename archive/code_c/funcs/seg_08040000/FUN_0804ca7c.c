// undefined FUN_0804ca7c(void)
// entry 0x804ca7c


undefined4 FUN_0804ca7c(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  iVar3 = *(int *)(param_1 + 0x2c);
  FUN_0801cff0();
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar1 = *(int *)(iVar3 + 0x54) +
            (int)*(short *)((uint)*(byte *)(param_1 + 0x11) * 2 + DAT_0804cb00);
  }
  else {
    iVar1 = *(int *)(iVar3 + 0x54) -
            (int)*(short *)((uint)*(byte *)(param_1 + 0x11) * 2 + DAT_0804caa4);
  }
  *(int *)(param_1 + 0x54) = iVar1;
  if ((1 < *(byte *)(iVar3 + 0xc)) ||
     ((int)(4 - (uint)*(byte *)(iVar3 + 0xbe)) < (int)(uint)*(byte *)(param_1 + 0x11))) {
    FUN_0804c628(uVar4,param_1,2,0);
    *(char *)(param_1 + 0xbd) = *(char *)(param_1 + 0xbd) + -1;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804cb04);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  return in_lr;
}


