// undefined FUN_08090d0c(void)
// entry 0x8090d0c


undefined4 FUN_08090d0c(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(byte *)(iVar3 + 0xc) < 2) {
    FUN_0801cff0(param_1);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
    *(uint *)(param_1 + 0x58) = *(int *)(iVar3 + 0x58) + (bVar1 + 1) * -0x8000;
  }
  else {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08090d34);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_08090d54(param_1);
  }
  return in_lr;
}


