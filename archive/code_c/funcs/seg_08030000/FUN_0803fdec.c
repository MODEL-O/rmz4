// undefined FUN_0803fdec(void)
// entry 0x803fdec


undefined4 FUN_0803fdec(int param_1)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x2c);
  FUN_0801cff0();
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  cVar1 = FUN_0803a99c(param_1,3);
  if (*(char *)(iVar4 + 0xfa) == '\x02') {
    cVar1 = '\x01';
  }
  if (((cVar1 != '\0') ||
      (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == -1)) ||
     ((*(uint *)(param_1 + 0x8c) & 4) != 0)) {
    if (cVar1 != -1) {
      FUN_080d0c88(2,param_1 + 0x54);
    }
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803fe68);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_0803fd20(param_1);
  }
  return in_lr;
}


