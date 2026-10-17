// undefined FUN_0804cea8(void)
// entry 0x804cea8


undefined4 FUN_0804cea8(int param_1)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x2c);
  FUN_0801cff0();
  if (*(char *)(iVar6 + 0xfa) == '\x02') {
    FUN_080d0c88(2,param_1 + 0x54);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804cefc);
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar4 = *(undefined4 *)(*piVar3 + 0xc);
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    sVar2 = FUN_0804d05c(param_1);
    if (sVar2 != 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sVar2 = FUN_0804d05c(param_1);
    if (sVar2 == 0) {
      iVar6 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar6;
      if (0x700 < iVar6) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
    }
    else {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60) >> 1;
    }
    uVar5 = FUN_0801fb14(DAT_0804cfa0,param_1 + 0x54);
    if (uVar5 < 0x4001) {
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if ((cVar1 != -1) && ((*(uint *)(param_1 + 0x8c) & DAT_0804cff8) == 0)) {
        return in_lr;
      }
      if ((*(uint *)(param_1 + 0x8c) & 0x1000) != 0) {
        FUN_08002b10(0x2b);
      }
      FUN_080d0c88(2,param_1 + 0x54);
      piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804cffc);
      *(undefined4 *)(param_1 + 0xc) = 2;
      uVar4 = *(undefined4 *)(*piVar3 + 8);
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804cfa4);
      *(undefined4 *)(param_1 + 0xc) = 3;
      uVar4 = *(undefined4 *)(*piVar3 + 0xc);
    }
  }
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  return in_lr;
}


