// undefined FUN_080e51c8(void)
// entry 0x80e51c8


undefined4 FUN_080e51c8(int param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  int *piVar4;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  sVar2 = FUN_08007c7c();
  if ((sVar2 != 0) || (cVar1 = *(char *)(param_1 + 0x13), cVar1 == '\0')) {
    FUN_080d0c88(2,param_1 + 0x54);
    uVar3 = FUN_08007020(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if ((uVar3 & 0x8000) == 0) {
      FUN_08002b10(0x35);
    }
    else {
      FUN_08002b10(0x31);
    }
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e523c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
    cVar1 = *(char *)(param_1 + 0x13);
  }
  *(char *)(param_1 + 0x13) = cVar1 + -1;
  return in_lr;
}


