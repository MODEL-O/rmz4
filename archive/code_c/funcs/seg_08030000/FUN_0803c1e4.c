// undefined FUN_0803c1e4(void)
// entry 0x803c1e4


undefined8 FUN_0803c1e4(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0xb4);
  if (*(char *)(param_1 + 0xc3) == '\0') {
    uVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    uVar3 = uVar2 & 0xffff;
    if ((uVar2 & 0x8000) != 0) {
      uVar3 = 0;
    }
    if ((uVar3 & 0xf) == 0xf) {
      uVar3 = 0;
    }
    if ((uVar3 & 0xf) == 0) {
      if ((*(uint *)(iVar4 + 0x8c) & 8) == 0) {
        uVar2 = FUN_0801fb14(DAT_0803c26c,param_1 + 0x54);
        if ((uint)(int)*(short *)((uint)*(byte *)(param_1 + 0x10) * 2 + DAT_0803c270) < uVar2) {
          uVar1 = 2;
        }
        else {
          uVar1 = 0;
        }
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      FUN_080d1bcc(param_1 + 0x54,7,*(byte *)(param_1 + 10) >> 4 & 1);
      uVar1 = 1;
    }
  }
  else {
    *(char *)(param_1 + 0xc3) = *(char *)(param_1 + 0xc3) + -1;
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}


